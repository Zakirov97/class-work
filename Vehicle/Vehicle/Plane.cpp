#include "Plane.h"



void Plane::setMaximumHeight(int maximumHeight)
{
	this->maximumHeight = maximumHeight;
}

Plane::Plane(std::string color, std::string model, int max_speed, int number_of_seats, int altitude, int maximumHeight) :Air_vehicle(color, model, max_speed, number_of_seats,altitude)
{
	this->maximumHeight = maximumHeight;
}

void Plane::info()
{
	Air_vehicle::info();
	std::cout << "Maximum height" << maximumHeight << std::endl;
}

