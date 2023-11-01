#include "Player.h"
#include "Warrior.h"

#include<iostream>

Warrior::Warrior(std::string name, int health, int damage, std::string weapon) : Player(name,health,damage), weapon(weapon) {}

void Warrior::swingWeapon(Player* opponent) {

    attack(opponent, getDamage());
    opponent->takeDamage(getDamage());
    
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
}

std::string Warrior::getWeapon() {return weapon; }