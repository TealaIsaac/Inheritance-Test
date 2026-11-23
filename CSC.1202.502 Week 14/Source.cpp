// Teala Isaac
// CSC.1202.502
// November 23, 2026

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <string> // For getline.

using namespace std;

void getVehicleInfo(string &, int &); // Gets vehicle information from the user.
void getCarInfo(string &, int &, int &); // Gets car information from the user.
void getTruckInfo(string &, int &, int &); // Gets truck information from the user.
double getValidNum(string, string, bool, bool); // Validates numbers and prevents infinite loops from invalid user inputs.

int main() {
	string manufacturer;
	int yearBuilt;
	int numDoors;
	int towingCapacity;

	cout << "Vehicle Program\n";

	getVehicleInfo(manufacturer, yearBuilt); // Get vehicle info.
	Vehicle vehicle(manufacturer, yearBuilt); // Create a Vehicle object using the user input.
	vehicle.displayInfo(); // Display the vehicle information.

	cin.ignore(); // Ignore before getting car info, otherwise manufacturer will be skipped.
	getCarInfo(manufacturer, yearBuilt, numDoors); // Get car info.
	Car car(manufacturer, yearBuilt, numDoors); // Create a Car object using the user input.
	car.displayInfo(); // Display the car information.

	cin.ignore(); // Ignore before getting truck info, otherwise manufacturer will be skipped.
	getTruckInfo(manufacturer, yearBuilt, towingCapacity); // Get truck info.
	Truck truck(manufacturer, yearBuilt, towingCapacity); // Create a Truck object using the user input.
	truck.displayInfo(); // Display the truck information.

	return 0;
}

void getVehicleInfo(string &manufacturer, int &yearBuilt) {
	cout << "\nVehicle:\nEnter the manufacturer: ";
	getline(cin, manufacturer);
	yearBuilt = getValidNum("Enter the year built: ", "ERROR: Please enter a valid year.", true, true);
}

void getCarInfo(string &manufacturer, int &yearBuilt, int &numDoors) {
	cout << "\nCar:\nEnter the manufacturer: ";
	getline(cin, manufacturer);
	yearBuilt = getValidNum("Enter the year built: ", "ERROR: Please enter a valid year.", true, true);
	numDoors = getValidNum("Enter the number of doors: ", "", true, false);
}

void getTruckInfo(string &manufacturer, int &yearBuilt, int &towingCapacity) {
	cout << "\nTruck:\nEnter the manufacturer: ";
	getline(cin, manufacturer);
	yearBuilt = getValidNum("Enter the year built: ", "ERROR: Please enter a valid year.", true, true);
	towingCapacity = getValidNum("Enter the towing capacity: ", "", true, false);
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