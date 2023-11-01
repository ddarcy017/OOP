#ifndef SPOT_H
#define SPOT_H

#include <tuple>

class Spot {
private:
    std::tuple<int, int> location;
    char category;

public:
    Spot(int x, int y, char type) {
        this->location = std::make_tuple(x, y);
        this->category = type;
    }

    std::tuple<int, int> getLoc() { return this->location; };

    char getCategory() { return this->category; };
    void setLoc(int x, int y) { this->location = std::make_tuple(x, y); };
    void setCategory(char category) { this->category = category; };
};

#endif
