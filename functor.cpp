#include <iostream>
#include <vector>
#include <map> 
#include <string>
#include <algorithm>
#include <cmath>

class Point {
    public: 
    int _x;
    int _y;
    // Function object is a function that take object as parameter and used for an object
    float operator()(Point p) { //have to use key operator
        return sqrt(pow(_x - p._x, 2) + pow(_y - p._y, 2)); 
    }
};

int main() {
Point p1 = {10,10};
Point p2 = {22,22};

//p1.operator(p2); // Cant do this
//Should do:
float dist = p1(p2);
std::cout << dist << std::endl;

return 0;

}