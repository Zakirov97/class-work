#include "Plane.h"



void Plane::setMaximumHeight(int maximumHeight)
{
	this->maximumHeight = maximumHeight;
}

Plane::Plane(std::string color, std::string model, int max_speed, int number_of_seats, int cost, int altitude, int maximumHeight) :Air_vehicle(color, model, max_speed, number_of_seats, cost, altitude)
{
	this->maximumHeight = maximumHeight;
}

void Plane::info()const
{
	Air_vehicle::info();
	std::cout << "Maximum height" << maximumHeight << std::endl;
}

std::string Plane::codeInfo() const
{
	std::string str = "Plane;";
	str += Air_vehicle::codeInfo();
	str += std::to_string(maximumHeight) += ";";
	return str;
}

