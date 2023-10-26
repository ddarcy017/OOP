#ifndef EFFECT_H
#define EFFECT_H

#include <iostream>
#include <tuple>
#include <vector>

#include "Cell.h"

using namespace std;

class Effect {
 public:
  virtual void apply(Cell& cell) = 0;
};

#endif