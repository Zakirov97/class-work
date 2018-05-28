#pragma once
#include "Chordata.h"
class Fish :
	public Chordata
{
	int depthOfHabitat;
public:
	int getDepthOfHabitat()const { return depthOfHabitat; }

	void setDepthOfHabitat(int depthOfHabitat);

	void info()const;
	Fish(std::string eyesColor, std::string name, bool hasSkull, int depthOfHabitat);
};

