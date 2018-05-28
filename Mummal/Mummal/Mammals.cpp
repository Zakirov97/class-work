#include "Mammals.h"


void Mammals::setCountOfIntestines(int countOfIntestines)
{
	this->countOfIntestines = countOfIntestines;
}

void Mammals::setCountOfMammaryGland(int countOfMammaryGland)
{
	this->countOfMammaryGland = countOfMammaryGland;
}

void Mammals::setCarnivore(bool carnivore)
{
	this->carnivore = carnivore;
}

void Mammals::info()const
{
	tetrapoda::info();
	std::cout << "Count of intestines: " << countOfIntestines << "\nCount of mammary gland: " << countOfMammaryGland << "\n" << "Carnivore " << carnivore << std::endl;
}

Mammals::Mammals(std::string eyesColor, std::string name, bool hasSkull, bool hasTail, int countOfIntestines, int countOfMammaryGland, bool carnivore) :tetrapoda(eyesColor, name, hasSkull, hasTail)
{
	this->countOfIntestines = countOfIntestines;
	this->countOfMammaryGland = countOfMammaryGland;
	this->carnivore = carnivore;
}
