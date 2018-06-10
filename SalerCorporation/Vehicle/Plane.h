#pragma once
#include "Air_vehicle.h"
class Plane: public Air_vehicle
{
	int maximumHeight;
public:
	int getMaximumHeight() { return maximumHeight; }
	void setMaximumHeight(int maximumHeight);
	Plane(std::string color, std::string model, int max_speed, int number_of_seats, int cost, int altitude, int maximumHeight);
	void info()const;
	std::string codeInfo() const override;
};

