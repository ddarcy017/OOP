#include "Play.h"
#include "Snare.h"
#include "Persona.h"
#include "Spot.h"
#include "Influence.h"
#include "Assists.h"

#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

int main() {
    // Define parameters
    int numPersonas = 5;          
    int numSnares = 3;            
    int matrixWidth = 20;         
    int matrixHeight = 10;        
    int maxCycles = 100;          
    double snareTriggerDistance = 2.0;  

   
    Play game;
    game.initPlay(numPersonas, numSnares, matrixWidth, matrixHeight);

   
    game.playCycle(maxCycles, snareTriggerDistance);

    return 0;
}
