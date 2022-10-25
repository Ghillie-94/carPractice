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

void ParkingSpace::Park(Car)
{
	isParked = true;
}

void ParkingSpace::Exit()
{
}

void ParkingSpace::Print()
{
	if (isParked) 
	{
		std::cout << "There is a vehicle parked in this space." << std::endl;
		std::cout << "The vehicle parked in this space is " << parkedCar << std::endl;
	}
}
