#ifndef PERSONA_H
#define PERSONA_H

#include "Spot.h"

class Persona : public Spot {
public:
    Persona(int x, int y) : Spot(x, y, 'P') {};

    void shift(int dx, int dy) {
        std::tuple<int, int> loc = getLoc();
        setLoc(std::get<0>(loc) + dx, std::get<1>(loc) + dy);
    }
};

#endif
