// Teala Isaac
// CSC.1202.502
// November 23, 2026

#include "Truck.h"

#include <iostream>

using namespace std;

void Truck::setTowingCapacity(int capacity) {
	towingCapacity = capacity; // Set the towing capacity of the truck.
}

int Truck::getTowingCapacity() {
	return towingCapacity; // Return the towing capacity of the truck.
}

void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << "\n";
}