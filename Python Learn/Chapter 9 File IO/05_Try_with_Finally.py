a = input("Enter only a number : ")

try:
    a = int(a)
    print("Thanks!!")
except Exception:
    print("Fuck you!!!")
    exit()
finally:
    print("We are done")

# It works even if we have exited the program
    