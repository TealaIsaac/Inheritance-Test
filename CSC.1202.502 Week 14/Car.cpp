// Teala Isaac
// CSC.1202.502
// November 23, 2026

#include "Car.h"

#include <iostream>

using namespace std;

void Car::setNumDoors(int doors) {
	numDoors = doors;
}

int Car::getNumDoors() {
	return numDoors;
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Doors: " << numDoors << "\n";
}