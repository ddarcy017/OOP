#include <iostream>

struct Point {
    double x;
    double y;
};

class Shape {
    protected: //For inheritance
    Point _centre;

    public:
    Shape(double x, double y) { // Const
        _centre.x = x;
        _centre.y = y;
    }

    Shape() : Shape(0,0) {}; // Def const
    virtual double get_area() = 0;
};

class Square : public Shape {
    private:
    double _side;
    public:
    Square(double x, double y, double side) : Shape(x,y),_side(side){};
    Square() : Shape(),_side(0){};

    double get_area() {return _side * _side;}
};

int main () {
    Square s;
    std::cout << s.get_area() << std::endl;
}
