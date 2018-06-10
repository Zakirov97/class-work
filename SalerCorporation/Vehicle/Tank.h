#pragma once
#include "Ground Vehicle.h"
class Tank : public Ground_Vehicle
{
	int damage;
public:
	int getDamage()const { return damage; }
	void setDamage(int damage);
	void info()const;
	Tank(std::string model, int max_speed, int number_of_seats, int cost, int engine_power);
	std::string codeInfo()const override;
};

