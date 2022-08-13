l1 = [1,3,5,2,9,6,8,9]

## sort() ----> List Sorting

# Wrong way
# sorted_l1 = l1.sort()  #{its wrong sort() and other down written functions directly sorts original list and not ,makes a copy}
# print(sorted_l1)
# print("\n")

# Correct way
l1.sort()
print(l1)
print("\n")


## .reverse() ----> List Reversal
l1.reverse()
print(l1)
print("\n")


## .append() ----> List Appending (Addition to list)
l1.append(69)
print(l1)
print("\n")


## .insert() ----> List Insertion (Adds written Element next to the first index entered in function)
l1.insert(1,88)
print(l1)
l1.insert(5,99)
print(l1)
print("\n")


## .pop() ------> List pop (Remove the element at the given index)
l1.pop(6)
print(l1)
print("\n")


## .remove() ------> List remove (Removes the entered element)
l1.remove(69)
print(l1)
print("\n")

## sum() ---> Sums the elements of list
print(sum(l1))
print("\n")

## startswith() ------> Prints element starting with 'given alphabet'   
l2= ['Ram', 'Radha','Akshi']
a=l2[1].startswith("R")  
print(a)         #G ives True or false
print("\n")



#####  There are a lot list functions. So to find them only go to python docs

