// Teala Isaac
// CSC.1202.502
// November 23, 2026

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>

using namespace std;

void getVehicleInfo(Vehicle &);
void getCarInfo(Car &);
void getTruckInfo(Truck &);
double getValidNum(string, string, bool, bool); // Validates numbers and prevents infinite loops from invalid user inputs.

int main() {
	Vehicle vehicle;
	Car car;
	Truck truck;

	cout << "Vehicle Program\n\n";

	getVehicleInfo(vehicle);
	vehicle.displayInfo();

	getCarInfo(car);
	car.displayInfo();

	getTruckInfo(truck);
	truck.displayInfo();

	return 0;
}

void getVehicleInfo(Vehicle &vehicle) {
	cout << "Vehicle:\nEnter the manufacturer: ";
	cout << "Enter the year built: ";
}

void getCarInfo(Car &car) {
	cout << "\nCar:\nEnter the manufacturer: ";
	cout << "Enter the year built: ";
	cout << "Enter the number of doors: ";
}

void getTruckInfo(Truck &truck) {
	cout << "\nTruck:\nEnter the manufacturer: ";
	cout << "Enter the year built: ";
	cout << "Enter the towing capacity: ";
}

double getValidNum(string message, string error, bool messageEnabled, bool customError) {
	double num = 0;
	bool isValid = false;

	do {
		if (messageEnabled) {
			cout << message;
		}
		cin >> num;

		if (cin.fail()) { // Clear and ignore invalid inputs.
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			if (customError) {
				cout << error << "\n";
			}
			else {
				cout << "ERROR: Please enter a valid number.\n";
			}
		}
		else {
			isValid = true;
		}
	} while (!isValid);

	return num;
}