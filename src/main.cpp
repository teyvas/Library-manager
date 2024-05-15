#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
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
        cout << "Book with isbn " << isbn << " not found." << endl;
    }

    // Function to remove a book from the library
    void removeBook(const string& isbn) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (it->isbn == isbn) {
                books.erase(it);
                cout << "Book removed successfully." << endl;
                return;
            }
        }
        cout << "Book with isbn " << isbn << " not found." << endl;
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
    
    // Function to save library to a file
    void saveToFile(const string& filename) {
        ofstream FileOut(filename);
        if (FileOut.is_open()) {
            for (const auto& book : books) {
                FileOut << book.title << "," << book.author << "," << book.year << "," << book.isbn << endl;
            }
            cout << "Library saved to file." << endl;
        } else {
            cout << "Unable to open file." << endl;
        }
    }


    // Function to load library from a file
    void loadFromFile(const string& filename) {
    ifstream FileIn(filename);
    if (FileIn.is_open()) {
        books.clear(); // Clear existing books
        string line;
        while (getline(FileIn, line)) {
            stringstream ss(line);
            string title, author, yearStr, isbn;
            int year;
            getline(ss, title, ',');
            getline(ss, author, ',');
            getline(ss, yearStr, ',');
            getline(ss, isbn);
            year = stoi(yearStr); // Convert year string to integer
            books.push_back({title, author, year, isbn});
        }
        cout << "Library loaded from file." << endl;
    } 
    else {
        cout << "Unable to open file." << endl;
    }
}

};

int main() {
   Library library;

    // Load library from file if it exists
    library.loadFromFile("library.txt");

    while (true) {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Update Book\n";
        cout << "3. Remove Book\n";
        cout << "4. Display Books\n";
        cout << "5. Save Library to File\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string title, author, isbn;
                int year;

                cout << "Enter title: ";
                cin.ignore();
                getline(cin, title);

                cout << "Enter author: ";
                getline(cin, author);

                cout << "Enter year: ";
                cin >> year;

                cout << "Enter ISBN: ";
                cin >> isbn;

                Book newBook = {title, author, year, isbn};
                library.addBook(newBook);
                break;
            }
            case 2: {
                string title;
                cout << "Enter title of the book to update: ";
                cin >> title;

                Book updatedBook;
                cout << "Enter updated title: ";
                cin.ignore();
                getline(cin, updatedBook.title);

                cout << "Enter updated author: ";
                getline(cin, updatedBook.author);

                cout << "Enter updated year: ";
                cin >> updatedBook.year;

                cout << "Enter updated ISBN: ";
                cin >> updatedBook.isbn;

                library.updateBook(title, updatedBook);
                break;
            }
            case 3: {
                string title;
                cout << "Enter Title of the book to remove: ";
                cin >> title;
                library.removeBook(title);
                break;
            }
            case 4:
                library.displayBooks();
                break;
            case 5:
                library.saveToFile("library.txt");
                break;
            case 6:
                cout << "Exiting program. Goodbye!";
                return 0;
            default:
                cout << "Invalid choice. Please try again.";
        }
    }

    return 0;
}
