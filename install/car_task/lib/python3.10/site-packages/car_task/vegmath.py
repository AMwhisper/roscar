import math

# CORDIC 常量
cordic_1K = 0x26DD3B6A  # CORDIC scaling factor (常量值)，对应于 `1.646760258121`
cordic_ctab = [
    0x3243F6A8, 0x1DAC6705, 0x0FADBAFB, 0x07F56EA6,
    0x03FEAB76, 0x01FFD55B, 0x00FFFAB2, 0x007FFF55,
    0x003FFFEA, 0x001FFFFD, 0x000FFFFF, 0x0007FFFF,
    0x0003FFFF, 0x0001FFFF, 0x0000FFFF, 0x00007FFF,
    0x00003FFF, 0x00001FFF, 0x00000FFF, 0x000007FF,
    0x000003FF, 0x000001FF, 0x000000FF, 0x0000007F,
    0x0000003F, 0x0000001F, 0x0000000F, 0x00000007,
    0x00000003, 0x00000001, 0x00000000, 0x00000000
]  # CORDIC 角度查找表，单位是 2^-32 弧度

def cordic(theta):
    """CORDIC 算法实现，用于计算 sin 和 cos"""
    x = cordic_1K
    y = 0
    z = theta
    for k in range(32):
        d = 0 if z >= 0 else -1
        tx = x - (((y >> k) ^ d) - d)
        ty = y + (((x >> k) ^ d) - d)
        tz = z - ((cordic_ctab[k] ^ d) - d)
        x = tx
        y = ty
        z = tz
    return x, y

def vegsin(deg):
    """计算正弦值"""
    deg = math.fmod(math.fabs(deg + 90), 360)
    deg = 270 - deg if deg > 180 else deg - 90
    theta = int(deg * 18740330.14516947)  # 转为 CORDIC 输入值
    _, s = cordic(theta)  # 获取 sin 值
    return s / 1073741824.0  # 恢复到浮点范围

def vegcos(deg):
    """计算余弦值"""
    return vegsin(deg + 90)
