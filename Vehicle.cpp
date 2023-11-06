#include "Vehicle.h"

Vehicle::Vehicle(std::time_t timeOfEntry, int ID) : timeOfEntry(timeOfEntry), ID(ID) {}

int Vehicle::getID() {return ID;}
