#include <iostream>

class Person {
    public:
    int* _age; 
    Person() {_age = new int;} //Allocate memory for each new age
                               //Const
    void setAge(int age) {
        *_age = age; 
        if(age<0) {throw("Invalid age");} 
        else if(age>100) {throw int(999);} 
    }
    
    ~Person(){ //Dest
        delete _age;
        std::cout << "-Person\n";
    }
};

int main() {

    //Person p1; //Set outside would delete all obj 

    try {
    Person p1; //Have to set inside the block so that it only destroied in the code
               //If so codes below wouldn't affected & avoid memo leak
    p1.setAge(819); 


    //Or 
    throw(0);
    } catch(const char* msg) { 
        std::cerr << msg << std::endl; 
    } catch(int tooBig) {
        std::cerr << tooBig << std::endl;
    } catch(...) { //catch all
        std::cerr << "Undefined error\n";
    }


    Person* p4 = new Person; //Continue compile after handling errors
    p4->setAge(27);
    std::cout << *(p4->_age) << std::endl; 

    return 0;
    
}