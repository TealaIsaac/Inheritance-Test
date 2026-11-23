// Teala Isaac
// CSC.1202.502
// November 23, 2026

#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
	private:
		string manufacturer;
		int yearBuilt;

	public:
		void setManufacturer(string name);
		string getManufacturer();
		void setYearBuilt(int year);
		int getYearBuilt();
		void displayInfo();
};

#endif