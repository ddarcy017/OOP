#include <iostream>
// Main purpose of throw catch try is to raise a flag where the code error
// Also seperating error detect & error handling clearly

class Person {
    public:
    int age; // If not initialised & not belong to public, auto set to private
    void setAge(int age) {
        this->age = age; //Left is the data member, right is thrown parameter
        if(age<0) {throw("Invalid age");} 
        else if(age>100) {throw std::string("01.01");} //If no catch fit the condition: terminate called after throwing an instance
    }
};

int main() {

    Person p1; //Without constructor, return random value of data type
    Person p2;
    Person p3;

    try {
    p1.setAge(819); //Only execute this code and jumpback to throw
                    //If the age is valid, handle p2
                    //If no p2 then throw 0
    p2.setAge(-5); 
    p3.setAge(25);

    //Or 
    throw(0);
    } catch(const char* msg) { //Auto linked to throw
        std::cerr << msg << std::endl; //Cout error
    } catch(int tooBig) {
        std::cerr << tooBig << std::endl;
    } catch(...) { //catch all
        std::cerr << "Undefined error\n";
    }
    //std::cout << p1.age << std::endl; //Err: terminate called after throwing an instance of 'char const*'

    Person* p4 = new Person; //Continue compile after handling errors
    p4->setAge(27);
    std::cout << p4->age << std::endl; 

    return 0;

}