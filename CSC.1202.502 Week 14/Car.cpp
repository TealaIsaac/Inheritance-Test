// Teala Isaac
// CSC.1202.502
// November 23, 2026

#include "Car.h"

#include <iostream>

using namespace std;

Car::Car() : Vehicle() {
	numDoors = 0; // Set the default number of car doors.
}

Car::Car(string name, int year, int doors) : Vehicle(name, year) {
	numDoors = doors;
}

void Car::setNumDoors(int doors) {
	numDoors = doors; // Set the number of car doors.
}

int Car::getNumDoors() {
	return numDoors; // Return the number of car doors.
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Doors: " << numDoors << "\n";
}