#include "Bike.h"

Bike::Bike(std::string color, std::string model, int max_speed, int number_of_seats, int cost, int engine_power, int numberOfWheels) :Ground_Vehicle(color, model, max_speed, number_of_seats ,cost, engine_power)
{
	this->numberOfWheels = numberOfWheels;
}

void Bike::setNumberOfWheels(int numberOfWheels)
{
	this->numberOfWheels = numberOfWheels;
}

std::string Bike::codeInfo() const
{
	std::string str = "Bike;";
	str += Ground_Vehicle::codeInfo();
	str += std::to_string(numberOfWheels) += ";";
	return str;
}

void Bike::info() const
{
	Ground_Vehicle::info();
	std::cout << "Number of wheels: " << numberOfWheels << std::endl;
}
