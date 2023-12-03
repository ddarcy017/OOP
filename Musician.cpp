#include "Musician.h"
using namespace std;

Musician::Musician() : instrument(" "), experience(0){ //  Default constructor
    instrument = " "; // or "null"
    experience = 0; // Initialised variables //If "int experience = 0;" -> Create a local variable
}

Musician::Musician(string instrument, int experience) { // Instrument and experience are member variable
    this->instrument = instrument; // Left: the instrument declare when create an object ; Right: Member variable
    this->experience = experience; // Assigning parameter value to the class member
}

string Musician::get_instrument() { return instrument;}

int Musician::get_experience() {return experience;}