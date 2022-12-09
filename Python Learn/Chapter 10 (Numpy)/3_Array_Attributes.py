import numpy as np

# Array Shape (.shape)

a=np.array([[1,2,3],[4,5,6]])
print(a.shape)
print("\n")

#shaping () 
a=np.array([[1,2,3],[4,5,6]])
a.shape=(3,2)      
print(a)
print("\n")

#arrange ().arrange)
a=np.arange(24)
print(a)
print("\n")

# To find dimensions (.ndim)
print(a.ndim)
print("\n")

# reshape (.reshape)

b=a.reshape(2,4,3)
print(b)

# item size (.itemsize)
x=np.array([1,2,3,4,5], dtype=np.int8)
print(x)
print(x.itemsize)
print("\n")

x=np.array([1,2,3,4,5], dtype=np.float32)
print(x)
print(x.itemsize)
print("\n")