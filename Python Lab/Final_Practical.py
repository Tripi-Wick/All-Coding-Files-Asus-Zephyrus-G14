class Book:
    def __init__(self, title, author, genre):
        self.title = title
        self.author = author
        self.genre = genre

class BookShop:
    def __init__(self):
        self.books = []

    def add_book(self, book):
        self.books.append(book)

    def search_books(self, title):
        results = []
        for book in self.books:
            if book.title == title:
                results.append(book)
        return results


my_book_shop = BookShop()

n = int(input("Enter the number of books you want to enter : "))
for i in range(n):
    my_book_shop.add_book(Book(input("Enter the title of the book : "),input("Enter the author of the book : "),input("Enter the genre of the book : ")))

search = input("Enter the title of the book you want to search : ")

results = my_book_shop.search_books(search)

for book in results:
    print("Title = ",book.title,", Author = ",book.author,", Title = ", book.genre)

