#pragma once
#include <iostream>
#include <string>
class Student
{
	char *fName;
	std::string sName;
	int mark;
public:
	void setFName(const char * _fName);
	void setSName(std::string s);
	void setMark(int m);
	char *getFName();
	std::string getSName();
	int getMark();
	void printInfo();
	Student();
	~Student();
};

