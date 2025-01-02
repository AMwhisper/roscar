import rclpy
from rclpy.node import Node
import math
from car_task.PID import PIDController
from roscar_interfaces.msg import Controller, Can, Pid

class ChassisController(Node):
    def __init__(self):
        
        self.pid_controllers = [
            PIDController(kp=20, ki=0, kd=0, max_output=6000, max_output_i=1200),  # 左前电机
            PIDController(kp=20, ki=0, kd=0, max_output=6000, max_output_i=1200),  # 左后电机
            PIDController(kp=20, ki=0, kd=0, max_output=6000, max_output_i=1200),  # 右后电机
            PIDController(kp=20, ki=0, kd=0, max_output=6000, max_output_i=1200),  # 右前电机
        ]
        self.outputs = []
        self.control_mode = 1  
        self.controller_data = {'lx': 0, 'ly': 0, 'r2': 0, 'l2': 0, 'x': 0}
        self.can_data = {'can': [0] * len(self.pid_controllers)}
        
        self.vx = 0.0
        self.vy = 0.0
        self.vw = 0.0
        
        super().__init__('chassis_node')
  
        self.subscription1 = self.create_subscription(
            Controller,
            'controller_topic',   
            self.controller_callback,
            10
        ) 
        self.subscription1

        self.subscription2 = self.create_subscription(
            Can,
            'can_topic',   
            self.can_callback,
            10
        ) 
        self.subscription2

        self.publisher = self.create_publisher(
            Pid, 
            'pid_topic', 
            10
        )      
        
        self.timer = self.create_timer(0.02, self.timer_callback)

    def timer_callback(self):
        self.update_chassis()
        self.calculate_pid_outputs()

    def controller_callback(self, msg):

        self.controller_data['lx'] = msg.lx 
        self.controller_data['ly'] = msg.ly 
        # self.get_logger().info(f"Speed data lx:{self.controller_data['lx']} ly:{self.controller_data['ly']}.")

    def can_callback(self, msg):
        self.can_data['can'] = msg.can
    
    def update_chassis(self):
  
        self.rotor_speeds = []
        if self.control_mode == 1:
            # 控制模式 1：直接使用遥控器输入
            self.vx = self.controller_data['lx'] / 660.0 * 20.0
            self.vy = self.controller_data['ly'] / 660.0 * 20.0
        
       
        self.rotor_speeds = self.calculate_mecanum_speeds(self.vx, self.vy, self.vw)
        return self.rotor_speeds
    
    def calculate_pid_outputs(self):
        RPM2RPS = 2 * math.pi / 60
        self.outputs = []
       
        for i, pid_controller in enumerate(self.pid_controllers):
            target = self.rotor_speeds[i]
            feedback = self.can_data['can'][i] * RPM2RPS
            output = pid_controller.calculate(target, feedback)
            self.outputs.append(output)

        self.outputs = [float(max(min(output, 3.4e38), -3.4e38)) for output in self.outputs]

        msg = Pid()
        msg.chassis_pid = self.outputs
        self.publisher.publish(msg)
        self.get_logger().info(f"Published PID {msg}")
        
    
    def calculate_mecanum_speeds(self, vx, vy, vw):
        """
        计算麦克纳姆轮的目标速度
        :return: 每个电机的转速
        """

        wheel_radius = 13.16                 # 测量值, 麦克纳姆轮半径的倒数
        chassis_motor_reduction_rate = 19.2  # 底盘电机减速比
        chassis_size_k = 0.385               # 测量值, 机器人中心点到XY边缘的距离之和
        coefficient = chassis_motor_reduction_rate * wheel_radius

        speeds = [
           -coefficient * (vy - vx + vw * chassis_size_k),   # 左前1
           coefficient * (vy + vx - vw * chassis_size_k),   # 左后2
           -coefficient * (vy - vx - vw * chassis_size_k),   # 右后3
           coefficient * (vy + vx + vw * chassis_size_k)    # 右前4
        ]
        
        max_speed = 800  # 800 rad/s
        speeds = [max(min(speed, max_speed), -max_speed) for speed in speeds]
        return speeds
    
def main(args=None):
    rclpy.init(args=args)
    node = ChassisController()   
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
