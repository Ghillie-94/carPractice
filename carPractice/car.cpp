#include "car.h"
#include <iostream>


Car::Car()
	: Vehicle()
{
	std::cout << "Car constructed!" << std::endl;
}

Car::Car(std::string newMake, std::string newModel, std::string newSerialNum, int newDoors, float newMPG, float newMileage, float newFuelQuantity)
	
{
	std::cout << "car constructed using parameters!" << std::endl;
}

Car::~Car()
{
	std::cout << "Car Destroyed! " << std::endl;
}




