// Teala Isaac
// CSC.1202.502
// November 23, 2026

#include "Vehicle.h"

#include <iostream>

using namespace std;

void Vehicle::setManufacturer(string name) {
	manufacturer = name;
}

string Vehicle::getManufacturer() {
	return manufacturer;
}

void Vehicle::setYearBuilt(int year) {
	yearBuilt = year;
}

int Vehicle::getYearBuilt() {
	return yearBuilt;
}

void Vehicle::displayInfo() {
	cout << "\nVehicle Information:" <<
		"\nManufacturer: " << manufacturer <<
		"\nYear Built: " << yearBuilt << "\n";
}