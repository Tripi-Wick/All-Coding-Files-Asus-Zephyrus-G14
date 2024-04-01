import math as m

class Calc:
    def enterDetail(self):
        self.a = int(input("Enter the number on which you want to perform operations : "))

    def square(self):
        return self.a*self.a

    def cube(self):
        return self.a*self.a*self.a
    
    def sqRoot(self):
        return m.sqrt(self.a)

    def calculate(self,num):
        if(num == 1):
            return self.square()
        if(num == 2):
            return self.cube()
        if(num == 3):
            return self.sqRoot()
        
    @staticmethod
    def displayNum():
        print("This static method works")

P1 = Calc()
P1.enterDetail()
num = int(input("Enter the operation you want to perform (1 for square, 2 for cube, 3 for square root) : "))

print(int(P1.calculate(num)))
P1.displayNum()

#Method 2 --> More of a python way
# class Calc:
#     def enterDetail(self):
#         self.a = int(input("Enter the number on which you want to perform operations : "))

#     def square(self):
#         print(f"Square of {self.a} = {self.a **2}")

#     def cube(self):
#         print(f"Square of {self.a} = {self.a **3}")
    
#     def sqRoot(self):
#         print(f"Square of {self.a} = {self.a **0.5}")

#     def calculate(self,num):
#         if(num == 1):
#             return self.square()
#         if(num == 2):
#             return self.cube()
#         if(num == 3):
#             return self.sqRoot()
        
# P1 = Calc()
# P1.enterDetail()
# num = int(input("Enter the operation you want to perform (1 for square, 2 for cube, 3 for square root) : "))

# P1.calculate(num)