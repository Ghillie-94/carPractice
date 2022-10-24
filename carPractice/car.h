#pragma once

#include <string>

class Car
{
public:

	Car();
	Car(std::string newMake, std::string newModel, std::string serialNum, int newDoors, float newMPG, float newMileage, float newFuelQuantity);
	~Car();
	
	//settings
	std::string make;
	std::string model;
	std::string serialNum;
	int doors;
	float mPG;

	//states
	float mileage;
	float fuelQuantity;

	void Print();
	void Drive(float milesTravelled);
	
};