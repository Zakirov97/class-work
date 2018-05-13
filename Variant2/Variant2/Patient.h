#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Patient
{
	string surName, firstName, patronymic, address, diagnosis;
	int numbMedCard;
public:
	string getDiagnosis() { return diagnosis; };
	string getFirstName() { return firstName; };
	bool wDiagnosis(string s);
	bool search(int d1, int d2);
	Patient(string surName, string firstName, string patronymic, string Address, string diagnosis, int numbMedCard);
	Patient();
	~Patient();
};