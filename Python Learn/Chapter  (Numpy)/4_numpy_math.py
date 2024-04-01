import numpy as np
import math as m

print(m.sqrt(81))  # For square root
print(m.floor(7.2))  # for number before decimal
print(m.ceil(7.2))  # for number before decimal
print(m.sin(0))  # for trigonometry

# Now With numpy

a = np.array([1, 2, 3])
b = np.array([4, 5, 6])
c = ((a-b)**2).sum()
print(m.sqrt(c))
