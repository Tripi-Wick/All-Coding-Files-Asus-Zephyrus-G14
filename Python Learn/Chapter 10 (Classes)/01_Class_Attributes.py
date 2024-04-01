class Employee:
    company = "Google"          # --> This is class attribute

harry = Employee()            #--> In this objects are called instances
ratan = Employee()

print(harry.company)
print(ratan.company)

Employee.company = "Microsoft"

print(harry.company)
print(ratan.company)

# In Python classes attributes can be changes
# These are known as class attributes
