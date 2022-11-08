#pragma once

#include <string>
#include "car.h"


class ParkingSpace
{
public:
	ParkingSpace();
	ParkingSpace(Car newParkedCar, bool newIsParked);

	Car parkedCar;
	bool isParked;

	void Park(Car newParkedCar);
	void Exit();
	void Print();


};

