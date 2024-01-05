#include <iostream>

void b(int* p){
    *p = *p +1;
    int x = 10;
}

void a(int* p){
    *p = *p +1;
    int x = 100;
    b(&x) ; 
}

int main(){
    int x = 0;
    a(&x);
    std::cout << x << std::endl;
}