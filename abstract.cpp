#include <iostream>

class Printable { // Interfaces, Pure abstract class
                  // Use for non related class but common functionality (Print in this case)
    public:
    virtual void print() = 0; // ONLY has a pure virtual function
};

struct Point {
    double x;
    double y;
};

class Shape : public Printable {
    protected: //For inheritance
    Point _centre;

    public:
    Shape(double x, double y) { // Const
        _centre.x = x;
        _centre.y = y;
    }

    Shape() : Shape(0,0) {}; // Def const
    virtual double get_area() = 0;
    //Doesn'T need print here
};

class Square : public Shape {
    private:
    double _side;
    public:
    Square(double x, double y, double side) : Shape(x,y),_side(side){};
    Square() : Shape(),_side(0){};

    double get_area() {return _side * _side;}
    void print() {
        std::cout << "Square with side = " << _side <<std::endl;
    }
};

class Circle : public Shape {
    private:
    double _radius;
    public:
    Circle(double x, double y, double radius) : Shape(x,y),_radius(radius){};
    Circle() : Shape(),_radius(0){};

    double get_area() {return _radius * _radius * 3.14;}
    void print() {
    std::cout << "Circle with r = " << _radius <<std::endl;
    }
};


void test (Shape* s)  { // This created to print the result of object using polymorphism creation
                        // Why the parameter here is not & but *
    std::cout << "Area: " << s->get_area() << std::endl;
}

class Animal : public Printable {
    private:
    std::string type;
    public:
    std::string get_type() {return type;}
    void set_type(std::string t) {type = t;} 
    void print() {
        std::cout << "This is a " << type <<std::endl;
    }
};

void toPrint(Printable* obj) {
    obj->print();
}


int main() {
    Square s(5,5,4);
    std::cout << s.get_area() << std::endl;

    Shape* cr = new Circle(0.1,0.4,5);
    Shape* sq = new Square(1,1,4);

    //std::cout << sq.get_area() << std::endl; // Cant do this cause wrong parameters
   
    test(cr);
    test(sq);
    Animal* ani = new Animal;
    ani->set_type("shark");

    toPrint(cr);
    toPrint(sq);
    toPrint(ani);

    delete cr;
    delete sq;
    delete ani;

}
