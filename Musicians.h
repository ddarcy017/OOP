#ifndef MUSICIANS_H
#define MUSICIANS_H

#include <iostream>
#include <string>
using namespace std;

class Musicians {

    private:
    string instrument; // Define member variable 1
    int experience;   // Define member variable 2
    
    public:
    Musicians (); // Default constructor

    Musicians (string instrument, int experience); // Constructor that takes data

    string get_instrument();

    int get_experience();

};

#endif