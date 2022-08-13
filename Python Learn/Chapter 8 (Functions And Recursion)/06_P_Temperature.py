def temp(a):
    b=a*1.8 + 32
    return b

a = int(input("Enter the temperature in celsius: "))

print(f"Temperature in Fahrenheit is: {temp(a)}")