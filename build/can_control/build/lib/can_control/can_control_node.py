import can
import rclpy
import struct
from rclpy.node import Node
from roscar_interfaces.msg import Pid, Can
import numpy as np

class CanControlNode(Node):
    def __init__(self, channel='can0', bitrate=1000000):
        super().__init__('can_node')
        self.channel = channel
        self.bitrate = bitrate
        self.bus = None
        self.motor_response_ids = [0x201, 0x202, 0x203, 0x204]
        self.chassis_pid_data = np.array([0, 0, 0, 0])  # Initialize PID data
        self.gimbal_pid_data = np.array([0, 0, 0, 0])

        # Initialize subscription and publisher
        self.subscription = self.create_subscription(
            Pid, 'pid_topic', self.chassis_pid_callback, 10
        )
        self.publisher = self.create_publisher(Can, 'can_topic', 10)

        # Setup CAN interface
        self.setup_can()

        # Timer for periodic tasks
        self.timer = self.create_timer(0.02, self.timer_callback)

    def setup_can(self):
        """Initialize CAN interfaces."""
        try:
            self.bus = can.interface.Bus(channel=self.channel, bustype='socketcan', bitrate=self.bitrate)
            self.get_logger().info(f"CAN interface {self.channel} initialized with bitrate {self.bitrate} bps")
        except Exception as e:
            self.get_logger().error(f"Failed to initialize CAN interface: {e}")
            exit(1)

    def chassis_pid_callback(self, msg):
        """Callback to update chassis PID data."""
        self.chassis_pid_data = msg.chassis_pid
        # self.get_logger().info(f"Updated chassis PID data: {self.chassis_pid_data}")

    def bridge_send_motor(self, safety_mode):
        """Send motor control commands via CAN."""
        can_x = [self.bus, self.bus]  # Using the same CAN interface for simplicity
        can_send_id = [0x200, 0x1ff, 0x2ff]
        
        for i in range(2):  # CAN1 and CAN2
            for j in range(3):  # Can_Send_Id index
                is_not_empty = np.any(self.chassis_pid_data != 0)  # Check if PID data is non-zero
                currents = self.chassis_pid_data

                if is_not_empty:
                    if safety_mode:
                        self.can_send(can_x[i], can_send_id[j], 0, 0, 0, 0)  # Safety mode
                    else:
                        self.can_send(can_x[i], can_send_id[j], *currents)  # Send actual PID values

    def can_send(self, bus, can_id, *data):
        """Send data via CAN."""
        try:
            # 将每个int转换为2字节（int16）
            byte_data = []
            for value in data:
                # Ensure each value is an integer before packing
                value = int(value)  # Force conversion to int if it's a float or other type
                byte_data.extend(struct.pack('h', value))  # 将int16转为2字节
                
             # 由于CAN帧数据最大8字节，确保字节数不超过8
            if len(byte_data) > 8:
                self.get_logger().warning(f"Data exceeds CAN frame limit: {len(byte_data)} bytes")
                byte_data = byte_data[:8]  # 只取前8字节

            # 创建CAN消息并发送
            message = can.Message(arbitration_id=can_id, data=byte_data, is_extended_id=False)
            bus.send(message)
            self.get_logger().info(f"Message sent: {message}")
        except can.CanError as e:
            self.get_logger().error(f"CAN message send failed: {e}")
        except Exception as e:
            self.get_logger().error(f"Error in sending CAN message: {e}")


    def read_motor_speed(self):
        """Read motor speed from CAN interface."""
        motor_speeds = []
        for motor_id in self.motor_response_ids:
            try:
                response = self.bus.recv(timeout=1.0)
                if response and response.arbitration_id == motor_id and len(response.data) >= 2:
                    speed = float(response.data[0] | (response.data[1] << 8))
                    motor_speeds.append(speed)
                else:
                    motor_speeds.append(0.0)
            except can.CanError as e:
                self.get_logger().error(f"Error reading motor speed: {e}")
                motor_speeds.append(0.0)

        # Publish motor speeds
        msg = Can()
        msg.can = motor_speeds
        self.publisher.publish(msg)
        # self.get_logger().info(f"Published motor speeds: {motor_speeds}")

    def timer_callback(self):
        """Timer callback to periodically send motor commands and read speeds."""
        self.bridge_send_motor(safety_mode=False)
        self.read_motor_speed()

def main(args=None):
    rclpy.init(args=args)
    node = CanControlNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
