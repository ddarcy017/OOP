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

    void playCycle(int maxCycles, double snareTriggerDistance) {
        for (int cycle = 0; cycle < maxCycles; cycle++) {
            for (Spot* spot : matrix) {
                if (spot->getCategory() == 'P') {
                    Persona* persona = static_cast<Persona*>(spot);
                    persona->shift(1, 0);

                    if (std::get<0>(spot->getLoc()) > this->matrixWidth) {
                        std::cout << "Persona has won the game!" << std::endl;
                        return;
                    }

                    for (Spot* innerSpot : matrix) {
                        if (innerSpot->getCategory() == 'S' &&
                            Assists::evaluateDistance(spot->getLoc(), innerSpot->getLoc()) <= snareTriggerDistance) {
                            Snare* snare = static_cast<Snare*>(innerSpot);
                            snare->implement(*persona);
                        }
                    }
                }
            }
        }

        std::cout << "Maximum number of cycles reached. Game over." << std::endl;
    }
};

#endif
