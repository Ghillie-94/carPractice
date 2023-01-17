#include "Vehicle.h"

Vehicle::Vehicle()
	: make("")
	, model("")
	, serialNum("")
	, doors(0)
	, mileage(0)
	, mPG(0)
	, fuelQuantity(0)
{
}

Vehicle::~Vehicle()
{
}

void Vehicle::doCarLookup(std::string serial, Car car)
{
}

Car Vehicle::getCarLookup(std::string serial)
{
	return carLookup[serial];
}

void Vehicle::Print()
{
	std::cout << "Car info:" << std::endl;
	std::cout << "Make: " << make << std::endl;
	std::cout << "Model: " << model << std::endl;
	std::cout << "Doors: " << doors << std::endl;
	std::cout << "Mileage: " << mileage << std::endl;
	std::cout << "MPG: " << mPG << std::endl;
	std::cout << "Quantity of fuel: " << fuelQuantity << std::endl;
	std::cout << "Serial Number: " << serialNum << std::endl;
}

void Vehicle::Drive(float milesTravelled)
{
	mileage += milesTravelled;
	float fuelUsed = milesTravelled / mPG;
	fuelQuantity -= fuelUsed;
}

std::string Vehicle::GetMake()
{
	return make;
}

std::string Vehicle::GetModel()
{
	return model;
}

std::string Vehicle::GetSerialNum()
{
	return serialNum;
}

int Vehicle::GetDoors()
{
	return doors;
}

float Vehicle::GetMPG()
{
	return mPG;
}

float Vehicle::GetMileage()
{
	return mileage;
}

float Vehicle::GetFuelQuantity()
{
	return fuelQuantity;
}


