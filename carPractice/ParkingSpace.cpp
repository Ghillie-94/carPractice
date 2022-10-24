#include "ParkingSpace.h"

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
}

void ParkingSpace::Exit()
{
}

void ParkingSpace::Print()
{
}
