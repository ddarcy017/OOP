// Templates allows a class but different type of data type

#ifndef POINT_H
#define POINT_H
#include <iostream>

// Original
// class Point {
//     private:
//     int _x;
//     int _y;
// };
// Supposed to create 3 ver for 3 data types (int, float, double)

// Using templates: Replace all datatype with templates name
template <class T>

class Point {
    private:
    T _x; //Replacing int with T
    T _y;

    public:
    Point(T x, T y) : _x(x) , _y(y) {} // Constructor
    Point() : Point(0,0) {} // Def const
    void print() {
        std::cout << "x=" << _x <<", " << "y=" << _y << std::endl;
    }
};

#endif