#pragma once
#include "Vehicle.h"
class Water_Vehicle :public Vehicle
{
	int y;
public:
	int gety() { return y; };
	void setY(int y);
	Water_Vehicle(std::string color, std::string model, int max_speed, int number_of_seats, int cost, int y);
	void info()const;
	std::string codeInfo()const override;
};
