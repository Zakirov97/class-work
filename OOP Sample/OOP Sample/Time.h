#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
class Time
{
private:
	int h;
	int m;
	int s;
public:
	void setH(int _h);
	void setM(int _m);
	void setS(int _s);
	int getH();
	int getM();
	int getS();
	void print();
	void addHour();
	void addMinute();
	void addSecond();

	Time(int _h, int _m, int _s);
	~Time();
};


