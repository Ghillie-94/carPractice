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
	Car car1("Mercedes benz", "C63 AMG", "1234",5, 30, 15000, 50.0);

	Car car2("Kia", "Ceed", "5678", 5, 55, 68000, 100.0);

	Car car3("Volkswagen", "Golf GTI","9999", 3, 32, 120000, 15.0);


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

	carPark1.Exit();

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