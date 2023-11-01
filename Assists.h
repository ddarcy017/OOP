#ifndef ASSISTS_H
#define ASSISTS_H

#include <cmath>
#include <tuple>
#include <cstdlib> // Add this for rand()
#include <ctime>   // Add this for srand()
#include <iostream>

class Assists {
public:
    static std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight) {
        std::srand(static_cast<unsigned>(std::time(nullptr))); // Seed the random number generator
        int x = std::rand() % matrixWidth;
        int y = std::rand() % matrixHeight;
        return std::make_tuple(x, y);
    }

    static double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2) {
        double dist = std::sqrt(std::pow(std::get<0>(loc1) - std::get<0>(loc2), 2) +
                                std::pow(std::get<1>(loc1) - std::get<1>(loc2), 2));
        return dist;
    }
};

#endif
