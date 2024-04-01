class Programmer:

    name = []
    code = []

    def EnterDetail(self):
        self.len = int(input("Enter the number of People whose details you want to enter : "))
        for i in range(self.len):
            self.name.append(input("Enter the name of programer : "))
            self.code.append(input("Enter the code of programer : "))

    def PrtDetails(self):
        for i in range(self.len):
            print(f"Programmer Num {i+1}")
            print(f"Programmer Name = {self.name[i]}")
            print(f"Programmer Code =  {self.code[i]}")


P1 = Programmer()

P1.EnterDetail()
P1.PrtDetails()
