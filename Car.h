#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
    public:
        Car(std::time_t timeOfEntry, int ID);
        int getParkingDuration(std::time_t timeOfEntry);

};
#endif