#include "ParkingSpace.h"
#include <iostream>

ParkingSpace::ParkingSpace()
	: parkedCar()
	, isParked(false)
{
	
}

ParkingSpace::ParkingSpace(Car newParkedCar, bool newIsParked)
	: parkedCar(newParkedCar)
	, isParked(newIsParked)
{
}

void ParkingSpace::Park(Car newParkedCar)
{
	parkedCar = newParkedCar;
	isParked = true;
}

void ParkingSpace::Exit()
{
	isParked = false;
}

void ParkingSpace::Print()
{
	if (isParked) 
	{
		std::cout << "There is a vehicle parked in this space." << std::endl;
		std::cout << "The vehicle parked in this space is " << parkedCar.GetMake() << " " << parkedCar.GetModel() << "." << std::endl;
	}
	else 
	{
		std::cout << "The parking space is empty." << std::endl;
	}
}
