#pragma once
#include "Vehicle.h"
class Air_vehicle :
	public Vehicle
{
	int altitude;	
public:
	Air_vehicle(std::string color, std::string model, int max_speed, int number_of_seats, int altitude);
	int getAltitude() const { return altitude; }
	void setAltitude(int altitude);
	void info()const;
};

