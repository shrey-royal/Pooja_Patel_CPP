#include <iostream>
using namespace std;

const int MAX_BOOKS = 100;

class Book {
private:
    int id;
    string title;
    string author;

public:
    Book() : id(0), title(""), author("") {}

    void setBook(int id, string title, string author) {
        this->id = id;
        this->title = title;
        this->author = author;
    }

    // getter-setter methods
    int getId() {
        return id;
    }

    string getTitle() {
        return title;
    }

    void setTitle(string newTitle) {
        title = newTitle;
    }

    string getAuthor() {
        return author;
    }

    void setAuthor(string newAuthor) {
        author = newAuthor;
    }

    void display() {
        cout << "Book ID: " << id << ", Title: \"" << title << "\", Author: " << author << endl;
    }
};

class Library {
private:
    Book* books[MAX_BOOKS];
    int count;

public:
    Library() : count(0) {
        for (int i = 0; i < MAX_BOOKS; i++) {
            books[i] = nullptr;
        }
    }

    ~Library() {
        for (int i = 0; i < count; i++) {
            delete books[i];
        }
    }

    void createBook(int id, const string& title, const string& author) {
        if (count >= MAX_BOOKS) {
            cout << "Library is full." << endl;
            return;
        }
        books[count] = new Book();
        books[count]->setBook(id, title, author);
        count++;
        cout << "Book added successfully!" << endl;
    }

    void readBooks() const {
        if (count == 0) {
            cout << "Library is empty." << endl;
            return;
        }
        cout << "--- Book List ---" << endl;
        for (int i = 0; i < count; i++) {
            books[i]->display();
        }
    }

    void updateBook(int id, const string& newTitle, const string& newAuthor) {
        for (int i = 0; i < count; i++) {
            if (books[i]->getId() == id) {
                books[i]->setTitle(newTitle);
                books[i]->setAuthor(newAuthor);
                cout << "Book updated successfully!" << endl;
                return;
            }
        }
        cout << "Book not found." << endl;
    }

    void deleteBook(int id) {
        for (int i = 0; i < count; i++) {
            if (books[i]->getId() == id) {
                delete books[i];
                for (int j = i; j < count - 1; j++) {
                    books[j] = books[j+1];
                }
                books[count - 1] = nullptr;
                count--;
                cout << "Book deleted successfully!" << endl;
                return;
            }
        }
        cout << "Book not found." << endl;
    }
};

int main() {
    Library myLibrary;

    myLibrary.createBook(101, "C++ Primer", "Lippman");
    myLibrary.createBook(102, "Clean Code", "Robert C. Martin");

    myLibrary.readBooks();

    myLibrary.updateBook(102, "Clean Code (Updated)", "Uncle Bob");
    myLibrary.readBooks();

    myLibrary.deleteBook(101);
    myLibrary.readBooks();


    return 0;
}