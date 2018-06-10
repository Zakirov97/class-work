#include "Helicopter.h"



void Helicopter::setZ(int z)
{
	this->z = z;
}

Helicopter::Helicopter(std::string color, std::string model, int max_speed, int number_of_seats, int cost, int altitude, int z) :Air_vehicle(color, model, max_speed, number_of_seats,cost, altitude)
{
	this->z = z;
}

std::string Helicopter::codeInfo() const
{
	std::string str = "Helicopter;";
	str += Air_vehicle::codeInfo();
	str += std::to_string(z) += ";";
	return str;
}

void Helicopter::info() const
{
	Air_vehicle::info();
	std::cout << "Z: " << z << std::endl;
}
