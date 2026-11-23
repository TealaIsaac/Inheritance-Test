// Teala Isaac
// CSC.1202.502
// November 23, 2026

#include "Truck.h"

#include <iostream>

using namespace std;

void Truck::setTowingCapacity(int capacity) {
		towingCapacity = capacity;
}

int Truck::getTowingCapacity() {
	return towingCapacity;
}

void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << "\n";
}