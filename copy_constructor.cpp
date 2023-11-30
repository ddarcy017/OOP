#include <iostream>
#include <cstring> 

class Point {
private:
    // int x; // Sh
    // int y;

    int* _x; // D
    int* _y;
public:
 
    // // Sh
    // Point() : x(0) , y(0) {}; // Def cons
    // Point(int x, int y) : x(x) , y(y) {};

    // void print() {std::cout << x << "," << y;}
    // void setPoint(int new_x, int new_y) {x = new_x ; y = new_y;}


    // D
    Point() { //Def cons
    _x = new int;
    _y = new int;

    *_x = 0;
    *_y = 0;
    }

    Point(const Point &pnt) { // Constructor with const parameter of a reference to a point
        _x = new int; // Allocate memory in the heap
        _y = new int;

        *_x = *(pnt._x); // Pointer to _x
        *_y = *(pnt._y); 
    }
    void operator=(const Point &pnt) { //Without this print be (20,20) for both

        *_x = *(pnt._x); // Pointer to _x
        *_y = *(pnt._y); // Pointer to _y
    }
    
    void print () {std::cout << *_x << "," << *_y <<std::endl;}
    void setPoint (int x , int y) {
        *_x = x;
        *_y = y;
    }

    virtual ~Point() { // Des str 
                      //Set to virtual to overwrite in 3d
    delete _x;
    delete _y;
    }
};

class Point3d : public Point {
    private:
    int* _z;

    public:
    Point3d() : Point() {
        _z = new int;
    }

    void setPoint (int x, int y, int z)  { //Overloading
        *_z = z;
    }

    ~Point3d() {
        delete _z;
    }
};

int main() {

    //D
    Point p1;
    p1.setPoint(10,10);

    Point p2;
    
    p2 = p1;
    
    p2.setPoint(20,20);


    //Print
    std::cout << "p1: " ;
    p1.print();
    std::cout << std:: endl; 
                            
    
    std::cout << "p2: " ;
    p2.print();
    std::cout << std:: endl;

    // Virtual dest
    Point *p = new Point3d;
    delete p; // If not virtual, call the base class, static compile
              // If virtual, call both derived and base class, runtime compile

    // // Sh
    // Point p1;
    // p1.setPoint(10,10);
    // Point p2;
    // p2 = p1; // p2 is the shallow copy
    //             // Seperating p2 = p1 get the same result for sh copy
    // std::cout << "Shallow Copy, p2 bfore: ";
    // p2.print();
    // std::cout << std::endl;

    // // Modify the original point
    // p1.setPoint(10, 20);
    // std::cout << "Original after modyfying, p1: "; p1.print(); std::cout << std::endl;

    // // Display shallow copy
    // std::cout << "Shallow Copy after modifying the original, p2 after: "; p2.print(); std::cout << std::endl;
    //             // This not change bcs it share the same reference with the original but still a 
    //             // diff created object so its 2 seperated objects

    // //References
    // std::cout << "p1. ref: " << &p1 << std::endl;
    // std::cout << "p2. ref: " << &p2 << std::endl;

    return 0;
}
