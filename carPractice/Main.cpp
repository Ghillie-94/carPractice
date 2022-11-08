#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "car.h"
#include "ParkingSpace.h"


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
	car1.fuelQuantity = 50.0f;
	car1.serialNum = "1234";


	Car car2;

	car2.make = "Kia";
	car2.model = "Ceed";
	car2.doors = 5;
	car2.mileage = 68000;
	car2.mPG = 55;
	car2.fuelQuantity = 100.0f;
	car2.serialNum = "5678";

	Car car3;

	car3.make = "Volkswagen";
	car3.model = "Golf GTI";
	car3.doors = 3;
	car3.mileage = 120000;
	car3.mPG = 32;
	car3.fuelQuantity = 15.0f;
	car3.serialNum = "9999";

	Car car4;

	std::vector<Car> carVector;
	carVector.push_back(car1);
	carVector.push_back(car2);
	carVector.push_back(car3);

	ParkingSpace carPark1;

	

	std::map<std::string, Car> carMap;
	carMap["1234"] = car1;
	carMap["5678"] = car2;
	carMap["9999"] = car3;

	/*std::cout << "Please enter the serial number of the vehicle you are looking for: " << std::endl;

	std::string userInput;
	std::cin >> userInput;

	carMap[userInput].Print(); */

	carPark1.Park(car1);

	carPark1.Print();

	



	/*car1.Print();
	car2.Print();
	car3.Print();
	car1.Drive(10);
	car1.Print();
	car4.Print();*/

	/*for (int i = 0; i < carVector.size(); ++i)
	{
		carVector[i].Print();
	}*/
}