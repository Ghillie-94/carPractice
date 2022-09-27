#include "car.h"
#include <iostream>

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
