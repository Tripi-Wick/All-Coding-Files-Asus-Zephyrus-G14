def Area(radius):
    pi = 3.141
    return radius * radius * pi

radius = int(input("Enter the radius of the circle: "))

print(f"The area of the circle of radius {radius} is {Area(radius)}")
