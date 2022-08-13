# Basic
j = [1,12,3,4,5]

for item in j: 
    print(item)
print("\n")
# Prints all the items in a list or tuple

### With range function

for i in range(8):
    print(i)
print("\n")
# In it 'i' is default set to 0  and goes till number in range -1. To define value of i we do like below 

for i in range(1,8): # Here '1' is staring value and '8' is ending value
    print(i)
print("\n")

for i in range(1,9,2): # Here '1' is staring value and '9' is ending value and '2' is step value (how many numbers to skip)
    print(i)
print("\n")


### With else
for i in range(1,8):
    print(i)
else:                               # it is executed when loop is exhausted (it does not executed when loop ends by break statement)
    print("This is the end")  

