n = int(input("Enter the number whose pattern you want to see: "),)

# for i in range(0,n):
#     for j in range(0,(2*n-1)):
#         if(i==n-1 or j==n-1 ):
#             print("* ",end="")
#         elif(j>=(n-1)-i and j<=(n-1)+i):
#             print("* ",end="")
#         else:
#             print("  ",end="")
#     print("\n")

# (end="") stops by default printing of enter

# Easy way for python
for i in range(n):
    print("  "*(n-i-1), end="")
    print("* "*(2*i+1), end="")
    print("  "*(n-i-1))