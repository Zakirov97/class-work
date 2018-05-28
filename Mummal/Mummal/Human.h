#pragma once
#include "Mammals.h"
class Human :
	public Mammals
{
	std::string hairColor;
	int growth;
public:
	int getGrowth()const { return growth; }
	std::string getHairColor()const { return hairColor; }

	void setGrowth(int growth);
	void setHairColor(std::string hairColor);

	void info();

	Human(std::string color, std::string name, bool hasSkull, bool hasTail, int countOfIntestines, int countOfMammaryGland, bool carnivore, std::string hairColor, int growth);
};

