#ifndef SNARE_H
#define SNARE_H

#include "Spot.h"
#include "Influence.h"
#include "Persona.h"

class Snare : public Spot, public Influence{

 private:
  bool operative = true;

 public:
  Snare(int x, int y) : Spot(x, y, 'S'){};

  bool isOperative() {
    if (!this->operative) {
      return false;
    }
    return true;
  }

  void set_operative(bool operative) { this->operative = operative; }

  void implement(Spot& spot) {
    spot.setCategory('S');
    this->set_operative(false);
  }
};
#endif
