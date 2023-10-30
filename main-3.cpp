#include <iostream>

class Shark {

    private:
    std::string name;
    double weight;
    int length;

    public:
    Shark(); 
    Shark(std::string s_name , double s_weight , int s_length);
    
    std::string get_name() {return name;}
    double get_weight() {return weight;}
    int get_length() {return length;}

    std::string set_name(std::string new_name) {
        name = new_name;
        return name;
        } 

};

Shark::Shark(): name(" ") , weight(0.0) , length(0) {}; // Default constructor

// Shark::Shark(std::string s_name, double s_weight, int s_length) { 
//     name = s_name; // this->name = s_name
//     weight = s_weight; 
//     length = s_length;
// }

Shark::Shark(std::string s_name, double s_weight, int s_length) : name(s_name), weight(s_weight) , length(s_length) {} ;
// s_name,weight & length is data get when created an object Shark

Shark* shark_born() {
    Shark* shark_born = new Shark(); // Allocate memory for a new shark

    return shark_born; // return pointer name
}

int main () {
    Shark* s1 = shark_born(); // create an default Shark
    Shark s2("White", 78.9, 72);

    //Print shark s1
    std::cout << "s1. " << "Length: " << s1->get_length() << std::endl;
 
    // Pointer use 1
    Shark* s = &s2; // Pointer type Shark, name s holding address of s2
                    // Return an address in the stack

    //Print s2 
    std::cout << "Address of s2: " << s << std::endl;
    //std::cout << "s2: " << *s.get_name() << std::endl; Equal to the after line
    std::cout << "Name: " << s->get_name() << ", " // Pointer "s" is pointing at (->) method "get_name"
               << "Weight: " << s2.get_weight() <<std::endl;

    //Pointer use 2
    Shark* h = new Shark("Black", 56.7, 65); // L: Create a pointer type Shark, name h
                                             // R: Create and save a new Shark on the heap

    //Print
    std::cout <<"s3. " << h->get_name() << std::endl;
    std::cout << "s3. " << "New name: " <<  h->set_name("Grey") << std::endl; 
    std::cout <<"s3. " << h->get_name() << std::endl; //Success updating name

    delete h; // Only use delete when "new"

    return 0;
}