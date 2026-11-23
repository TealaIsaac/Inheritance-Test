// Teala Isaac
// CSC.1202.502
// November 23, 2026

#include <iostream>

using namespace std;

double getValidNum(string, string, bool, bool); // Validates numbers and prevents infinite loops from invalid user inputs.

int main() {

	return 0;
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