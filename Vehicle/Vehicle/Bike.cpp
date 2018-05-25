#include "Bike.h"

Bike::Bike(std::string color, std::string model, int max_speed, int number_of_seats, int engine_power, int numberOfWheels) :Ground_Vehicle(color, model, max_speed, number_of_seats, engine_power)
{
	this->numberOfWheels = numberOfWheels;
}

void Bike::setNumberOfWheels(int numberOfWheels)
{
	this->numberOfWheels = numberOfWheels;
}

void Bike::info()
{
	Ground_Vehicle::info();
	std::cout << "Number of wheels: " << numberOfWheels << std::endl;
}
