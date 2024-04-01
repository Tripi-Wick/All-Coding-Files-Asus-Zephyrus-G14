class Employee:
      company = "GOogle"
      paisa = 9000

harry = Employee
harry.salary = 100                 #---->Instance Attribute
print(harry.salary)


harry.paisa = 10              
print(harry.paisa)

# Preference == Instance Attribute > Class Attribute  -->Both in assignment and retrieval