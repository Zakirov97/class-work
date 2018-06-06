#pragma once
#include "employee.h"
class admin :
	public employee
{
	int cntPC;
public:
	admin(string name = "Vasya", date_ bdate = date_(10, 10, 1997), bool gender = 1, int exp = 0,int cntPC = 5);
	void setCntPC(int cntPC);
	int getCntPC()const;
	double getCoef()const override;
	void info()const override;
};

