#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include "Musician.h"

class Orchestra {
    public:
    
    Orchestra(); // Default constructor
    Orchestra(int size); // Parameterised constructor
    
    int get_current_number_of_members();
    bool has_instrument(std::string instrument);

    Musician* get_members();
    bool add_musician( Musician new_Musician);

    ~Orchestra(); // Destructor

    private:
    int size;
    Musician* members; // pointer name "member" pointing to the dynamic array of Musician
};

#endif