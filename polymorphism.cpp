// Static binding: To call a function that belongs to the specific class
                // of the object at compile time


#include <iostream>
#include <cstring>
class Book {
protected: 
    std::string title;
    int page; // of publishing

public:
    Book() : title(" "), page(0) {}; 
    Book(std::string title, int page) { 
        this->title = title;
        this->page = page;
    }; 
    
    virtual void print() { // Adding virtual for runtime diff version of entity
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


void print() { 
        Book::print();
        std::cout << "Publisher: " << this->publisher << std::endl;
        std::cout << "Year: "  << this->year << std::endl;
    }
};

void test (Book* b) {
b->print();
};

int main() {

Book b1("Harry Potter", 1220);
//b1.print(); // Print the short version cause static binding

Publication b2("Tottochan" , 327, "GreenDream", 1995);
//b2.print(); 
test(&b1); // Call print in base class (Static binding)
test(&b2); // After adding virtual: Compiler wait and Call print in class of object
// Pointer to an object of base class can point at object of derived class
}