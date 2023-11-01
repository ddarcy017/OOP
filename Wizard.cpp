#include "Player.h"
#include "Wizard.h"
 
#include <iostream>

Wizard::Wizard(std::string name, int health, int damage, int mana) : Player(name,health,damage) , mana(mana) {
    this->mana = mana;
}

void Wizard::castSpell (Player* opponent) {

    attack(opponent, getMana());
    opponent->takeDamage(getMana());
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";

}

int Wizard::getMana() {return mana;} 