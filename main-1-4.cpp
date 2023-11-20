//overriding, overloading
#include <iostream>
#include <cstring>
class Book {
protected: // protected not private so that inherited classes can access
    std::string title;
    int page; // of publishing

public:
    Book() : title(" "), page(0) {}; //Default constructor
    Book(std::string title, int page) { //Constructor
        this->title = title;
        this->page = page;
    }; 
    
    void print() {
        std::cout << "Title: " << this->title << std::endl;
        std::cout << "Page: " << this->page << std::endl;
    };
};

class Publication : public Book {
private:
    std::string publisher;
    int year;

public:
    Publication() : publisher(" "), year(0) {}; // Def const
    Publication(std::string title ,int page, std::string publisher, int year) 
    : Book(title, page) , publisher(publisher), year(year) {}; // Constructor

// void print() { // Overriding
//     Book::print();
//     std::cout << "Publisher: " << this->publisher << std::endl;
//     std::cout << "Year: "  << this->year << std::endl;
// }

// bool isOld() const {
//     const int update_year = 1970; 
//     return year < update_year;
// }


void print(bool isOld) { // Overloading
    if (isOld) {
        Book::print();
    }else{
        Book::print();
        std::cout << "Publisher: " << this->publisher << std::endl;
        std::cout << "Year: "  << this->year << std::endl;
    }
}
};

int main() {
Book b1("Harry Potter", 1220);
b1.print();

Publication b2("Tottochan" , 327, "GreenDream", 1995);
b2.print(false);
}