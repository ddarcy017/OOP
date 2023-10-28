#include "Orchestra.h"

Orchestra::Orchestra(int size) {
    this->size = size;
    this->member = new Musician[size];
}

int Orchestra::get_current_number_of_members(){
    int count_member = 0;
    for (int i= 0 ; i<size; i++){
        if (member[i].get_experience() != 0 && member[i].get_instrument() != " ") // for methods, remember to put ()
        count_member++;
    }
        return count_member;
}

bool Orchestra::has_instrument(std::string instrument) {
    for (int i=0 ; i<size ; i++){
        if (member[i].get_instrument() == instrument) {return true;} // == to check for bool
        }
    return false;
}

Musician* Orchestra::get_members () {
    return member;
}

bool Orchestra::add_musician (Musician new_musician) {
    for (int i=0 ; i<size ; i++) {
        if (member[i].get_experience() == 0 && member[i].get_instrument() == " ") {
            member[i] = new_musician;
            return true;
        }
    }

    return false;
}

Orchestra::~Orchestra() { delete[] member; };


