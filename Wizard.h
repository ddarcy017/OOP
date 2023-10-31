#ifndef WIZARD_H
#define WIZARD_H

#include "Player.h"

class Wizard : public Player {
    private:
    int mana;

    public:
    void cast_spell (Player* opponent);

};
#endif