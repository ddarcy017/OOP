#include <iostream>
#include <vector>
#include <map> 
#include <string>

class Point {
    public: // Need to be public to accessed
    int _x;
    int _y;
};

int main() {
    std::vector<int> v = {0,1,2,3,4,5};
    std::vector<int>::iterator itr; // create an pointer to what stored in the vector (int in this case)

             //Pointer to the first ele
    for (itr=v.begin(); itr<v.end(); itr++) {
                            //Pointer to the last ele      
        std::cout << *itr << std::endl;  //Print v
    }

    std::vector<Point> pv = {{0,1},{2,3},{4,5}}; 
    std::vector<Point>::iterator itrP;

    for (itrP=pv.begin(); itrP<pv.end(); itrP++) {
        std::cout << itrP->_x << "," << itrP->_y << std::endl;
    }

    return 0;

}