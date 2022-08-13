def power(num,pow):
    i=0
    ans=1
    while(i<=pow):
        ans=ans*num
        i=i+1
        print({ans})
    else:
        return ans
    
num = int(input("Enter a number: "))
pow = int(input("Enter the power to which you want to raise this number: "))

print(f"The value of {num} raised to power {pow} is: {power(num,pow)}")

