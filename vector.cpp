#include <iostream>
#include <vector>

class Point {
    public:
    int _x;
    int _y;
};

int main() {
   
    // std::vector<int> v;
    // v = {1,2,3,4,5,6};
    // v.size(); // = 6
    // v.resize(3); // Print 1,2,3          //Adjust vector size
    // v.resize(6); // Print 1,2,3,0,0,0    //Doesnt save content
    //v.push_back(7);                       //Adding element to the end of the vector

    std::vector<Point> v; // Turn v to a vector of Point
    Point p1 = {1,1};
    v.push_back(p1);

    typedef std::vector<Point*> pv_ptr;
    pv_ptr pv_ptr2; // Create a vector of pointers to point object
    Point p2 = {2,2};
    pv_ptr2.push_back(&p2); //Copies Point object to the vector

    // Print
    for (int i=0 ; i<pv_ptr2.size(); i++) {
        // std::cout << v[i] << std::endl; // Only work for 1st instance with int since Point has (x,y)
        std::cout << pv_ptr2[i]->_x << "," << pv_ptr2[i]->_y << std::endl;
    }

    std::cout << pv_ptr2.size() << std::endl;

    return 0;
};