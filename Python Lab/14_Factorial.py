import sys
n = int(input("Enter your number : "))
def sum(x):
    if x<0:
        print("Incorrect Input")
        sys.exit("xxx")
    elif x ==0:
        return 0
    else:
        return x + sum(x-1)
    
print(sum(n))




import math
n = int(input("Enter your number : "))
print(math.factorial(n))