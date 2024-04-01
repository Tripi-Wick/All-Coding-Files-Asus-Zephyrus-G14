while(True):
    a = input("Enter a number only : ")

    try:
        a = int(a)
        print("Thanks 😄")
    except:
        raise Exception("This is not a number 🥲")
