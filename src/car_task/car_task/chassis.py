import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
import math
from car_task.PID import PIDController

class ChassisController(Node):
    def __init__(self):
        
        self.outputs = []
        self.control_mode = 1  # 默认模式
        self.remote_data = {'lx': 0, 'ly': 0}
        self.keyboard_data = {'W': 0, 'A': 0, 'S': 0, 'D': 0}
        
        # 初始控制变量
        self.vx = 0.0
        self.vy = 0.0
        self.vw = 0.0
        
        # 控制参数
        self.x_ramp_progress = 0.0
        self.y_ramp_progress = 0.0
        self.vw_ramp_progress = 0.0
        
        # 创建订阅者（假设遥控器数据发布到 /remote_data 话题）
        self.remote_subscriber = self.create_subscription(
            Float32MultiArray,
            '/remote_data',
            self.remote_callback,
            10
        )
        
        self.timer = self.create_timer(0.02, self.update_chassis)  # 50Hz 更新

        self.pid_controllers = [
            PIDController(kp=20, ki=0, kd=0, max_output=6000, min_output_i=1200),  # 左前电机
            PIDController(kp=20, ki=0, kd=0, max_output=6000, min_output_i=12000),  # 左后电机
            PIDController(kp=20, ki=0, kd=0, max_output=6000, min_output_i=1200),  # 右后电机
            PIDController(kp=20, ki=0, kd=0, max_output=6000, min_output_i=1200),  # 右前电机
        ]
        

    def remote_callback(self, msg):
        """
        遥控器数据回调
        :param msg: Float32MultiArray,假设数据为 [lx, ly]
        """
        self.remote_data['lx'] = msg.data[0]
        self.remote_data['ly'] = msg.data[1]
    
    def ramp_function(self, start, target, progress):
        """
        简单的线性递增 RAMP 函数
        """
        return start + (target - start) * min(progress, 1.0)
    
    def update_chassis(self):
        """
        更新底盘运动控制逻辑
        """
        self.rotor_speeds = []
        if self.control_mode == 1:
            # 控制模式 1：直接使用遥控器输入
            self.vx = -self.remote_data['lx'] / 660.0 * 20.0
            self.vy = self.remote_data['ly'] / 660.0 * 20.0
        elif self.control_mode == 2:
            # 控制模式 2：逐步加速
            self.x_target_ramp = self.ramp_function(0, 660, self.x_ramp_progress)
            self.y_target_ramp = self.ramp_function(0, 660, self.y_ramp_progress)
            self.vx = (self.keyboard_data['A'] - self.keyboard_data['D']) * self.x_target_ramp / 660.0 * 8
            self.vy = (self.keyboard_data['W'] - self.keyboard_data['S']) * self.y_target_ramp / 660.0 * 12
            
            # 更新进度
            if self.keyboard_data['A'] != 0 or self.keyboard_data['D'] != 0:
                self.x_ramp_progress = min(self.x_ramp_progress + 0.002, 1.0)
            else:
                self.x_ramp_progress = 0.0
            if self.keyboard_data['W'] != 0 or self.keyboard_data['S'] != 0:
                self.y_ramp_progress = min(self.y_ramp_progress + 0.004, 1.0)
            else:
                self.y_ramp_progress = 0.0
        
        # 麦轮解算逻辑
        self.rotor_speeds = self.calculate_mecanum_speeds(self.vx, self.vy, self.vw)
        return self.rotor_speeds
    
    def calculate_pid_outputs(self):
        from can_control.can_control_node import CanControlNode
        RPM2RPS = 2 * math.pi / 60
        self.outputs = []
        for i, pid_controller in enumerate(self.pid_controllers):
            target = self.rotor_speeds[i]
            feedback = CanControlNode.read_motor_speed[i] * RPM2RPS
            output = pid_controller.calculate(target, feedback)
            self.outputs.append(output)

        # for idx, output in enumerate(outputs):
        #     print(f"Motor {idx + 1} PID Output: {output}")
        
    
    def calculate_mecanum_speeds(self, vx, vy, vw):
        """
        计算麦克纳姆轮的目标速度
        :return: 每个电机的转速
        """
        L = 0.5  # 轮间距（假设值）
        W = 0.3  # 轮宽（假设值）
        wheel_radius = 0.075
        
        speeds = [
            (vx - vy - vw * (L + W)) / wheel_radius,  # 左前
            (vx + vy + vw * (L + W)) / wheel_radius,  # 左后
            (vx + vy - vw * (L + W)) / wheel_radius,  # 右后
            (vx - vy + vw * (L + W)) / wheel_radius   # 右前
        ]
        
        # 限幅
        max_speed = 800  # 假设最大速度 800 rad/s
        speeds = [max(min(speed, max_speed), -max_speed) for speed in speeds]
        return speeds
    

