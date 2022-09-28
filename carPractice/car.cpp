#include "car.h"
#include <iostream>

Car::Car()
	: make("")
	, model("")
	, doors(0)
	, mileage(0)
	, mPG(0)
	, fuelQuantity(0)
{
	std::cout << "Car constructed!" << std::endl;
}

Car::Car(std::string newMake, std::string newModel, int newDoors, float newMPG, float newMileage, float newFuelQuantity)
	:	make(newMake)
	,	model(newModel)
	,	doors(newDoors)
	,	mPG(newMPG)
	,	mileage(newMileage)
	,	fuelQuantity(newFuelQuantity)
{
	std::cout << "car constructed using parameters!" << std::endl;
}

void Car::Print()
{
	std::cout << "Car info:" << std::endl;
	std::cout << "Make: " << make << std::endl;
	std::cout << "Model: " << model << std::endl;
	std::cout << "Doors: " << doors << std::endl;
	std::cout << "Mileage: " << mileage << std::endl;
	std::cout << "MPG: " << mPG << std::endl;
	std::cout << "Quantity of fuel: " << fuelQuantity << std::endl;
}

void Car::Drive(float milesTravelled)
{
	mileage += milesTravelled;
	float fuelUsed = milesTravelled / mPG;
	fuelQuantity -= fuelUsed;
}
