#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class Time
{
private:
	int h, m, s;
public:
	static Time& getTime();
	Time (const Time&) = delete;
	Time& operator=(const Time&) = delete;
	void setH(int h);
	void setM(int m);
	void setS(int s);

	void PrintTime() const;

	void addHour(int h = 0);
	void addMin(int m = 0);
	void addSec(int s = 0);
	void redHour(int h = 0);
	void redMin(int m = 0);
	void redSec(int s = 0);

	const bool&operator==(const Time&a);
	const Time&operator++();
	const Time&operator++(int);
	const Time&operator+=(const Time &a);
	const Time&operator-=(const Time &a);
	const Time&operator--();
	const Time&operator--(int);
	const bool&operator!=(const Time&a);
	const bool&operator>(const Time&a);
	const bool&operator<(const Time&a);
	const bool&operator>=(const Time&a);
	const bool&operator<=(const Time&a);


	Time(int h = 0, int m = 0, int s = 0);
	~Time();
};

ostream &operator<<(ostream &out, const Time &a);
istream &operator >> (istream &in, Time &a);


