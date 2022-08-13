def sum(n):
    i = 0
    if(n==1):
        return 1
    i = i+n+sum(n-1)
    return i

n = int(input("Enter a number till where you want to see hte sum of natural numbers: "))

print(sum(n))