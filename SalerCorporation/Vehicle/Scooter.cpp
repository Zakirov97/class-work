#include "Scooter.h"



void Scooter::setManeuverability(int maneuverability)
{
	this->maneuverability = maneuverability;
}

Scooter::Scooter(std::string color, std::string model, int max_speed, int number_of_seats, int cost, int y, int maneuverability) :Water_Vehicle(color, model, max_speed, number_of_seats, cost, y)
{ 
	this->maneuverability = maneuverability;
}

void Scooter::info() const
{
	Water_Vehicle::info();
	std::cout << "Maneuverability: " << maneuverability << std::endl;
}

std::string Scooter::codeInfo() const
{
	std::string str = "Scooter;";
	str += Water_Vehicle::codeInfo();
	str += std::to_string(maneuverability) += ";";
	return str;
}

