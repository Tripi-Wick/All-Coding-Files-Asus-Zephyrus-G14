import numpy as np

dt = np.dtype(np.int32)
print(dt)
print("")


# Numpy supports: int 16, int32, int 64
# These are equivalent to i1, i2, i4, i8

dt1 = np.dtype('i1')
print(dt1)
dt2 = np.dtype('i2')
print(dt2)
dt3 = np.dtype('i4')
print(dt3)
dt4 = np.dtype('i8')
print(f'{dt4}\n')


# endian notation
dt5 = np.dtype('>i4')
print(f'{dt5}\n')

dt6=np.dtype([('age',np.int8)])
print(f'{dt6}\n')


# applying to nd array
dt6=np.dtype([('age',np.int8)])
a=np.array([(10,),(20,),(30,)], dtype=dt6)
print(f'{a}\n')


