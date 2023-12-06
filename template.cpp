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
    v.push_back(new Point_i);
    cout << v.size() << endl;
    return 0;
}