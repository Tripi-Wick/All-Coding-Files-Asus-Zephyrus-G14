a = input("Enter only a number : ")

try:
    a = int(a)
except:
    raise ValueError("Fuck You")
else:
    print("Thanks!!!")