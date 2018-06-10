#include "Water_vehicle.h"



void Water_Vehicle::setY(int y)
{
	this->y = y;
}

Water_Vehicle::Water_Vehicle(std::string color, std::string model, int max_speed, int number_of_seats,int cost, int y):Vehicle(color, model, max_speed, number_of_seats, cost)
{
	this->y = y;
}

std::string Water_Vehicle::codeInfo() const
{
	std::string str = Vehicle::codeInfo();
	str += std::to_string(y) += ";";
	return str;
}

void Water_Vehicle::info() const
{
	Vehicle::info();
	std::cout << "Y: " << y << std::endl;
}

