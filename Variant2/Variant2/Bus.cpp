#include "Bus.h"



bool Bus::yearOfOperated()
{
	return (2018 - yearOperation > 10);
}

bool Bus::searchBus(int numRoute)
{
	return (this->numRoute == numRoute);
}

bool Bus::mileAge()
{
	return (mileage > 10000);
}

Bus::Bus()
{
}

Bus::Bus(string surName, string firstName, int numBus, int numRoute, string mark, int yearOpearation, int mileage)
{
	this->surName = surName;
	this->firstName = firstName;
	this->numBus = numBus;
	this->numRoute = numRoute;
	this->mark = mark;
	this->yearOperation = yearOpearation;
	this->mileage = mileage;
}


Bus::~Bus()
{
}
