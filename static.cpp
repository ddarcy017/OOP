#include <iostream>
using namespace std;

class fun{
    public:
    static int i;
    fun(){};
};

int fun::i = 1;

int main(){
    fun obj1;
    fun obj2;
    obj1.i = 2;
    obj2.i = 3;
    cout <<obj1.i << " " << obj2.i;
}