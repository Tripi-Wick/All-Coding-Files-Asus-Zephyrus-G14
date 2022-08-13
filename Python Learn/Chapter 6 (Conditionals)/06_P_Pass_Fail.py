from turtle import update


marks = []

marks.append(int(input("Marks in subject 1: ")))
marks.append(int(input("Marks in subject 2: ")))
marks.append(int(input("Marks in subject 3: ")))

total_marks = (marks[0]+marks[1]+marks[2])/3

if(total_marks>=40 and marks[0]>=33 and marks[1]>=33 and marks[2]>=33):
    print("You Are PAss")
else:
    print("You are fail")