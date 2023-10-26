#include <iostream>

class Simples {
    public:
    int data; // Declare: class Simple has a member variable data, type int
    
    // Traditionally
        // Simples(int val) {
        // data = val;
        // }
        
    Simples(int val) : data(val) {} // Shortcut way of constructor

    void showData() {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    int a = 10;
    int* b = &a; // &a return the address of a 
                // a stored in the stack, not heap cause a defined as a static variable (10)
    
    //*b = 0.5; // access into and update variable stored in a (if this line compiled, a and c updated to 0)
               // BUT CAN'T change the dataType of a

    int c = *b;

    std::cout << a << std::endl;
    std::cout << c << std::endl; 
    std::cout << *b << std::endl; // a = *b = c -> return the data at address  of a (10)
    std::cout << &a << std::endl;
    std::cout << b << std::endl; // b = &a -> return an address 

    // new:
    int* dynamicInt = new int(20);      // allocate int on heap and initialize to 20
   
    // dot operator:
    Simples obj(30);                    // Create a simples with val = 30 on the stack
    obj.showData();                     // object.method to use that method on that object

    // new with classes:
    Simples* objPtr = new Simples(40);  // Allocate memory on the heap, return a pointer to newly allocated memory
    objPtr->showData();                 // Use -> to call showData method for the POINTER objPtr

    std::cout << "dynamicInt: " << dynamicInt << std::endl; // Print the address on the heap of dynamicInt
    std::cout << "*dynamicInt: " << *dynamicInt << std::endl; // Since it's pointer todnamicInt, prints the value stored at synamicInt
    std::cout << "objPtr: " << objPtr << std::endl;
    std::cout << "objPtr->data: " << objPtr->data << std::endl;

    delete dynamicInt;
    delete objPtr;
}