def factorial(n):
    if(n==0 or n==1):
        return 1
    else:
        return n*factorial(n-1)

fact = int(input("Enter the number whom factorial you want to see: "))

print(f"The factorial of {fact} is : {factorial(fact)}")