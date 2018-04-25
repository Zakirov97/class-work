#include "Student.h" 


void Student::setFName(const char * _fName)
{
	fName = new char[strlen(_fName)];
	strcpy(fName, _fName);
}

void Student::setSName(std::string s)
{
	sName = s;
}

void Student::setMark(int m)
{
	mark = m;
}

char * Student::getFName()
{
	return fName;
}

std::string Student::getSName()
{
	return sName;
}

int Student::getMark()
{
	return mark;
}

void Student::printInfo()
{
	std::cout << "fName	" << fName << std::endl;
	std::cout << "sName " << sName << std::endl;
	std::cout << "mark " << mark << std::endl;
}

Student::Student()
{
}


Student::~Student()
{
}