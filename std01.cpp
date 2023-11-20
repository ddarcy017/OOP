#include <iostream>

// void b (int* p) {
//     *p = *p + 1;
//     int x = 10;

// }

// void a (int* p) {
//     *p =*p + 1;
//     int x = 100;

//     b(&x);
// }

// int*addOnetoX (int x) {
//     x = x+1;
//     return &x;
// }

int main() {

    // int x = 100;
    // int z = 200;
    // int y = 100;

    // int *p = &x;
    // int **q = &p;
    // int* w = &z;

int *a = new int [3];
int *b;
b=a;

for (int i=0 ; i<3 ; i++) {
    std::cout << b[i] << " ";
}

    // int x = 100;
    // int* p = addOnetoX(x);

    // std::cout << *p << std::endl; // Output = 1???

    return 0;

}