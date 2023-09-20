# # The correct method
# a = int(input("Enter your number : "))
# res = 1

# while (a/10 != 0):
#     res *= a%10
#     a = int(a/10)

# print(int(res))

# # Wrong but easy method
a = input("Enter your number : ")
res = 1
# for i in a
for i in range(1,len(a)+1):
    res *= int(i)
print(res)
