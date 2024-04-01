from re import A
import numpy as np

a=np.array([1,2,3])
print(a)
print("\n")

## Array in list
 
# Method 1
b = np.array([[1,2,3],[5,6,7]])
print(b)
print("\n")

# Method 2
c = np.array([1,2,3,4,5], ndmin=2)
print(c)
print("\n")


## Array Data type
d = np.array([1,2,3], dtype=complex)
print(d)