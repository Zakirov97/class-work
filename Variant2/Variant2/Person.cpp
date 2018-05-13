#include "Person.h"



void Person::pPerson()
{
	cout << "Surname: " << surname << endl;
	cout << "Name: " << name << endl;
	cout << "Patronymic: " << patronymic << endl;
}

Person::Person(string surname, string name, string patronymic, string address, bool gender, int birthday, int education)
{
	this->surname = surname;
	this->name = name;
	this->patronymic = patronymic;
	this->address = address;
	this->gender = gender;
	this->birthday = birthday;
	this->education = education;
}

Person::Person()
{
}


Person::~Person()
{
}
