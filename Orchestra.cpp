#include "Orchestra.h"

Orchestra::Orchestra() {size = 0;}

Orchestra::Orchestra(int memNumber) { 
    size = memNumber;
    members = new Musician[size]; }

int Orchestra::get_current_number_of_members() {
    int currentMem = 0;
    for (int i=0 ; i<size ; i++){
        if (members[i].get_instrument() == " " ) {
            return currentMem;
        } else {
            currentMem++; }
    } 
        return currentMem;
}

bool Orchestra::has_instrument( std::string instrument) {
    for (int i=0 ; i<size ; i++) {
        if (members[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members(){ return members; }

bool Orchestra::add_musician (Musician new_Musician) {
    for (int i=0 ; i<size ; i++){
        if (members[i].get_experience() == 0){
            members[i] = new_Musician;
            return true;
        }
    }   
    return false;
}

Orchestra::~Orchestra() { delete[] members; }