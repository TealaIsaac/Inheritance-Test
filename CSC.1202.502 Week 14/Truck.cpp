// Teala Isaac
// CSC.1202.502
// November 23, 2026

#include "Truck.h"

#include <iostream>

using namespace std;

Truck::Truck() : Vehicle() {
	towingCapacity = 0; // Set the default towing capacity of the truck.
}

Truck::Truck(string name, int year, int capacity) : Vehicle(name, year) {
	towingCapacity = capacity;
}

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