#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Phone
{
	string surname, name, patronymic, address;
	int phone, inCityCall, outCityCall;
public:
	void info();
	int getInCityCall() { return inCityCall; };
	int getOutCityCall() { return outCityCall; };
	Phone(string surname, string name, string patronymic, string address, int phone, int inCityCall, int outCityCall);
	Phone();
	~Phone();
};

