import numpy as np

sensor_data=np.array([[25.1,65.3,1013.2],
                      [25.5,64.8,1013.3],
                      [25.2,65.5,1013.2],
                      ])

mean=np.mean(sensor_data,axis=0)
std=np.std(sensor_data,axis=0)
#·求平均值和标准差
print(f"Mean:{mean}")
print(f"Std Dev:{std}")

#标准归一化
sensor_normalized=(sensor_data -mean) /std
print(f"Normlized:\n{sensor_normalized}")
