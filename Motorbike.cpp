#include "Motorbike.h"

Motorbike::Motorbike(std::time_t timeOfEntry, int ID) : Vehicle(timeOfEntry, ID) {};

int Motorbike::getParkingDuration (std::time_t timeOfEntry) {   
    return ParkingDuration = timeOfEntry * 0.9 ;;
};
