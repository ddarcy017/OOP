#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <iostream>
#include <string>


class Musician {

    private:
    std::string instrument; // Define member variable 1
    int experience;   // Define member variable 2
    
    public:
    Musician (); //: instrument(" "), experience(0) {}; 
                 // If add this line, delete the default constructor in .cpp

    Musician (std::string instrument, int experience); // Constructor that takes data

    std::string get_instrument();

    int get_experience();

};

#endif