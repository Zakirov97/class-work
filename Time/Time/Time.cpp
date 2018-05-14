#include "Time.h"

Time & Time::getTime()
{
	time_t t;
	t = time(NULL);
	system("cls");
	puts(ctime(&t));
}

void Time::setH(int h)
{
	if (h > 23 || h < 0)
	{
		this->h = 0;
	}
	else
	{
		this->h = h;
	}
}

void Time::setM(int m)
{
	if (m > 59 || m < 0)
	{
		this->m = 0;
	}
	else
	{
		this->m = m;
	}
}

void Time::setS(int s)
{
	if (s > 59 || s < 0)
	{
		this->s = 0;
	}
	else
	{
		this->s = s;
	}
}


void Time::PrintTime() const
{
	if (this->h < 10)
		cout << "0";
	cout << h << " ";
	if (this->m < 10)
		cout << "0";
	cout << m << " ";
	if (this->s < 10)
		cout << "0";
	cout << s << endl;
}


void Time::addHour(int h)
{
	int h1 = this->h + h;
	this->h = h1 % 24; // 73 mod 24 = 1
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

void Time::redHour(int h)
{
	if (h<=this->h)
	{
		this->h -= h;
	}
	else
	{
	int h1 = (h/24);
	
	this->h = 24 - (h - this->h);
	}

}

void Time::redMin(int m)
{
	if (m <= this->m)
	{
		this->m -= m;
	}
	else
	{
		this->m = 60 - (m - this->m);
		redHour(1);
	}
}

void Time::redSec(int s)
{
	if (s <= this->s)
	{
		this->s -= s;
	}
	else
	{
		this->s = 60 - (s - this->s);
		redMin(1);
	}
}

const bool & Time::operator==(const Time & a)
{
	if (this->h == a.h &&this->m == a.m &&this->s == a.s)
	{
		return true;
	}
	return false;
}

const Time & Time::operator++(int)
{
	Time a(*this);
	this->addSec(1);
	return a;
}

const Time & Time::operator+=(const Time & a)
{
	this->addHour(a.h);
	this->addMin(a.m);
	this->addSec(a.s);
	return *this;
}

const Time & Time::operator-=(const Time & a)
{
	this->redHour(a.h);
	this->redMin(a.m);
	this->redSec(a.s);
	return *this;
}

const Time & Time::operator--()
{
	this->redSec(1);
	return *this;
}

const Time & Time::operator--(int)
{
	Time a(*this);
	this->redSec(1);
	return a;
}

const bool & Time::operator!=(const Time & a)
{
	if (this->h != a.h || this->m != a.m || this->s != a.s)
	{
		return true;
	}
	return false;
}

const bool & Time::operator>(const Time & a)
{
	if (this->h > a.h)
	{
		return true;
	}
	if (this->h == a.h && this->m > a.m)
	{
		return true;
	}
	if (this->h == a.h&&this->m == a.m && this->s > a.s)
	{
		return true;
	}
	return false;
}

const bool & Time::operator<(const Time & a)
{
	if (this->h < a.h)
	{
		return true;
	}
	if (this->h == a.h && this->m < a.m)
	{
		return true;
	}
	if (this->h == a.h&&this->m == a.m && this->s < a.s)
	{
		return true;
	}
	return false;
}

const bool & Time::operator>=(const Time & a)
{
	if (this->h == a.h &&this->m == a.m &&this->s == a.s)
	{
		return true;
	}
	if (this->h > a.h)
	{
		return true;
	}
	if (this->h == a.h && this->m > a.m)
	{
		return true;
	}
	if (this->h == a.h&&this->m == a.m && this->s > a.s)
	{
		return true;
	}
	return false;
}

const bool & Time::operator<=(const Time & a)
{
	if (this->h == a.h && this->m == a.m && this->s == a.s)
	{
		return true;
	}
	if (this->h < a.h)
	{
		return true;
	}
	if (this->h == a.h && this->m < a.m)
	{
		return true;
	}
	if (this->h == a.h&&this->m == a.m && this->s < a.s)
	{
		return true;
	}
	return false;
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

Time::~Time()
{
}

ostream & operator<<(ostream & out, const Time & a)
{
	a.PrintTime();
	return out;
}

istream & operator >> (istream & in, Time &a)
{
	int h, m, s;
	cout << "¬ведите часы\n";
	in >> h;
	cout << "¬ведите минуты\n";
	in >> m;
	cout << "¬ведите секунды\n";
	in >> s;
	a.setH(h);
	a.setM(m);
	a.setS(s);
	return in;
}
