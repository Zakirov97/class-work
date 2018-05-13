#include "Time.h"


void Time::setH(int _h)
{
	if (_h > 23 || _h < 0)
	{
		this->h = 0;
	}
	else
	{
		this->h = _h;
	}
}

void Time::setM(int _m)
{
	if (_m > 59 || _m < 0)
	{
		this->m = 0;
	}
	else
	{
		this->m = _m;
	}
}

void Time::setS(int _s)
{
	if (_s > 59 || _s < 0)
	{
		this->s = 0;
	}
	else
	{
		this->s = _s;
	}
}

void Time::addHour(int h)
{
	int h1 = this->h += h;
	h1 = h1 - (h1 % 24)*24;//////////////////
	//int h1 = this->h + h;
	this->h = h1 % 24;
}

void Time::addMin(int m)
{
	int m1 = this->m + m;
	this->m = m1 % 60;
	m1 /= 60;
	addHour(m1);
}

void Time::addSec(int s)
{
	int s1 = this->s + s;
	this->s = s1 % 60;
	s1 /= 60;
	addMin(s1);
}

void Time::printTime() const
{
	if (this->h < 10)
	{
		std::cout << '0';
	}
	std::cout << h << ' ';
	if (this->m < 10)
	{
		std::cout << '0';
	}
	std::cout << m << ' ';
	if (this->s < 10)
	{
		std::cout << '0';
	}
	std::cout << s << std::endl;
}

const Time & Time::operator++()
{
	this->addSec(1);
	return *this;
}

Time::Time(int h, int m, int s)
{
	this->setH(h);
	this->setM(m);
	this->setS(s);
}

const Time & Time::operator++(int)
{
	Time tmp(*this);
	this->addSec(1);
	return tmp;
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


Time::~Time()
{
}

std::ostream & operator<<(std::ostream & out, const Time & a)
{
	a.printTime();
	return out;
}
std::istream & operator >> (std::istream & in, Time & a)
{
	int h, m, s;
	std::cout << "Vvedite chasi " << std::endl;
	in >> h;
	std::cout << "Vvedite minutu " << std::endl;
	in >> m;
	std::cout << "Vvedite secundi " << std::endl;
	in >> s;
	a.setH(h);
	a.setM(m);
	a.setS(s);
	return in;
}
