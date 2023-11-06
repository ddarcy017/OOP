#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
    public:    
        Motorbike(std::time_t timeOfEntry, int ID);
        int getParkingDuration(std::time_t timeofEntry);
};

#endif