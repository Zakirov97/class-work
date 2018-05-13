#include "Filee.h"



Filee::Filee()
{
}

Filee::Filee(string fileName, int sizeFile, int dataCreated, int countOfAppeals)
{
	this->fileName = fileName;
	this->sizeFile = sizeFile;
	this->dataCreated = dataCreated;
	this->countOfAppeals = countOfAppeals;
}


Filee::~Filee()
{
}
