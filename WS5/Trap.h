#ifndef TRAP_H
#define TRAP_H
#include <iostream>
#include <tuple>
#include <vector>
using namespace std;
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
class Trap : public Cell, public Effect {
 private:
  bool active = true;

 public:
  Trap(int x, int y) : Cell(x, y, 'T'){};

  bool isActive() {
    if (!this->active) {
      return false;
    }
    return true;
  }

  void set_active(bool active) { this->active = active; }

  void apply(Cell& cell) {
    cell.setType('T');
    this->set_active(false);
  }
};
#endif