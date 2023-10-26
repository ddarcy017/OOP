#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <tuple>
#include <vector>
using namespace std;
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
class Character : public Cell {
 public:
  Character(int x, int y) : Cell(x, y, 'C'){};
  void move(int dx, int dy) {
    this->setPos(get<0>(this->getPos()) + dx, get<1>(this->getPos()) + dy);
  }

 private:
};
#endif
