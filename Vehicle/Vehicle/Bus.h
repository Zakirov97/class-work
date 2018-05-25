#pragma once
#include "Ground Vehicle.h"
class Bus: public Ground_Vehicle
{
	int x;
public:
	int getX() { return x; };
	void setX(int x);
	Bus(std::string color, std::string model, int max_speed, int number_of_seats, int engine_power, int number_of_wheels);
	void info();
};

