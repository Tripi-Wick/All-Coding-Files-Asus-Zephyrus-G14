class Employee :
    company = "Google"
    def prtCompany(self):
        print(f"company = {self.company}")
    def getSalary(self):
        print(f"salary = {self.salary}")

harry = Employee()
harry.salary = 900

harry.getSalary()
harry.prtCompany()   

# Employee.getSalary(harry) ---> This is what really happening here hence we write self.
# This also works for instance attributes
# We don't pass this as a argument in the function, it gets passed automatically

class Sample:
    def __init__(har,name):
        har.name = name

obj = Sample("Trip")
print(obj.name)

# Yes this works but we should not do it to preserve the ease of code and also to avoid ambiguity