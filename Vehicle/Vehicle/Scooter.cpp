#include "Scooter.h"



void Scooter::setManeuverability(int maneuverability)
{
	this->maneuverability = maneuverability;
}

Scooter::Scooter(std::string color, std::string model, int max_speed, int number_of_seats, int y, int maneuverability) :Water_Vehicle(color, model, max_speed, number_of_seats, y)
{
	this->maneuverability = maneuverability;
}

void Scooter::info()
{
	Water_Vehicle::info();
	std::cout << "Maneuverability: " << maneuverability << std::endl;
}

