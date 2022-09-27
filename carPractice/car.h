#pragma once

#include <string>

class Car
{
public:

	//settings
	std::string make;
	std::string model;
	int doors;
	float mPG;

	//states
	float mileage;
	float fuelQuantity;

	void Print();
	void Drive(float milesTravelled);
	
};