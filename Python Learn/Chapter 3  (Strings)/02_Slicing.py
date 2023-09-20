c="Trishan Preet"

print(c)
print("\n")

# Accessing a part of string by indics
            #  T    r    i   s  h  a  n     P  r  e   e   t
print(c[8]) #  0    1    2   3  4  5  6  7  8  9  10  11  12
print(c[-5])#  -13 -12 -11 -10 -9 -8 -7 -6 -5 -4 -3   -2  -1
print("\n")

# c[3] = 'r' (THis is not valid i.e item assignment is not viable in string)

# String Slicing
print(c[0:3]) # (Here last entered position is excluded)
print(c[-1:-13]) 
print(c[ :3]) # (If first element is left empty then python takes minimum index of string)
print(c[0: ]) # (If last element is left empty then python takes last index )
print("\n")