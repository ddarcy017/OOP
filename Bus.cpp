#include "Bus.h"

Bus::Bus(std::time_t timeOf Entry, int ID) : timeOfEntry(timeOfEntry), ID(ID) {};

int Bus::getParkingDuration (std::time_t timeOfEntry) {
    this->timeOfEntry = timeOfEntry * 0.25 ;   
    return ParkingDuration;
}
