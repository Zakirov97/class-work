#include "Fish.h"



void Fish::setDepthOfHabitat(int depthOfHabitat)
{
	this->depthOfHabitat = depthOfHabitat;
}

void Fish::info()const
{
	Chordata::info();
	std::cout << "Depth of habitat: " << depthOfHabitat << std::endl;
}

Fish::Fish(std::string eyesColor, std::string name, bool hasSkull, int depthOfHabitat):Chordata(eyesColor,name,hasSkull)
{
	this->depthOfHabitat = depthOfHabitat;
}
