fact = int(input("Enter the number whom factorial you want to see: "))

j=1

for i in range(1,(fact+1)):
    j = j * i
    i = i + 1
    
else:
    print(f"The factorial of {fact} is : {j}")