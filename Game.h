#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
using namespace std;
#include "Cell.h"
#include "Character.h"
#include "Effect.h"
#include "Trap.h"
#include "Utils.h"

class Game {
 private:
  std::vector<Cell*> grid;
  int gridWidth;
  int gridHeight;

 public:
  Game(){};
  std::vector<Cell*>& getGrid() { return grid; };
  void set_grid(Cell* new_cells) { grid.push_back(new_cells); };
  void initGame(int numCharacters, int numTraps, int gridWidth,
                int gridHeight) {
    this->gridWidth = gridWidth;
    this->gridHeight = gridHeight;
    for (int i = 0; i < numCharacters; i++) {
      Cell* character = new Character(
          get<0>(Utils::generateRandomPos(gridWidth, gridHeight)),
          get<1>(Utils::generateRandomPos(gridWidth, gridHeight)));
      grid.push_back(character);
    };
    for (int i = 0; i < numTraps; i++) {
      Cell* trap =
          new Trap(get<0>(Utils::generateRandomPos(gridWidth, gridHeight)),
                   get<1>(Utils::generateRandomPos(gridWidth, gridHeight)));
      grid.push_back(trap);
    };
  };
  void gameLoop(int maxIterations, double trapActivationDistance) {
    int count = 0;
    for (int i = 0; i < maxIterations; i++) {
      bool characterWon = false;
      for (int j = 0; j < static_cast<int>(this->getGrid().size()); j++) {
        if (this->getGrid()[j]->getType() == 'C') {
          if (get<0>(this->getGrid()[j]->getPos()) > this->gridWidth) {
            cout << "Character has won the game!" << endl;
            characterWon = true;
            return;
          }
          static_cast<Character*>(grid[j])->move(1, 0);
          count++;
        }
      }
      if (characterWon) {
        return;
      }
      //   bool characterPresent = false;
      for (int a = 0; a < static_cast<int>(this->getGrid().size()); a++) {
        if (this->getGrid()[a]->getType() == 'C') {
          for (int b = 0; b < static_cast<int>(this->getGrid().size()); b++) {
            if (this->getGrid()[b]->getType() == 'T') {
              if ((Utils::calculateDistance(this->getGrid()[a]->getPos(),
                                            this->getGrid()[b]->getPos())) <=
                  trapActivationDistance) {
                static_cast<Trap*>(grid[b])->apply(*(this->getGrid()[a]));
                count--;
              }
            }
          }
        }
      }
    }

    // if (count > maxIterations) {
    cout << "Maximum number of iterations reached. Game over." << endl;
      //   return;
      // }
  }
};

#endif