#pragma once

#include <string>
#include <map>

class Car
{
public:

	Car();
	Car(std::string newMake, std::string newModel, std::string serialNum, int newDoors, float newMPG, float newMileage, float newFuelQuantity);
	~Car();
	void doCarLookup(std::string serial, Car car);
	Car getCarLookup(std::string serial);
	
	//settings
	std::string make;
	std::string model;
	std::string serialNum;
	int doors;
	float mPG;
	std::map<std::string, Car> carLookup;

	//states
	float mileage;
	float fuelQuantity;

	void Print();
	void Drive(float milesTravelled);
	
};