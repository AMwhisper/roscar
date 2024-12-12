import can
import rclpy
from rclpy.node import Node 
from roscar_interfaces.msg import Pid, Can

class CanControlNode(Node):
    def __init__(self, channel='can0', bitrate=500000):
      
        self.channel = channel
        self.bitrate = bitrate
        self.bus = None
        self.motor_can_ids = [0x01, 0x02, 0x03, 0x04]  
        self.pid_data = []

        super().__init__('can_node')
        self.subscription = self.create_subscription(
            Pid,
            'pid_topic',   
            self.pid_callback,
            10
        ) 
        

        self.publisher = self.create_publisher(
            Can, 
            'can_topic', 
            10
        )    

        self.setup_can()
        self.timer = self.create_timer(0.02, self.timer_callback)

    def timer_callback(self):
        self.send_motor_command()
        self.read_motor_speed()
       

    def setup_can(self):
 
        try:
            self.bus = can.interface.Bus(channel=self.channel, bustype='socketcan', bitrate=self.bitrate)
            print(f"CAN interface {self.channel} initialized with bitrate {self.bitrate} bps")
        except Exception as e:
            print(f"Failed to initialize CAN interface: {e}")
            exit(1)

    def pid_callback(self,msg):
            self.pid_data = msg.pid
            self.get_logger().info(f"pid = {self.pid_data}")

    def send_motor_command(self):

        for i, pid_output in enumerate(self.pid_data):
            pid_output = max(min(int(pid_output), 32767), -32768)  
            motor_id = self.motor_can_ids[i]

            low_byte = pid_output & 0xFF
            high_byte = (pid_output >> 8) & 0xFF

            data = [low_byte, high_byte]
            message = can.Message(arbitration_id=motor_id, data=data, is_extended_id=False)

            try:
                self.bus.send(message)
                self.get_logger().info(f"Sent message to motor {motor_id}: {data}")
            except can.CanError as e:
                self.get_logger().error(f"Failed to send message to motor {motor_id}: {e}")

    
    def read_motor_speed(self):
        motor_speeds = []
        for i, motor_id in enumerate(self.motor_can_ids):
            motor_id = self.motor_can_ids[i]
            motor_msg = can.Message(arbitration_id=motor_id, data=[0x00, 0x01, 0x02], is_extended_id=False)
            try:
                self.bus.send(motor_msg)
                self.get_logger().info(f"Sent speed request to motor {motor_id}")
            except can.CanError as e:
                self.get_logger().error(f"Failed to send speed request to motor {motor_id}: {e}")
                motor_speeds.append(0.0)
                continue
 
            response = self.bus.recv(timeout=1.0)  # 1秒超时.
            
            if response and response.arbitration_id == motor_id and len(response.data) >= 2:
                speed = float(response.data[0] | (response.data[1] << 8))
                motor_speeds.append(speed)
                self.get_logger().info(f"Received speed response for motor {motor_id}: {speed}")
              
            else:  
                self.get_logger().warning(f"No response received for motor {motor_id}")
                motor_speeds.append(0.0)
                

        msg = Can()
        msg.can = motor_speeds
        self.publisher.publish(msg)
        self.get_logger().info(f"Published speed response for motor {motor_speeds}")

def main(args=None):
    rclpy.init(args=args)
    node = CanControlNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
