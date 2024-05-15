# Library Management System 📚📚📚
Description:
The Library Management System is a software application designed to manage a collection of books in a library. It allows users to add new books, update existing book details, remove books, display all books, and save the library data to a file. Additionally, the system can load book data from a file when it starts, ensuring that the library collection is preserved between sessions.<br>
***
**Objectives**:
* Efficient Book Management: Provide functionalities to add, update, remove, and display books in the library.
* Persistent Storage: Implement mechanisms to save the library data to a file and load it from a file, ensuring data persistence across multiple sessions.
* User-Friendly Interface: Create a simple and intuitive text-based interface for users to interact with the system.
* Error Handling: Handle common errors gracefully, such as attempting to update or remove a book that does not exist.<br>
***
**Design Decisions**<br>
* Data Storage: Books are stored in a vector to allow dynamic resizing and efficient iteration.
* Book Representation: A struct is used for the Book entity to group related attributes (title, author, year, ISBN) together.
* File I/O: Books can be saved to and loaded from a file using standard file stream operations (ifstream and ofstream).
* User Interface: A simple command-line interface is provided for interaction.
***
**Algorithms and Data Structures**<br>
Data Structure: <br>

* vector<Book> is used to store the collection of books.
* struct Book defines the attributes of a book (title, author, year, ISBN).

Algorithms:

* Add Book: Appends a new book to the books vector.
* Update Book: Iterates through the books vector to find a book by its ISBN and updates its details.
* Remove Book: Iterates through the books vector to find a book by its ISBN and removes it.
* Display Books: Iterates through the books vector and prints each book's details.
* Save to File: Writes each book's details to a file, one book per line.
* Load from File: Reads each line from a file, parses the book details, and adds the book to the books vector.
***

# Screenshots:
1. Main Menu <br>
  ![main menu](https://github.com/teyvas/Library-manager/assets/150505028/ec8b16a9-4b1a-44dd-b172-8348453aa502)<br>
***

**How to Use the Software**
1. Installation and Setup:
  * Ensure you have a C++ compiler installed.
  * Save the provided code into a file, e.g., library_management.cpp.
2. Compilation:
 * Open a terminal or command prompt.
 * Navigate to the directory containing library_management.cpp.
 * Compile the code using a C++ compiler, e.g., g++ -o library_management library_management.cpp.

3. Execution:
  * Run the compiled program, e.g., ./library_management.
  * Follow the on-screen instructions to interact with the library management system. <br>
  *Ensure that library.txt exists in the same directory to load the library data on start. The file will also be used to save the library data.*
***
Features:

* Add Book: Enter the book details when prompted to add a new book.
* Update Book: Enter the ISBN of the book to be updated, followed by the new details.
* Remove Book: Enter the ISBN of the book to be removed.
* Display Books: Displays the list of all books in the library.
* Save Library to File: Saves the current state of the library to library.txt.
* Load Library from File: Loads the library from library.txt if it exists. <br>

📖📖📖
[Presentation's link](https://docs.google.com/presentation/d/1Fhk7YSHGQWPs4a_AJttf8622MfmWL6HNlNlvMBVhPIk/edit?usp=sharing "Presentation")
📖📖📖
