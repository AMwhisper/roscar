from evdev import InputDevice, categorize, ecodes

CUSTOM_KEY_NAMES = {
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


device_path = "/dev/input/event6"  

try:
    gamepad = InputDevice(device_path)
    print(f"Device {gamepad.name} connected.")
except FileNotFoundError:
    print("Controller not found. Ensure it is connected via USB.")
    exit(1)


for event in gamepad.read_loop():
    if event.type == ecodes.EV_ABS:  
        abs_event = categorize(event)
        # print(f"Axis {ecodes.ABS[abs_event.event.code]} value: {abs_event.event.value}")

    elif event.type == ecodes.EV_KEY:  
        key_event = categorize(event)

        if isinstance(key_event.keycode, list):  
            for key in key_event.keycode:
                if key in CUSTOM_KEY_NAMES:
                    print(f"Button {CUSTOM_KEY_NAMES[key]} state: {key_event.keystate}")
                else:
                    print(f"Unknown key/button {key} state: {key_event.keystate}")

        else:  # 如果是单个按键
            key = key_event.keycode 
            if key in CUSTOM_KEY_NAMES:
                print(f"Button {CUSTOM_KEY_NAMES[key]} state: {key_event.keystate}")
            else:
                print(f"Unknown key/button {key} state: {key_event.keystate}")