#include <iostream>
using namespace std;

class A {
    public:
    virtual int fun()=0;
};

class B : public A {
    public:
    int fun() {cout <<"B\n";
                return 1;}
};

class C : public B {
    public:
    int fun() {cout <<"C\n";
               return 2;}
};


int main(){
    B* c;
    c->fun();
    return 0;
}