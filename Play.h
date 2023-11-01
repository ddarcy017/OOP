#ifndef PLAY_H
#define PLAY_H

#include "Spot.h"
#include "Influence.h"
#include "Assists.h"
#include "Snare.h"
#include "Persona.h"

#include <iostream>
#include <vector>
#include <tuple>

class Play {
private:
    std::vector<Spot*> matrix;
    int matrixWidth;
    int matrixHeight;

public:
    Play() {};

    std::vector<Spot*>& getMatrix() { return matrix; };

    void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight) {
        this->matrixWidth = matrixWidth;
        this->matrixHeight = matrixHeight;

        for (int i = 0; i < numPersonas; i++) {
            std::tuple<int, int> loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
            Spot* persona = new Persona(std::get<0>(loc), std::get<1>(loc));
            matrix.push_back(persona);
        }

        for (int i = 0; i < numSnares; i++) {
            std::tuple<int, int> loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
            Spot* snare = new Snare(std::get<0>(loc), std::get<1>(loc));
            matrix.push_back(snare);
        }
    }

    void playCycle(int maxCycles, double snareTriggerDistance);


};

#endif
