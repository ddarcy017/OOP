#include <ctime>
#include <iostream>

int main() {
    std::time_t now = std::time(nullptr);
    std::cout << "Current time: " << now << std::endl;
    return 0;
}
