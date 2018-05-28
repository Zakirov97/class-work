#pragma once
#include "tetrapoda.h"
class Mammals :
	public tetrapoda
{
	int countOfIntestines;//количество желудков
	int countOfMammaryGland;//количество молочных желез
	bool carnivore;//Плотоядное юивотное
public:
	int getOfIntestines()const { return countOfIntestines; }
	int getOfMammaryGland()const { return countOfMammaryGland; }
	bool getCarnivore()const { return carnivore; }

	void setCountOfIntestines(int countOfIntestines);
	void setCountOfMammaryGland(int countOfMammaryGland);
	void setCarnivore(bool carnivore);

	void info()const;

	Mammals(std::string eyesColor, std::string name, bool hasSkull, bool hasTail, int countOfIntestines,int countOfMammaryGland, bool carnivore);
};

