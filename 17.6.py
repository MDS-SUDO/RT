import numpy as np

#奇异之分解
A=np.array([[1,2],
           [3,4],
           [5,6]])

U, s, Vt=np.linalg.svd(A)

print("U shape",U.shape)

print("s:",s)
print("Vt shape:",Vt.shape)


S = np.zeros((A.shape[0], A.shape[1]))
np.fill_diagonal(S, s)

A_reconstructed=U@S@Vt
print("Original ==Reconstructed?", np.allclose(A,A_reconstructed))
