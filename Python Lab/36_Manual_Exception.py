def evenError():
    try:
        n =eval(input("Enter a number : "))
        if n%2 == 0 :
            raise Exception("Even number entered!")
        print("Odd Choice!")
    except Exception as e:
        print("Exception: ",e)

evenError()