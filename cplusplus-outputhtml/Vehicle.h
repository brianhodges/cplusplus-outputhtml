#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <sstream>
using namespace std;


class Vehicle {
public:
	string Make, Model, Year;
	float Price;
	void SetValues(string, string, string, float);
	string FullName();
	string FullPrice();
};

void Vehicle::SetValues(string ma, string mo, string ye, float p) {
	Make = ma;
	Model = mo;
	Year = ye;
	Price = p;
}

string Vehicle::FullName() {
	return Year + " " + Make + " " + Model;
}

string Vehicle::FullPrice() {
	stringstream stream;
	stream << fixed << setprecision(2) << Price;
	string s = "$" + stream.str();
	return s;
}

#endif