#pragma once
#include "Water_vehicle.h"
class Boat:public Water_Vehicle
{
	int mastHeight;
public:
	int getMastHeight() { return mastHeight; }
	void setMastHeight(int mastHeight);
	Boat(std::string color, std::string model, int max_speed, int number_of_seats, int y, int mastHeight);
	void info();
};

