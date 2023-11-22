#include <iostream>
#include <cstring> 

class Point {
private:
    // int x; // S
    // int y;

    int* _a; // D
    int* _b;
public:
    // Point() : x(0) , y(0) {}; // Def const


    // void print() {std::cout << x << "," << y;}
    // void setPoint(int new_x, int new_y) {x = new_x ; y = new_y;}


    // D
    Point() {
        _a = new int;
        _b = new int;

        *_a = 0;
        *_b = 0;
    }

    void print () {std::cout << *_a << "," << *_b <<std::endl;}
    void setPoint (int a , int b) {
        *_a = a;
        *_b = b;
    }
};

int main() {
    Point p1;
    p1.setPoint(10,10);

    Point p2 = p1;
    p2.setPoint(20,20);

    std::cout << "p1: " ;
    p1.print();
    std::cout << std:: endl; // This would print p1(20,20) bcs p1 & p2 still share the same reference
    // Eg for shallow copy
    
    std::cout << "p2: " ;
    p2.print();
    std::cout << std:: endl;


    // // Shallow copy
    // p1.setPoint(10,10);
    // Point p2 = p1; // p2 is the shallow copy
    // std::cout << "Shallow Copy: ";
    // p2.print();
    // std::cout << std::endl;

    // // Modify the original point
    // p1.setPoint(10, 20);
    // std::cout << "Original after modyfying: "; p1.print(); std::cout << std::endl;

    // // Display shallow copy
    // std::cout << "Shallow Copy after modifying the original: "; p2.print(); std::cout << std::endl;
    // // This not change bcs it share the same reference with the original but still a 
    // // diff created object so its 2 seperated objects

    return 0;
}
