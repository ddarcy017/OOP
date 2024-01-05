#include <iostream>
#include <vector>
using namespace std;

template <class T>
struct Point{

    T _x = 0;
    T _y = 0;
};
typedef Point<int> Point_i;

int main(){
    vector<Point_i*> v;
    Point_i* p = new Point_i;
    v.push_back(p);
    cout << v[0]->_x << endl; //Segmentation fault
    return 0;
}