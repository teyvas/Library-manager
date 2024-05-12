#include <iostream>
#include <fstream>
#include<string>
#include<vector>
#include<map>
#define push_back pb

struct Book{
    std:: string title;
    std:: string author;
    int year;
    std:: string synopsis;
};

class Library {
    private:
        std:: vector<Book> books;

    public:
        void addBook(const Book& book){
            books.push_back(book);
            std:: cout<<"Book added successfully." << std:: endl;
        }
    

}
