import can
import rclpy
from rclpy.node import Node
from std_msgs.msg import String  # 替换为实际的消息类型
from car_task.chassis import ChassisController

class CanControlNode(Node):
    def __init__(self, channel='can0', bitrate=500000):
      
        self.channel = channel
        self.bitrate = bitrate
        self.bus = None
        self.chassis_controller = ChassisController()
        self.motor_can_ids = [0x00, 0x01, 0x02, 0x03]  

    def setup_can(self):
 
        try:
            self.bus = can.interface.Bus(channel=self.channel, bustype='socketcan', bitrate=self.bitrate)
            print(f"CAN interface {self.channel} initialized with bitrate {self.bitrate} bps")
        except Exception as e:
            print(f"Failed to initialize CAN interface: {e}")
            exit(1)

    def send_motor_command(self):
        self.chassis_controller.calculate_pid_outputs()
        pid_outputs = self.chassis_controller.outputs

        for i, pid_output in enumerate(pid_outputs):
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

    
    def read_motor_speed(bus, motor_id):
        msg = can.Message(arbitration_id=motor_id, data=[0x00, 0x01, 0x02], is_extended_id=False)
        bus.send(msg)

         # 接收反馈报文
        response = bus.recv(timeout=1.0)  # 1秒超时
        if response and response.arbitration_id == motor_id:
            
            speed = response.data[0] | (response.data[1] << 8)
            return speed
        return None

def main(args=None):
    rclpy.init(args=args)
    node = CanControlNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
