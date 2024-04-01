class Sample:
    a = "Class_Attribute"

obj1 = Sample()
obj1.a = "Instance_Attribute"
print(Sample.a)
print(obj1.a)

# This is how we change a class attribute
Sample.a = "Changed"
print(Sample.a)