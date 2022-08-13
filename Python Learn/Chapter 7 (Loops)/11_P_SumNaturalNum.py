n = int(input("Enter a number till where you want to see hte sum of natural numbers: "))

i = 1
s = 0
while(i<=n):
    s=s+i
    i=i+1
    # print(s,"+",i,'=',s+i)  #To print everything
else:
    print(s)