#ifndef UTILS_H
#define UTILS_H

#include <cmath>
#include <iostream>
#include <tuple>
#include <vector>

// #include "Cell.h"

using namespace std;

class Utils {
 private:
 public:
  static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
    int x = rand() % gridWidth + 0;
    int y = rand() % gridHeight + 0;
    return std::make_tuple(x, y);
  }
  static double calculateDistance(std::tuple<int, int> pos1,
                                  std::tuple<int, int> pos2) {
    double dist = sqrt(pow(get<0>(pos1) - get<0>(pos2), 2) +
                       pow(get<1>(pos1) - get<1>(pos2), 2));
    return dist;
  }
};

#endif