#include <iostream>

class Box {
    int length;

public:
    Box(int len): length(len) {}

    // Function to compare the object's length with another object's length
    bool isEqual(Box& anotherBox) {
        return this->length == anotherBox.length; // Here 'this->length' refers to the current object's length
    }
};

int main() {
    Box box1(10);
    Box box2(20);
    
    if(box1.isEqual(box2))
        std::cout << "Both boxes are of the same length!" << std::endl;
    else
        std::cout << "Boxes have different lengths." << std::endl;

    return 0;
}
