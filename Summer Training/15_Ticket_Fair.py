num = int(input("Enter the number if persons : "))
i = 1
while(i<=num):
    age = int(input(f"Enter the age of person number {i}: "))
    i = i + 1
    if(age<3):
        print("Your ticket is free")
    elif(3<=age<=12):
        print("Your ticket fair is $10")  
    else:
        print("Your ticket fair is $15")
else:
    print("-----------End of Receipt------------")