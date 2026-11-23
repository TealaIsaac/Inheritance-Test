// Teala Isaac
// CSC.1202.502
// November 23, 2026

#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
	private:
		int numDoors;

	public:
		void setNumDoors(int doors);
		int getNumDoors();
		virtual void displayInfo();
};

#endif