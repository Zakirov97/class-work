#include "Time.h"




void Time::setH(int _h)
{
	if (_h >= 24 && _h < 0)
		_h = 0;
	else
	{
		h = _h;
	}
}

void Time::setM(int _m)
{
	if (_m >= 24 && _m < 0)
		_m = 0;
	else
	{
		m = _m;
	}
}

void Time::setS(int _s)
{
	if (_s >= 24 && _s < 0)
		_s = 0;
	else
	{
		s = _s;
	}
}

int Time::getH()
{
	return h;
}

int Time::getM()
{
	return m;
}

int Time::getS()
{
	return s;
}

void Time::print()
{
	if (h < 10)
	{
		std::cout << '0';
	}
	std::cout << h << ':';
	if (m < 10)
	{
		std::cout << '0';
	}
	std::cout << m << ':';
	if (s < 10)
	{
		std::cout << '0';
	}
	std::cout << s << std::endl;
}

void Time::addHour()
{
	h++;
	if (h == 24)
	{
		h = 0;
	}
}

void Time::addMinute()
{
	m++;
	if (m == 60)
	{
		m = 0;
		addHour();
	}
}

void Time::addSecond()
{
	s++;
	if (s == 60)
	{
		s = 0;
		addMinute();
	}
}


Time::Time(int _h, int _m, int _s)
{
	setH(_h);
	setM(_m);
	setS(_s);
}


Time::~Time()
{
}
