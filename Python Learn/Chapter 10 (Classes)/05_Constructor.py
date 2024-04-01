class Student:
    rollNumber = 69

    def __init__(self):
        print("Class constructor called")

    # def __init__(self,rollNumber):          #--> Constructor with more attributes
    #     self.rollNumber = rollNumber

    def printRollNumber(self):
        print(f"Roll Number = {self.rollNumber}")

    @staticmethod
    def printTempHere():
        print("##This was predefined and don't take self as input##")


trip = Student()
trip.rollNumber = 98
trip.printRollNumber()

# A constructor is special function which is called when ever an object is created

# We can also add more arguments to it
# trip = Student(88)
# trip.printRollNumber()