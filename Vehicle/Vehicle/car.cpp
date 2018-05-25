#include "car.h"



car::car(std::string color, std::string model, int max_speed, int number_of_seats, int engine_power, int number_of_wheels):Ground_Vehicle(color, model, max_speed, number_of_seats,engine_power)
{
	this->number_of_wheels = number_of_wheels;
}

void car::setNumberOfWheels(int number_of_wheels)
{
	this->number_of_wheels = number_of_wheels;
}

void car::info() const
{
	Ground_Vehicle::info();
	std::cout << "number_of_wheels" << number_of_wheels <<
		std:: endl;
}


