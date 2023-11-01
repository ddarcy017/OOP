#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(std::string name, int health, int damage) : name(name), health(health), damage(damage) {}

void Player::attack (Player* opponent, int damage) {
    opponent->health -= damage;
}

void Player::takeDamage (int damage) {
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}

string Player::getName() {return name;}
int Player::getHealth(){return health;}
int Player::getDamage() {return damage;}





