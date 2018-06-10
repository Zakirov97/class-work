#include "Tank.h"



void Tank::setDamage(int damage)
{
	this->damage = damage;
}

void Tank::info() const
{
	std::cout << "Model: " << getModel() << "\nNumber of seats: " << getNumberOfSeats() << "\nMaximal speed: " << getMaxSpeed() << "\nEngine power: " << getEnginePower() << "\nCost: " << getCost() << std::endl;
	std::cout <<"Damage: "<< damage << std::endl;
}

Tank::Tank(std::string model, int max_speed, int number_of_seats, int cost, int engine_power) :Ground_Vehicle("green",model, max_speed, number_of_seats, cost, engine_power)
{
	this->damage = 100;
}

std::string Tank::codeInfo() const
{
	std::string str = Ground_Vehicle::codeInfo();
	str += std::to_string(damage) += ";";
	return str;
}

