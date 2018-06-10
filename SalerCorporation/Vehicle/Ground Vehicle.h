#pragma once
#include "Vehicle.h"

class Ground_Vehicle :
	public Vehicle
{
	int engine_power;

public:
	Ground_Vehicle(std::string color, std::string model, int max_speed, int number_of_seats, int cost, int engine_power);

	void setEnginePower(int engine_power);
	int getEnginePower() const { return engine_power; }
	void info()const;
	std::string codeInfo() const override;
	void start() {};	
};

