#pragma once

#include <string>
#include "car.h"


class ParkingSpace
{
public:
	ParkingSpace();
	ParkingSpace(Car newParkedCar, bool newIsParked);
	void Park(Car newParkedCar);
	void Exit();
	void Print();



	Car parkedCar;
	bool isParked;

};

