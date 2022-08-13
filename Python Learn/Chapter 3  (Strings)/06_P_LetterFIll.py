# a = input("Enter Your Name: ")
# b = input("Enter the date As XX: ")

# print("Dear "+a+"\n"+"You are Selected!\n"+b)

# Better Version


letter = '''Dear |<Name>|
                You are Selected !
                |<Date>|'''
    
name = input("Enter Your Name: ")
date = input("Enter Your Date: ")

letter = letter.replace("|<Name>|",name) 
letter = letter.replace("|<Date>|",date) 

print(letter)