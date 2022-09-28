#pragma once

#include <string>

class Car
{
public:

	Car();
	Car(std::string newMake, std::string newModel, int newDoors, float newMPG, float newMileage, float newFuelQuantity);
	
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