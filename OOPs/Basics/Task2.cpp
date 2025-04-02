#include <iostream>
using namespace std;

class Book {
public:
    string bookTitle;
    string authorName;
    int publicationYear;
    bool isAvailable;

    void setData(string title, string name, int pubYr, bool isAvail) {
        bookTitle = title;
        authorName = name;
        publicationYear = pubYr;
        isAvailable = isAvail;
    }
};

class Library {
public:
    Book* books[100];
    int bookCount = 0;

    void addBook(Book* newBook) {
        if (bookCount < 100) {
            books[bookCount++] = newBook;
            cout << "Book added successfully!" << endl;
        } else {
            cout << "Library is full! Cannot add more books.\n" << endl;
        }
    }

    void removeBook(string title) {
        bool found = false;

        for (int i = 0; i < bookCount; i++) {
            if (books[i]->bookTitle == title) {
                for (int j = i; j < bookCount - 1; j++) {
                    books[j] = books[j+1];
                }
                bookCount--;
                found = true;
                cout << "Book removed successfully!\n";
                break;
            }
        }
        if (!found) {
            cout << "Book not found in the library.\n";
        }
    }

    void checkAvailability(string title) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i]->bookTitle == title) {
                if (books[i]->isAvailable) {
                    cout << "The book '" << title << "' is available.\n";
                } else {
                    cout << "The book '" << title << "' is not available.\n";
                }
                return;
            }
        }
        cout << "Book not found in the library.\n";
    }

    void searchBook(string keyword) {
        bool found = false;

        for (int i = 0; i < bookCount; i++) {
            if (books[i]->bookTitle == keyword || books[i]->authorName == keyword) {
                cout << "Book Found: " << books[i]->bookTitle << " by " << books[i]->authorName << ", Published in " << books[i]->publicationYear << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "No books found matching the search keyword.\n";
        }
    }
};

int main() {
    Library lib;

    Book *b1 = new Book(), *b2 = new Book(), *b3 = new Book();

    b1->setData("The Great Gatsby", "F. Scott Fittzgerald", 1925, true);
    b2->setData("1984", "George Orwell", 1949, true);
    b3->setData("To kill a Mockingbird", "Harper Lee", 1960, false);

    lib.addBook(b1);
    lib.addBook(b2);
    lib.addBook(b3);

    lib.checkAvailability("1984");

    lib.searchBook("Harper Lee");
    lib.searchBook("The Great Gatsby");

    lib.removeBook("1984");

    lib.searchBook("1984");


    return 0;
}