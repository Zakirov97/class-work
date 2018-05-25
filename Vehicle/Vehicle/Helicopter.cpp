#include "Helicopter.h"



void Helicopter::setZ(int z)
{
	this->z = z;
}

Helicopter::Helicopter(std::string color, std::string model, int max_speed, int number_of_seats, int altitude, int z) :Air_vehicle(color, model, max_speed, number_of_seats, altitude)
{
	this->z = z;
}

void Helicopter::info()
{
	Air_vehicle::info();
	std::cout << "Z: " << z << std::endl;
}
