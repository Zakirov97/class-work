#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Filee
{
	string fileName;
	int sizeFile, dataCreated, countOfAppeals;
public:
	string getFileName() { return fileName; };
	Filee();
	Filee(string fileName, int sizeFile, int dataCreated, int countOfAppeals);
	~Filee();
};

