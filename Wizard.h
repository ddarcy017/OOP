#ifndef WIZARD_H
#define WIZARD_H

#include "Player.h"

#include <cstdlib>
#include <ctime>

class Wizard : public Player {

    private:
        int mana;

    public:
        Wizard(std::string name, int health, int damage, int mana);
        void castSpell (Player* opponent);
        int getMana();

};

#endif