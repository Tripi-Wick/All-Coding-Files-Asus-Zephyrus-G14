a = []

a.append(int(input("Enter number 1: ")))
a.append(int(input("Enter number 2: ")))
a.append(int(input("Enter number 3: ")))
a.append(int(input("Enter number 4: ")))

if(a[0]>a[1] and a[0]>a[2] and a[0]>a[3]):
    print(a[0],"is greatest number")
elif(a[1]>a[0] and a[1]>a[2] and a[1]>a[3]):
    print(a[1],"is greatest number")
elif(a[2]>a[0] and a[2]>a[1] and a[2]>a[3]):
    print(a[2],"is greatest number")
else:
    print(a[3],"is greatest number")