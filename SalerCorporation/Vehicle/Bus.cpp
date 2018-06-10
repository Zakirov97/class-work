#include "Bus.h"

Bus::Bus(std::string color, std::string model, int max_speed, int number_of_seats,int cost, int engine_power, int x) :Ground_Vehicle(color, model, max_speed, number_of_seats,cost, engine_power)
{
	this->x = x;
}

std::string Bus::codeInfo() const
{
	std::string str = "Bus;";
	str += Ground_Vehicle::codeInfo();
	str += std::to_string(x) += ";";
	return str;
}

void Bus::info() const
{
	Ground_Vehicle::info();
	std::cout << "X: " << x << std::endl;
}

void Bus::setX(int x)
{
	this->x = x;
}
