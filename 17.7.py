import numpy as np
 #进行坐标变换
def rotation_matrix_2d(theta):
    c,s =np.cos(theta),np.sin(theta)
    return np.array([[c,-s],[
                    s,c]])

R=rotation_matrix_2d(np.pi/4)
point=np.array([1,0])
rotated= R@point

print(f"Qriginal point: {point}")
print(f"Rotated point:{rotated}")
