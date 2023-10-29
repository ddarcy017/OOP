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

};

Shark::Shark(): name(" ") , weight(0.0) , length(0) {}; // Default constructor

// Shark::Shark(std::string s_name, double s_weight, int s_length) { 
//     name = s_name; // this->name = s_name
//     weight = s_weight; 
//     length = s_length;
// }

Shark::Shark(std::string s_name, double s_weight, int s_length) : name(s_name), weight(s_weight) , length(s_length) {} ;
// s_name,weight & length is data get when created an object Shark

int main () {
    Shark s1; // create an default Shark
    Shark s2("White", 78.9, 72);

    Shark* s = &s2; // Pointer type Shark, name s holding address of s2
                    // Return an address in the stack
    std::cout << "Address of s2: " << s << std::endl;
    //std::cout << "s2: " << *s.get_name() << std::endl; Equal to the after line
    std::cout << "Name: " << s->get_name() << ", " // Pointer "s" is pointing at (->) method "get_name"
               << "Weight: " << s2.get_weight() <<std::endl;

    return 0;
}