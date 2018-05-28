#include "Human.h"



void Human::setGrowth(int growth)
{
	this->growth = growth;
}

void Human::setHairColor(std::string hairColor)
{
	this->hairColor = hairColor;
}

void Human::info()
{
	Mammals::info();
	std::cout << "Hair color: " << hairColor << "\nGrowth: " << growth << std::endl;
}

Human::Human(std::string color, std::string name, bool hasSkull, bool hasTail, int countOfIntestines, int countOfMammaryGland, bool carnivore, std::string hairColor, int growth):Mammals(color, name, hasSkull, hasTail, countOfIntestines, countOfMammaryGland, carnivore)
{
	this->hairColor = hairColor;
	this->growth = growth;
}
