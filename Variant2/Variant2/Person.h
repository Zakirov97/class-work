#pragma once
#include <string>
#include <iostream>
using namespace std;
class Person
{
	string surname, name, patronymic, address;
	bool gender;
	int birthday, education;
public:
	int getBirthday() { return birthday; };
	int getEducation() { return education; };
	bool getGender() { return gender; };
	void pPerson();
	Person(string surname, string name, string patronymic, string address, bool gender, int birthday, int education);
	Person();
	~Person();
};

