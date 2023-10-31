#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"

class Warrior : public Player {
    private:
    std::string weapon;

    public:
    void swingWeapon (Player* opponent); 

};
#endif