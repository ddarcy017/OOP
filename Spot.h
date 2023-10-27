#ifndef SPOT_H
#define SPOT_H

#include <iostream>
#include <tuple>
#include <vector>

class Spot{
    private:
    std::tuple<int, int> location;
    char category;

    public:
    
    Spot(int x, int y, char type) {
        this->location = make_tuple(x, y);
        this->category = category;
    }

    std::tuple<int, int> getLoc() {return this->location; };

    char getCategory() {return this->category; };
    void setLoc(int x, int y) {this->location = make_tuple(x, y); };
    void setCategory(char category) {this->category = category; };

    };

#endif