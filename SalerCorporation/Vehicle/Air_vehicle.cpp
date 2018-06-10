#include "Air_vehicle.h"

Air_vehicle::Air_vehicle(std::string color, std::string model, int max_speed, int number_of_seats,int cost, int altitude):Vehicle(color, model, max_speed, number_of_seats, cost)
{
	this->altitude = altitude;
}

void Air_vehicle::setAltitude(int altitude)
{
	this->altitude = altitude;
}

void Air_vehicle::info() const
{
	Vehicle::info();
	std::cout << "Altitude: " << altitude << std::endl;
}

std::string Air_vehicle::codeInfo() const
{
	std::string str = Vehicle::codeInfo();
	str += std::to_string(altitude) += ";";
	return str;
}
