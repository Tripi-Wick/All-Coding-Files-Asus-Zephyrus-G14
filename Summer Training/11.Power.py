def power(num,pow):
    if(pow==1):
        return num
    else:
        return num * power(num,(pow-1))
    
num = int(input("Enter a number: "))
pow = int(input("Enter the power to which you want to raise this number: "))

print(f"The value of {num} raised to power {pow} is: {power(num,pow)}")