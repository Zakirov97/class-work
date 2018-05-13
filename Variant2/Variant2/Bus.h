#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Bus
{
	string firstName, surName, mark;
	int numBus, numRoute, yearOperation, mileage;
public:
	int getNumRoute() { return numRoute; };
	int getNumBus() { return numBus; };
	bool yearOfOperated();
	bool searchBus(int numRoute);
	bool mileAge();

	Bus();
	Bus(string surName, string firstName, int numBus, int numRoute, string mark, int yearOpearation, int mileage);
	~Bus();
};

