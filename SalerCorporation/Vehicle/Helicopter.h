#pragma once
#include "Air_vehicle.h"
class Helicopter:public Air_vehicle
{
	int z;
public:
	int getZ() { return z; }
	void setZ(int z);
	Helicopter(std::string color, std::string model, int max_speed, int number_of_seats, int cost, int altitude, int z);
	void info() const;
	std::string codeInfo() const override;
};

