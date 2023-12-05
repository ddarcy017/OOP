#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

class A{
    private:
        Point* _c;
    public:
        A(){_c = new Point{0,0};}
 virtual ~A(){
    delete _c;
    cout << "c deleted\n";
}
};
class B: public A {
    private:
    Point* _d;
    public:
    B(){_d = new Point{0,0};};
    ~B(){delete _d;
        cout << "d deleted\n";}
};

int main(){
     B obj;
    return 0;
}
