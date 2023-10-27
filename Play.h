#ifndef PLAY_H
#define PLAY_H

#include "Spot.h"
#include "Influence.h"
#include "Assists.h"
#include "Snare.h"
#include "Persona.h"

#include <iostream>
#include <cmath>
#include <vector>
#include <tuple>

using namespace std;

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
        tuple<int, int> loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
        Spot* persona = new Persona(get<0>(loc), get<1>(loc));
        matrix.push_back(persona);
    }

    for (int i = 0; i < numSnares; i++) {
        tuple<int, int> loc = Assists::createRandomLoc(matrixWidth, matrixHeight);
        Spot* snare = new Snare(get<0>(loc), get<1>(loc));
        matrix.push_back(snare);
    }
}

void playCycle(int maxCycles, double snareTriggerDistance) {
    for (int i = 0; i < maxCycles; i++) {
        for (Spot* spot : matrix) {
            if (spot->getCategory() == 'P') {
                static_cast<Persona*>(spot)->shift(1, 0);
                
                if (get<0>(spot->getLoc()) > this->matrixWidth) {
                    cout << "Persona has won the game!" << endl;
                    return;
                }

                for (Spot* innerSpot : matrix) {
                    if (innerSpot->getCategory() == 'S' && 
                        Assists::evaluateDistance(spot->getLoc(), innerSpot->getLoc()) <= snareTriggerDistance) {
                        static_cast<Snare*>(innerSpot)->implement(*spot);
                    }
                }
            }
        }
    }
    
    cout << "Maximum number of cycles reached. Game over." << endl;
}


};

#endif
