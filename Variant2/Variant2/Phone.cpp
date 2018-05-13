#include "Phone.h"



void Phone::info()
{
	cout << "Surname: " << surname << endl;
	cout << "Name: " << name << endl;
	cout << "Patronymic: " << patronymic << endl;
	cout << "Address: " << address << endl;
	cout << "Phone: " << phone << endl;
	cout << "In city: " << inCityCall << endl;
	cout << "Out city: " << outCityCall << endl;
}

Phone::Phone(string surname, string name, string patronymic, string address, int phone, int inCityCall, int outCityCall)
{
	this->surname = surname;
	this->name = name;
	this->patronymic = patronymic;
	this->address = address;
	this->phone = phone;
	this->inCityCall = inCityCall;
	this->outCityCall = outCityCall;
}

Phone::Phone()
{
}


Phone::~Phone()
{
}
