#pragma once
#include "Ground Vehicle.h"
class Bike: public Ground_Vehicle
{
	int numberOfWheels;
public:
	Bike(std::string color, std::string model, int max_speed, int number_of_seats, int engine_power, int numberOfWheels);
	int getNumberOfWheels()const { return numberOfWheels; };
	void setNumberOfWheels(int numberOfWheels);
	void info();
};

