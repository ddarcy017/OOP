#include "Player.h"
#include <iostream>

Player::Player(std::string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Player::attack (Player* opponent, int damage) {
    opponent-> health -= damage;
}

void Player::takeDamage (int damage) {
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}

int Player::get_health() {
    std::cout << "Remaining health: " << health << "\n";
    return health;
}

int Player::get_damage() {
    std::cout << "Damage dealed: " << damage << std::endl;
    return damage;
}



