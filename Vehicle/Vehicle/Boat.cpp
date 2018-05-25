#include "Boat.h"



void Boat::setMastHeight(int mastHeight)
{
	this->mastHeight = mastHeight;
}

Boat::Boat(std::string color, std::string model, int max_speed, int number_of_seats, int y, int mastHeight) :Water_Vehicle(color, model, max_speed, number_of_seats, y)
{
	this->mastHeight = mastHeight;
}

void Boat::info()
{
	Water_Vehicle::info();
	std::cout << "Mast height" << mastHeight << std::endl;
}

