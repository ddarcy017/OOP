#include "Car.h"

Car::Car(std::time_t timeOfEntry, int ID) : timeOfEntry(timeOfEntry), ID(ID);

int Car::getParkingDuration (std::time_t timeOfEntry) {
    this->timeOfEntry = timeOfEntry * 0.1 ;   
   
    return ParkingDuration;
}
