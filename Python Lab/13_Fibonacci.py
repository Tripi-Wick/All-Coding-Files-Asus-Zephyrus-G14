a=0
b=1
i=0
res = [0,1]
n = int(input("Enter your number : "))
for i in range(0,n):
    temp = a+b
    res.append(temp)
    a = b
    b = temp

print(res)