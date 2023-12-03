#include <iostream>
using namespace std;

// W1
int *p = new int(2); // *p in the stack, value stored at*p in the heap

// If value set in a function -> local variable -> delete after running the function
// *p as parameter -> (&p)

//W2 Arrays

int a[4] = {15,42,13,18};

cout << *a << endl; // Return first ele of a
cout << &a << endl; //Return first ele ADDRESS of a
cout << **(&a[0]) << endl; //Return first ele of array

//In C++, cant access member using class name. First create an object of that class
// When create a class, everything is private by default
// Check for default constructor

// For struct, if using * with assign value, can change value

// #include <iostream>

// int main() {
//     int* *a = new int*[2];
//     int *h = new int(2);

//     std::cout << &a << std::endl; // Address of a, which is a pointer to an address of 2 new allocated int
//     std::cout << *a << std::endl; // Address hold at a or address of the 2 new allocated int
//     std::cout << *h << std::endl; // Set new int = 2 and assign it in the heap, the pointer h would store the address on the stack and return the value stored
// }

// If *a uses -> ;
// If a use . ;

// If data member is a pointer but no assign value, only run the called one
// If data member is a value, the previous class would then called
// If data mem is pointer but also delete, +B +B +A -B -B -A
// Child cant point to parent but parent can point to child

// -> Point to base class
// If virtual, running both
// If non virtual, run the base