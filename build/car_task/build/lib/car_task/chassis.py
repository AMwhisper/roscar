import rclpy
from rclpy.node import Node
import math
from car_task.PID import PIDController
from car_task.vegmath import vegsin, vegcos
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
            self.vx = self.map_range(self.controller_data['lx'], 0, 255, 100, -100, 110, 140, 127.5) / 660.0 * 20.0
            self.vy = self.map_range(self.controller_data['ly'], 0, 255, 100, -100, 110, 140, 127.5) / 660.0 * 20.0
            # self.get_logger().info(f"vx{self.vx}, vy{self.vy}")
       
        self.rotor_speeds = self.calculate_mecanum_speeds(self.vx, self.vy, self.vw)
        return self.rotor_speeds

    def map_range(self, input_val, in_min, in_max, out_min, out_max, deadzone_min, deadzone_max, deadzone_val):
        if deadzone_min <= input_val <= deadzone_max:
            input_val = deadzone_val

        return (input_val - in_min) * (out_max - out_min) / (in_max - in_min) + out_min
        

    def calculate_mecanum_speeds(self, vx, vy, vw):
        # sin_yaw = vegsin(0)  # 1
        # cos_yaw = vegcos(0)  # 0

        # # 修正速度
        # vx_fixed = vy * sin_yaw + vx * cos_yaw
        # vy_fixed = vy * cos_yaw - vx * sin_yaw

        # 麦克纳姆轮速度计算
        wheel_radius = 13.16                 # 麦克纳姆轮半径
        chassis_motor_reduction_rate = 19.2  # 电机减速比
        chassis_size_k = 0.385               # 机器人中心点到XY边缘的距离之和
        coefficient = chassis_motor_reduction_rate * wheel_radius

        speeds = [
            coefficient * (vy - vx - vw * chassis_size_k),   # 左前1
            coefficient * (vy + vx - vw * chassis_size_k),   # 左后2
            -coefficient * (vy - vx + vw * chassis_size_k),  # 右后3
            -coefficient * (vy + vx + vw * chassis_size_k)   # 右前4
        ]

        # 限制速度范围
        max_speed = 300  # 最大速度（单位：rad/s）
        speeds = [max(min(speed, max_speed), -max_speed) for speed in speeds]
        # self.get_logger().info(f"speeds {speeds}")
        return speeds


    def calculate_pid_outputs(self):
        RPM2RPS = 2 * math.pi / 60
        self.outputs = []
        for i, pid_controller in enumerate(self.pid_controllers):
            target = self.rotor_speeds[i]
            feedback = self.can_data['can'][i] * RPM2RPS
            output = pid_controller.calculate(target, feedback)
            self.outputs.append(output)

        self.outputs = [float(round(max(min(output, 3.4e38), -3.4e38))) for output in self.outputs]

    
        msg = Pid()
        msg.chassis_pid = self.outputs
        self.publisher.publish(msg)
        self.get_logger().info(f"Published PID {msg}")
    
def main(args=None):
    rclpy.init(args=args)
    node = ChassisController()   
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
