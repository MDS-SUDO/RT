import numpy as np

# 创建数组
arr1 = np.array([1, 2, 3, 4, 5])
arr2 = np.zeros((3, 3))        # 3x3 零矩阵
arr3 = np.ones((2, 4))         # 2x4 全 1 矩阵
arr4 = np.arange(0, 10, 2)     # [0, 2, 4, 6, 8]
arr5 = np.linspace(0, 1, 5)    # [0, 0.25, 0.5, 0.75, 1]

# 形状和大小
print(arr2.shape)      # (3, 3)
print(arr2.size)       # 9p
print(arr2.ndim)       # 2（维度数)