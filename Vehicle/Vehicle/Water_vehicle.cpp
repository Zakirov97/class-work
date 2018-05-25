#include "Water_vehicle.h"



void Water_Vehicle::setY(int y)
{
	this->y = y;
}

Water_Vehicle::Water_Vehicle(std::string color, std::string model, int max_speed, int number_of_seats, int y):Vehicle(color, model, max_speed, number_of_seats)
{
	this->y = y;
}

void Water_Vehicle::info()
{
	Vehicle::info();
	std::cout << "Y: " << y << std::endl;
}

