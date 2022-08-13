# set() ----> Creating empty set

a = set()

# .add() ----> Adding value to set
a.add(1)
a.add(2)
print(a)
a.add(2)
a.add(5)
a.add(6)
print(a)
print('\n')

# a.add([3,4])# We can not add lists to it as it is changeable but sets are not
print('\n')

a.add((3,4))
print(a)
print('\n')

# a.add({"Trip" :"TO rome"})#hence We cant even add dictionary  
# So we can on put non hashable files in sets 

# len() ----->> Prints the length of set
print(len(a))
print('\n')

# .remove() ---->> Removes given element from set
a.remove(2)
print(a)
print('\n')


# .pop() ---->> removes and returns any random element of set
print(a.pop())
print('\n')
print(a)
print('\n')



# .clear ---->> clears the set
# a.clear()
# print(a)


# .union() ---->> gives teh union of values

print(a.union({2,1})) # {2,1} is new set and union between this and a is printed
print('\n')

# .intersection() ---->> gives teh intersection of values
print(a.intersection({6})) # {6} is new set and union between this and a is printed
print('\n')