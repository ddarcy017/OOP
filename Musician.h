#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
    public:
    Musician(); // Default Constructor
    Musician(std::string instrument , int experience); // Parameter to declare, not called
    
    std::string get_instrument();
    int get_experience();

    private:
    std::string instrument;
    int experience;

};

#endif