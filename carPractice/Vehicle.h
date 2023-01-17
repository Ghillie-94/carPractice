#pragma once
#include <string>
#include <map>
#include "car.h"
#include <iostream>

class Vehicle
{
public:
	Vehicle();
	~Vehicle();
	void doCarLookup(std::string serial, Car car);
	Car getCarLookup(std::string serial);
	void Print();
	void Drive(float milesTravelled);
	std::string GetMake();
	std::string GetModel();
	std::string GetSerialNum();
	int GetDoors();
	float GetMPG();
	float GetMileage();
	float GetFuelQuantity();


private:
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
};

