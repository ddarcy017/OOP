#ifndef CELL_H
#define CELL_H

#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

class Cell {
 private:
  std::tuple<int, int> position;
  char type;

 public:
  Cell(int x, int y, char type) {
    this->position = make_tuple(x, y);
    this->type = type;
  }
  std::tuple<int, int> getPos() { return this->position; }
  char getType() { return this->type; }
  void setPos(int x, int y) { this->position = make_tuple(x, y); }
  void setType(char type) { this->type = type; }
};

#endif