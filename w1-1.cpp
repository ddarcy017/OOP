#include <iostream>

struct myClass {
    int n1;
    double d1;
    int n3;
};

int main() {
    std::cout << "Has " << sizeof(myClass) << " bytes" << std::endl;

    return 0;
}