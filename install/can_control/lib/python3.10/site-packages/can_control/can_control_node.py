import can
import rclpy
from rclpy.node import Node 
from roscar_interfaces.msg import Pid, Can
import numpy as np
class CanControlNode(Node):
    def __init__(self, channel='can0', bitrate=1000000):
      
        self.channel = channel
        self.bitrate = bitrate
        self.bus = None
        self.motor_response_ids = [0x201, 0x202, 0x203, 0x204]  
        self.chassis_pid_data = []
        self.gimbal_pid_data = []

        super().__init__('can_node')
        self.subscription = self.create_subscription(
            Pid,
            'pid_topic',   
            self.chassis_pid_callback,
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
    def gimbal_pid_callback(self,msg):
        self.gimbal_pid_data = np.array([0, 0, 0, 0])

    def chassis_pid_callback(self,msg):
        self.chassis_pid_data = msg.chassis_pid
        # self.get_logger().info(f"pid = {self.chassis_pid_data}")

    def send_motor_command(self):
        pid_data = np.concatenate([self.chassis_pid_data, self.gimbal_pid_data])
        grouped_motor = [pid_data[:4], pid_data[4:8]]  # 分为两组
        arbitration_ids = [0x200, 0x1FF]  # 每组对应的控制 ID

        for i, motor_group in enumerate(grouped_motor):
     
            # 创建数据帧
            data = [0x00] * 8
            for j, pid_output in enumerate(motor_group):
                if j >= 4:  # 确保每帧最多控制 4 个电机
                    break
                pid_output = max(min(int(pid_output), 16384), -16384)  # 限制值范围
                high_byte = (pid_output >> 8) & 0xFF  # 高 8 位
                low_byte = pid_output & 0xFF          # 低 8 位
                data[j * 2] = high_byte
                data[j * 2 + 1] = low_byte
                # print (pid_output, high_byte, low_byte)
            # 发送 CAN 帧
            message = can.Message(arbitration_id=arbitration_ids[i], data=data, is_extended_id=False)

            try:
                self.bus.send(message)
                
                self.get_logger().info(f"Sent message to motor {hex(arbitration_ids[i])}: {data}")
                self.get_logger().info(f"{message}")
            except can.CanError as e:
                self.get_logger().error(f"Failed to send message to motor {hex(arbitration_ids[i])}: {e}")

    
    def read_motor_speed(self):
        motor_speeds = []
        for i, motor_id in enumerate(self.motor_response_ids):
            motor_id = self.motor_response_ids[i]
 
            response = self.bus.recv(timeout=1.0)  # 1秒超时.
            
            if response and response.arbitration_id == motor_id and len(response.data) >= 2:
                speed = float(response.data[0] | (response.data[1] << 8))
                motor_speeds.append(speed)
                # self.get_logger().info(f"Received speed response for motor {motor_id}: {speed}")
              
            else:  
                # self.get_logger().warning(f"No response received for motor {motor_id}")
                motor_speeds.append(0.0)
                

        msg = Can()
        msg.can = motor_speeds
        self.publisher.publish(msg)
        # self.get_logger().info(f"Published speed response for motor {motor_speeds}")

def main(args=None):
    rclpy.init(args=args)
    node = CanControlNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
