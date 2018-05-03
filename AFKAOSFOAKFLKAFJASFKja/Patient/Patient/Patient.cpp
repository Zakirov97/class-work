#include "Patient.h"




String_ Patient::getDiagnoz()
{
	return diagnoz;
}

Patient::Patient()
{
}

Patient::Patient(String_ name, String_ fName, String_ oName, String_ Adres, String_ diagnoz, int medCard)
{
	this->name = name;
	this->fName = fName;
	this->oName = oName;
	this->Adres = Adres;
	this->diagnoz = diagnoz;
	this->medCard = medCard;
}

Patient::~Patient()
{
}

