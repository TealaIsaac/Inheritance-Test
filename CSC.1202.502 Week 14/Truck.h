// Teala Isaac
// CSC.1202.502
// November 23, 2026

#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {
	private:
		int towingCapacity;

	public:
		Truck();
		Truck(string name, int year, int capacity);
		void setTowingCapacity(int capacity);
		int getTowingCapacity();
		virtual void displayInfo();
};

#endif