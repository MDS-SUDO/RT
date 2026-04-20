import numpy as np

A=np.array([[4,-2],
           [-2,3]])

eigenvalues,eigenvectors=np.linalg.eig(A)

print("Eigenvalues:",eigenvalues )
print("Eigenvectors:\n",eigenvectors)
#验证：A@V=@V
for i in range(len(eigenvalues)):
    v =eigenvectors[:,i]
    lambda_i=eigenvalues[i]

    lhs=A@ v
    rhs=lambda_i * v

    print(f"lambda{i}={lambda_i}")
    print(f"IS A*v=lambda*v? {np.allclose(lhs,rhs)}")

