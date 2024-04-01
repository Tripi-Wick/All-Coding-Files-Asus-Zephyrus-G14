class Student:
    rollNumber = 69

    def printRollNumber(self):
        print(f"Roll Number = {self.rollNumber}")

    @staticmethod
    def printTempHere():
        print("##This was predefined and don't take self as input##")


trip = Student()
trip.rollNumber = 98

trip.printRollNumber()

trip.printTempHere()   
# This works like this Student.printTempHere()
# Decorator is a special type of function that modifies a function
# Static Method Decorator makes a method static and is used for all instances