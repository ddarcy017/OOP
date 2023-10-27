#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

#include "Spot.h"

class Persona : public Spot {
    public:
    Persona(int x, int y) : Spot(x, y, 'P'){};
    
    void shift(int dx, int dy) {
        this->setLoc(get<0>(this->getLoc()) + dx, get<1>(this->getLoc()) + dy);
    } 

};
#endif
