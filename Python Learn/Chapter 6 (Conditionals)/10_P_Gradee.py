num = int(input("Enter your marks: "))

if(num<50):
    print("Your Grade is F")
elif(50<=num<60):
    print("Your Grade is E")
elif(50<=num<60):
    print("Your Grade is D")
elif(60<=num<70):
    print("Your Grade is C")
elif(70<=num<80):
    print("Your Grade is B")
elif(80<=num<90):
    print("Your Grade is A")
elif(90<=num<=100):
    print("Your Grade is Ex")
else:
    print("You have entered invalid marks")