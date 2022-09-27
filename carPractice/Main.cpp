#include <iostream>
#include <string>
#include "car.h"


/*void Print(Car toPrint)
{
	std::cout << "Car info:" << std::endl;
	std::cout << "Make: " << toPrint.make << std::endl;
	std::cout << "Model: " << toPrint.model << std::endl;
	std::cout << "Doors: " << toPrint.doors << std::endl;
	std::cout << "Mileage: " << toPrint.mileage << std::endl;
	std::cout << "MPG: " << toPrint.mPG << std::endl;
	std::cout << "Quantity of fuel: " << toPrint.fuelQuantity << std::endl;
}*/

int main()
{
	Car car1;

	car1.make = "Mercedes Benz";
	car1.model = "C63 AMG";
	car1.doors = 5;
	car1.mileage = 15000;
	car1.mPG = 30;
	car1.fuelQuantity = .75f;


	Car car2;

	car2.make = "Kia";
	car2.model = "Ceed";
	car2.doors = 5;
	car2.mileage = 68000;
	car2.mPG = 55;
	car2.fuelQuantity = 1.0f;

	Car car3;

	car3.make = "Volkswagen";
	car3.model = "Golf GTI";
	car3.doors = 3;
	car3.mileage = 120000;
	car3.mPG = 32;
	car3.fuelQuantity = .90f;


	car1.Print();
	car2.Print();
	car3.Print();
}