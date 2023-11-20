#include <iostream>
#include <cstring> 

class Point {
private:
    int x;
    int y;

public:
    Point(int _x, int _y) : x(_x), y(_y) {} //Def constructor

    Point(const Point& other) : x(other.x), y(other.y) {} // Shallow copy constructor

    void print() {
        std::cout << x << "," << y;
    }

    void setPoint(int new_x, int new_y) {
        x = new_x;
        y = new_y;
    }
};

int main() {
    Point p1(5, 7);

    // Shallow copy
    Point shallowCopy = p1;
    std::cout << "Shallow Copy: ";
    shallowCopy.print();
    std::cout << std::endl;

    // Modify the original point
    p1.setPoint(10, 20);

    // Display shallow copy
    std::cout << "Shallow Copy after modifying the original: ";
    shallowCopy.print();
    std::cout << std::endl;

    // Deep copy using the copy constructor
    Point deepCopy(p1);
    std::cout << "Deep Copy: ";
    deepCopy.print();
    std::cout << std::endl;

    return 0;
}
