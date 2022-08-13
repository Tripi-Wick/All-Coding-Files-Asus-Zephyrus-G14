def pattern(n):
    for i in range(n):
        print("* "*(i+1), end="")
        print("  "*(n-i))


num = int(input("Enter the number of lines till which you want to see pattern: "))

pattern(num)