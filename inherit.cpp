#include <iostream>
using namespace std;

class A {
    protected:
    int _x;
    public:
    A(): _x(100){};
    virtual void foo(){
        cout << this->_x <<endl;
    }
};
class B: public A {
    private:
    int _y;
    public:
    B(): _y(200){};
    void foo(){cout << this->_x <<"," <<this->_y<<endl;}
    
};

void test(A* a){
    a->foo();
}


int main(){
    B b;
    test(&b);

    return 0;
}