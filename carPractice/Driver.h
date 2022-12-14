#pragma once
#include <string>
#include<iostream>

class Car;

class Driver
{
public:

	Driver();

	void Print();

private:
	std::string driverName;

	Car* car;
};

