#pragma once
#include "Ground Vehicle.h"
class car :
	public Ground_Vehicle
{
	int number_of_wheels;
public:
	car(std::string color, std::string model, int max_speed, int number_of_seats, int engine_power, int number_of_wheels);
	void setNumberOfWheels(int number_of_wheels);
	int getNumberOfWheels()const { return number_of_wheels; }
	void info()const;
};

