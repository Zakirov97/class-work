#pragma once
#include <string>
#include "Chordata.h"
class tetrapoda:public Chordata
{
	bool hasTail = true;

public:
	void setTail(bool hasTail);
	bool getTail()const;
	void info()const;
	tetrapoda(std::string eyesColor, std::string name, bool hasSkull, bool hasTail);
};

