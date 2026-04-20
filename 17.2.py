import numpy as np
A=np.array([[1,2,3],
           [4,5,6],
           [7,8,9]])
print(A.T)
print(A[0,:])
print(A[:,1])
print(A[1:,:2])

B=np.array([[1,0],[0,1],[2,3]])
C=A @ B
print(C)

det=np.linalg.det(A)
print(f"dey(A)={det}")

A_inv=np.linalg.inv(A)
print(A_inv)

I=A@A_inv
print(np.allclose(I,np.eye(3)))