#pragma once
#include "String_.h"
#include "VectorMy.h"
#include <vector>
class Patient
{
public:
	String_ name;
	String_ fName;
	String_ oName;
	String_ Adres;
	String_ diagnoz;
	int medCard;

	String_ getDiagnoz();
	String_ getName() { return name; };
	Patient();
	Patient(String_ name, String_ fName, String_ oName, String_ Adres, String_ diagnoz, int medCard);
	~Patient();

};


