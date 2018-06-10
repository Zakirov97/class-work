#include "Boat.h"



void Boat::setMastHeight(int mastHeight)
{
	this->mastHeight = mastHeight;
}

Boat::Boat(std::string color, std::string model, int max_speed, int number_of_seats,int cost, int y, int mastHeight) :Water_Vehicle(color, model, max_speed, number_of_seats,cost, y)
{
	this->mastHeight = mastHeight;
}

std::string Boat::codeInfo() const
{
	std::string str = "Boat;";
	str += Water_Vehicle::codeInfo();
	str += std::to_string(mastHeight) += ";";
	return str;
}

void Boat::info() const
{
	Water_Vehicle::info();
	std::cout << "Mast height" << mastHeight << std::endl;
}

