class PIDController:
    def __init__(self, kp, ki, kd, max_output, max_output_i):
        self.kp = kp
        self.ki = ki
        self.kd = kd
        self.max_output = max_output
        self.max_output_i = max_output_i

        # 状态变量初始化
        self.target = 0.0
        self.last_target = 0.0
        self.feedback = 0.0
        self.error = 0.0
        self.last_error = 0.0
        self.output_p = 0.0
        self.output_i = 0.0
        self.output_d = 0.0
        self.output = 0.0
        self.last_output = 0.0

    def calculate(self, target, feedback):
        self.last_target = self.target
        self.target = target
        self.feedback = feedback
        self.last_output = self.output

        # 误差计算
        self.error = self.target - self.feedback

        # P 输出
        self.output_p = self.kp * self.error

        # I 输出，积分限幅
        self.output_i += self.ki * self.error
        self.output_i = max(min(self.output_i, self.max_output_i), -self.max_output_i)

        # D 输出
        self.output_d = self.kd * (self.error - self.last_error)

        # 总输出限幅
        self.output = self.output_p + self.output_i + self.output_d
        self.output = max(min(self.output, self.max_output), -self.max_output)

        # 更新误差
        self.last_error = self.error

        return self.output


