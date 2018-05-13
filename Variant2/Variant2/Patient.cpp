#include "Patient.h"



Patient::Patient()
{
}

bool Patient::wDiagnosis(string s)
{
	return (diagnosis == s);
}

bool Patient::search(int d1, int d2)
{
	return (d1 < numbMedCard && numbMedCard < d2);
}

Patient::Patient(string surName, string firstName, string patronymic, string Address, string diagnosis, int numbMedCard)
{
	this->surName = surName;
	this->firstName = firstName;
	this->patronymic = patronymic;
	this->address = Address;
	this->diagnosis = diagnosis;
	this->numbMedCard = numbMedCard;
}

Patient::~Patient()
{
}
