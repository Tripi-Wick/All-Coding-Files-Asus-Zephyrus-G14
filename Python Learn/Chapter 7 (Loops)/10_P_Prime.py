i = int(input("Enter the number whom you want to check for prime: "))

for n in range(2,i):
    a = i%n
    if(a==0):
        print("Entered number is not a prime number")
        break   
else:
    print("Entered number is prime number")
    
