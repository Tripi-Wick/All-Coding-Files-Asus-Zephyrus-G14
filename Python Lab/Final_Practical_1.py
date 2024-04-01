bookShop={}

n = int(input("Enter the number of books you want to enter : "))
for i in range(n):
    title=input("Enter the title of the book : ")
    author=input("Enter the author of the book : ")
    genre=input("Enter the genre of the book : ")
    bookShop[title]=[author,genre]

print(bookShop)

search = input("Enter the title of the book you want to search : ")

for i in bookShop:
    if i == search:
        print("The book is present in the bookshop")
        print("The author of the book is : ",bookShop[i][0])
        print("The genre of the book is : ",bookShop[i][1])
        break
    else:
        print("The book is not present in the bookshop")
        break