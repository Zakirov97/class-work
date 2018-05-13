#include "drob.h"


void drob::setX(int _x)
{
	if (_x != 0)
	{
		this->x = _x;
	}
	else
	{
		x = 0;
	}
}

void drob::setY(int _y)
{
	if (_y != 0)
	{
		this->y = _y;
	}
	else
	{
		y = 1;
	}
}

int drob::getDouble() const
{
	return (double)x/y;
}

void drob::operator+=(const drob &a)
{
	this->x = this->x * a.y + this->y * a.x;
	this->y = this->y * a.y;
}

void drob::operator-=(const drob &a)
{
	this->x = this->x * a.y - this->y * a.x;
	this->y = this->y * a.y;
}

void drob::operator*=(const drob &a)
{
	this->x = this->x * a.x;
	this->y = this->y * a.y;
}

void drob::operator/=(const drob &a)
{
	this->x = this->x * a.y;
	this->y = this->y * a.x;
}

drob::drob(int x, int y)
{

}

drob::~drob()
{
}

drob operator+(const drob & a, const drob & b)
{
	drob c = a;
	c += b;
	return c;
}

drob operator-(const drob & a, const drob & b)
{
	drob c = a;
	c -= b;
	return c;
}

drob operator*(const drob & a, const drob & b)
{
	drob c = a;
	c *= b;
	return c;
}

drob operator/(const drob & a, const drob & b)
{
	drob c = a;
	c /= b;
	return c;
}

bool operator>(const drob & a, const drob & b)
{
	return a.getDouble>b.getDouble;
}

bool operator<(const drob & a, const drob & b)
{
	return a.getDouble<b.getDouble;
}

bool operator>=(const drob & a, const drob & b)
{
	return a.getDouble>=b.getDouble;
}

bool operator<=(const drob & a, const drob & b)
{
	return a.getDouble<=b.getDouble;
}

bool operator!=(const drob & a, const drob & b)
{
	return a.getDouble != b.getDouble;
}

bool operator==(const drob & a, const drob & b)
{
	return a.getDouble == b.getDouble;
}

drob operator+=(const drob & a, int b)
{
	drob c;
	c = a;
	
	return drob();
}
