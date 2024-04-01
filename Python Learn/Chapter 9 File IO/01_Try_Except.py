while(True):
    a = input("Enter a number : ")
    if(a == 'q'):
        break
    try:
        a = int(a)
        if(a>5):
            print("Number is greater then 5")
    except Exception as e:
        print(f"Exception Ocurred :- {e}")
    # except:                 
    #     print(f"Exception Ocurred ")
# Can be done like this too but this is a bad way as we don't get to know what exception
        
