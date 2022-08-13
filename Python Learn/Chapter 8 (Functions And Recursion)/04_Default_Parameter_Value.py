# Default Parameter Value is the value which is implemented if no value is entered

def greet(name="Stranger"): #Stranger here is default value of function 
    print("Good Morning,"+ name)

greet(input("Enter your name: "))
greet()