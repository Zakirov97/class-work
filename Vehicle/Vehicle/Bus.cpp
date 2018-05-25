#include "Bus.h"

Bus::Bus(std::string color, std::string model, int max_speed, int number_of_seats, int engine_power, int x) :Ground_Vehicle(color, model, max_speed, number_of_seats, engine_power)
{
	this->x = x;
}

void Bus::info()
{
	Ground_Vehicle::info();
	std::cout << "X: " << x << std::endl;
}

void Bus::setX(int x)
{
	this->x = x;
}
