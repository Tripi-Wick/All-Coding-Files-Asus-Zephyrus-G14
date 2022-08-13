attendance = {
    'Rahul' : "Present",
    'Ram' : "Absent",
    'Seets' : "Present",
    'ANkita' : "Present",
    'Divyansh' : "Present",
    'Roohit' : "Present"
}

print("The list of students is: ",attendance.keys())
name = input("Enter the name of student whose presence you want to check: ")
print("This student is ",attendance[name])