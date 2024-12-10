import rclpy
from rclpy.node import Node
from evdev import InputDevice, categorize, ecodes
from roscar_interfaces.msg import Controller
from threading import Thread

class ControllerNode(Node):
    def __init__(self):
        super().__init__('controller_node')
        
        # 底盘控制数据的发布者
        self.publisher = self.create_publisher(
            Controller, 
            'controller_topic', 
            10
            )      
        
        # 控制器设备路径
        self.device_path = "/dev/input/event6"  # 根据实际设备路径替换
        self.gamepad = InputDevice(self.device_path)
        self.get_logger().info(f"Device {self.gamepad.name} connected.")
        self.lx = 0.0
        self.ly = 0.0
        self.state = 0
        
        self.CUSTOM_KEY_NAMES = {
            "BTN_GAMEPAD": "A",
            "BTN_SOUTH": "A",
            "BTN_EAST": "B",
            "BTN_NORTH": "Y",
            "BTN_WEST": "X",
            "BTN_A": "A",
            "BTN_B": "B",
            "BTN_X": "Y",
            "BTN_Y": "X",
            "BTN_TR2": "R2",
            "BTN_TL2": "L2",
            "BTN_TR": "R1",
            "BTN_TL": "L2",
            "BTN_THUMBR": "RS",
            "BTN_THUMBL": "LS",
        }
        self.key_states = {key: 0 for key in self.CUSTOM_KEY_NAMES.values()} 

    
    def process_gamepad_input(self):    
        
        
        for event in self.gamepad.read_loop():
            if event.type == ecodes.EV_ABS:  # 轴事件（摇杆等）
                abs_event = categorize(event)
                if abs_event.event.code == ecodes.ABS_X:
                    self.lx = float(abs_event.event.value)  
                elif abs_event.event.code == ecodes.ABS_Y:
                    self.ly = float(abs_event.event.value)  

                

            elif event.type == ecodes.EV_KEY:  # 按键事件
                key_event = categorize(event)
                self.key_input(key_event)

            self.publish_data()

    def key_input(self, key_event):

        if isinstance(key_event.keycode, list):  
            for key in key_event.keycode:
                if key in self.CUSTOM_KEY_NAMES:
                    # print(f"Button {self.CUSTOM_KEY_NAMES[key]} state: {key_event.keystate}")
                    key_name = self.CUSTOM_KEY_NAMES[key]     
                    state = key_event.keystate
                    if  self.key_states.get(key_name, None) != state:
                        self.key_states[key_name] = key_event.keystate 
                        self.publish_data()
                    
                       
        else:  
            key = key_event.keycode 
            if key in self.CUSTOM_KEY_NAMES:
                #  print(f"Button {self.CUSTOM_KEY_NAMES[key]} state: {key_event.keystate}")
                key_name = self.CUSTOM_KEY_NAMES[key]      
                state = key_event.keystate
                if  self.key_states.get(key_name, None) != state:
                    self.key_states[key_name] = key_event.keystate  
                    self.publish_data()
                    

                
    
    def publish_data(self):

        msg = Controller()
        msg.lx = self.lx
        msg.ly = self.ly
        msg.r2 = self.key_states.get("R2", 0)
        msg.l2 = self.key_states.get("L2", 0)
        msg.x = self.key_states.get("X", 0)


        self.publisher.publish(msg)
        self.get_logger().info(f"Published: lx={msg.lx}, ly={msg.ly}, R2={msg.r2}, L2={msg.l2}, X={msg.x}")

    def start_processing(self):
        
        thread = Thread(target=self.process_gamepad_input)
        thread.start()
        return thread



def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()
    node.process_gamepad_input()
    node.start_processing()
    
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()