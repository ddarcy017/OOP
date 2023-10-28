#include "Musicians.h"

Musicians::Musicians() { //  Default constructor
    string instrument = " ";
    int experience = 0;
}

Musicians::Musicians(string instrument, int experience) { // Instrument and experience are member variable
    this->instrument = instrument; // Left hand instrument: Member variable ; Right hand: the instrument declare when create an object
    this->experience = experience; // Assigning parameter value to the class member
}

string Musicians::get_instrument() { return instrument;};

int Musicians::get_experience() {return experience;};