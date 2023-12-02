#include <iostream>

//Static member cant access to private data
//Static cant set to 0
//Without static, each object has a count => always be 1

class Student {
    private:
    int id;
    static int count; //Defined in the class
    
    public:
    Student() { // Purpose: for each stdent, assign an id, id dev as more student created
        id = Student::count++; //Adding Sudent:: for readability
    }

    static int getCount() {return count;} // Shoud also be static
};

//static int count = 1; // Wrong
int Student::count = 1000; //Have to initialised outside of the class
                           //Have to access calling Class


int main() {

    Student s1; //id is assigned as student created by count function
    Student s2;
    Student s3;

std::cout << Student::getCount() <<std::endl; //Still can access without creating obj
}