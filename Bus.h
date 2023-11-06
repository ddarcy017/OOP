#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
        
    Bus(std::time_t timeOfEntry, int ID);
    int getID();

};

#endif