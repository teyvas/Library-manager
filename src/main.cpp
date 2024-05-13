#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a structure for book
struct Book {
    string title;
    string author;
    int year;
    string isbn;
};

// Define a class for library
class Library {
private:
    vector<Book> books;

public:
    // Function to add a new book to the library
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Book added successfully." << endl;
    }

    // Function to update details of a book
    void updateBook(const string& isbn, const Book& updatedBook) {
        for (int i = 0; i < books.size(); ++i) {
            if (books[i].isbn == isbn) {
                books[i] = updatedBook;
                cout << "Book details updated successfully." << endl;
                return;
            }
        }
        cout << "Book with ISBN " << isbn << " not found." << endl;
    }

    // Function to remove a book from the library
    void removeBook(const string& title) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (it->title == title) {
                books.erase(it);
                cout << "Book removed successfully." << endl;
                return;
            }
        }
        cout << "Book with Title " << title << " not found." << endl;
    }

    // Function to display all books in the library
    void displayBooks() {
        if (books.empty()) {
            cout << "No books in the library." << endl;
            return;
        }
        cout << "Books in the library:" << endl;
        for (const auto& book : books) {
            cout << "Title: " << book.title << ", Author: " << book.author << ", Year: " << book.year << ", ISBN: " << book.isbn << endl;
        }
    }
};

int main() {
    

}
