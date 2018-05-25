#pragma once
#include "Water_vehicle.h"
class Scooter :public Water_Vehicle
{
	int maneuverability;
public:
	int getManeuverability() { return maneuverability; }
	void setManeuverability(int maneuverability);
	Scooter(std::string color, std::string model, int max_speed, int number_of_seats, int y, int maneuverability);
	void info();
};

