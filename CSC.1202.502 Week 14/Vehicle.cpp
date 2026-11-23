// Teala Isaac
// CSC.1202.502
// November 23, 2026

#include "Vehicle.h"

#include <iostream>

using namespace std;

void Vehicle::setManufacturer(string name) {
	manufacturer = name; // Set the manufacturer name.
}

string Vehicle::getManufacturer() {
	return manufacturer; // Return the manufacturer name.
}

void Vehicle::setYearBuilt(int year) {
	yearBuilt = year; // Set the year the vehicle was built.
}

int Vehicle::getYearBuilt() {
	return yearBuilt; // Return the year the vehicle was built.
}

void Vehicle::displayInfo() {
	cout << "\nVehicle Information:" <<
		"\nManufacturer: " << manufacturer <<
		"\nYear Built: " << yearBuilt << "\n";
}