# The  main difference between tuple and list is that we can update lists but we cant update values of tuple
# Tuple is immutable

t = (1,4,9,45,3)
print(t)
print(t[3])
# a[2]=34 (not possible)
print("\n")

t1 = () #{Empty Tuple}
print(t1)
print("\n")

t2 = (1) #{Not a Tuple its just a number in parenthesis (Wrong Way to define a Tuple)}
t3 = (1,) # Correct Way to write a tuple with single element
print(t2)
print(t3)
print("\n")

