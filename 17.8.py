import numpy as np

#正运动学坐标公式
def forward_kinematics_2d(L1,L2,theta1,theta2):

    x=L1*np.cos(theta1) +L2*np.cos(theta1+theta2)
    y=L1*np.sin(theta1) +L2*np.sin(theta1+theta2)
    return np.array([x,y])

L1,L2=1,1
theta1,theta2=np.pi/4,np.pi/4

end_pos=forward_kinematics_2d(L1,L2,theta1,theta2)
print(f"End effector position:{end_pos}")
#莫长
print(f"Distance from origin:{np.linalg.norm(end_pos)}")