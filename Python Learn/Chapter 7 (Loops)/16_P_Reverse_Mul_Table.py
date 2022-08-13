num = int(input("Enter the number whose multiplication table you want to see : "))

for i in range(1,11):
    print(f"{num} * {10-i+1} = {num*(10-i+1)}") #Easy Way
