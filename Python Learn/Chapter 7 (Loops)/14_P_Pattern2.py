n = int(input("Enter the number whose pattern you want to see: "),)


for i in range(n):
    print("* "*(i+1), end="")
    print("  "*(n-i))