#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
    private:
    std::string name;
    int health;
    int damage;

    public:
    Player (std::string name, int health, int damage);
    void attack(Player* opponent, int damage);
    void takeDamage(int damage);
    
    int get_health(){return health;}
    int get_damage() {return damage;}
    
};

#endif