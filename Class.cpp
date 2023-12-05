#include <iostream>
using namespace std;

class A {
    public:
    A(){
        cout << "A called\n";
    }
};
class B: public A {
    public:
    B(){cout << "B called\n";}

    
};

class C : public A, public B{ //B can access to x, so does C
    public:
    C() {cout << "C called\n";};

};



int main(){
    C c;

return 0;
}