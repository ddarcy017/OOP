#ifndef ASSISTS_H
#define ASSISTS_H

#include <cmath>
#include <iostream>
#include <tuple>
#include <vector>


using namespace std;

class Assists {
 private:
 public:
  std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight) {
    int x = rand() % matrixWidth + 0;
    int y = rand() % matrixHeight + 0;
    return std::make_tuple(x, y);
  }
  
  static double evaluateDistance(std::tuple<int, int> loc1,
                                  std::tuple<int, int> loc2) {
    double dist = sqrt(pow(get<0>(loc1) - get<0>(loc2), 2) +
                       pow(get<1>(loc1) - get<1>(loc2), 2));
    return dist;
  }
};

#endif