#include <iostream>

int main () {

int *a = new int [3];
int *b;

b=a;

for (int i=0 ; i<3 ; i++) {
    std::cout << b[i] << " ";
}

    std::cout << std::endl; // Output = 1???

    return 0;

}