#include <iostream>
#include <fstream>
#include<string>
#include<vector>
#include<map>
#define pb push_back 

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
            books.pb(book);
            std:: cout<<"Book added successfully." << std:: endl;
        }
    
};

int main(){

}