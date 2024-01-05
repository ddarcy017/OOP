#include <iostream>
#include <cmath>

int main() {
    int sum = 0;
    for (int i = 2; i < 51; i++) {
        sum += pow(i, 2) + 1;
    }
    std::cout << sum << std::endl;
    return 0;
}
