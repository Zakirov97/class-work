#pragma once
#include <iostream>
class Time
{
	int h, m, s;
public:
	void setH(int _h);
	void setM(int _m);
	void setS(int _s);
	void addHour(int h = 0);
	void addMin(int m = 0);
	void addSec(int s = 0);
	void printTime() const;

	const Time&operator++();
	const Time&operator++(int);

	int getH();
	int getM();
	int getS();
	Time(int h = 0, int m = 0, int s = 0);
	~Time();
};

std::ostream &operator<<(std::ostream &out, const Time &a);
std::istream &operator >> (std::istream & in, Time &a);

