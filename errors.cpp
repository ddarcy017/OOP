#include <iostream>

class Person {
    public:
    int* _age; 
    Person() {_age = new int;} 
    void setAge(int age) {
        *_age = age; 
        if(age<0 || age>100) {throw std::runtime_error ("Invalid age");} //Accept string

    }
    
    ~Person(){ //Dest
        delete _age;
        std::cout << "-Person\n";
    }
};

int main() {

    try {
    Person p1; 
    p1.setAge(819); 
    
    } catch(const std::exception &msg) { //exception is an abstract class, requires a reference to the msg
        std::cerr << msg.what() << std::endl; 
    } catch(int tooBig) {
        std::cerr << tooBig << std::endl;
    } catch(...) { //If this at the begining, catch everything then excute next codes
        std::cerr << "Undefined error\n";
    }


    Person* p4 = new Person; 
    p4->setAge(27);
    std::cout << *(p4->_age) << std::endl; 
    
    return 0;
}