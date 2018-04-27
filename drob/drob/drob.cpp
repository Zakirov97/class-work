#include "drob.h"



drob::drob(int x, int y)
{
	setX(x);
	setY(y);
}
void drob::setX(int x)
{
	this->x = x;
}
void drob::setY(int y)
{
	if (y != 0)
		this->y = y;
	else this->y = 1;
}


const drob& drob::operator+=(const drob &a)
{
	this->x = this->x * a.y + this->y * a.x;
	this->y = this->y * a.y;
	return *this;
}
const drob& drob::operator-=(const drob &a)
{
	this->x = this->x * a.y - this->y * a.x;
	this->y = this->y * a.y;
	return *this;
}
const drob& drob::operator*=(const drob &a)
{
	this->x = this->x * a.x;
	this->y = this->y * a.y;
	return *this;
}
const drob& drob::operator/=(const drob &a)
{
	this->x = this->x * a.y;
	this->y = this->y * a.x;
	return *this;
}

drob operator+(const drob &a, const drob &b)
{
	drob c = a;
	c += b;
	return c;
}
drob operator-(const drob &a, const drob &b) 
{
	drob c = a;
	c -= b;
	return c;
}
drob operator*(const drob &a, const drob &b) 
{
	drob c = a;
	c *= b;
	return c;
}
drob operator/(const drob &a, const drob &b) 
{
	drob c = a;
	c /= b;
	return c;
}

bool operator>(const drob &a, const drob &b) 
{

	return a.getDouble() > b.getDouble();
}
bool operator<(const drob &a, const drob &b) {
	return a.getDouble() < b.getDouble();
}
bool operator>=(const drob &a, const drob &b) {
	return a.getDouble() >= b.getDouble();
}
bool operator<=(const drob &a, const drob &b) {
	return a.getDouble() <= b.getDouble();
}
bool operator!=(const drob &a, const drob &b) {
	return a.getDouble() != b.getDouble();
}
bool operator==(const drob &a, const drob &b) 
{
	return a.getDouble() == b.getDouble();
}

drob operator-(drob & b)
{
	drob tmp(b);
	tmp.setX(tmp.getX()*-1);
	return tmp;
}



void drob::operator+=(int a) 
{
	this->x += this->y*a;
}
void drob::operator-=(int a)
{
	this->x -= this->y*a;
}
void drob::operator*=(int a)
{
	this->x *= a;
}
void drob::operator/=(int a)
{
	this->x /= a;
}



const drob & drob::operator++()
{
	x += y;
	return *this;
}
const drob & drob::operator++(int)
{
	drob tmp(*this);
	this->x += this->y;
	return tmp;
}
const drob & drob::operator--()
{
	x -= y;
	return *this;
}
const drob & drob::operator--(int)
{
	drob tmp(*this);
	this->x -= this->y;
	return tmp;
}
std::ostream & drob::operator<<(std::ostream & out, const drob & a)
{
	// TODO: insert return statement here
}
//c = a+5
drob operator+(const drob & a, int b)
{
	drob c = a;
	c += b;
	return c;
}
drob operator-(const drob & a, int b)
{
	drob c = a;
	c -= b;
	return c;
}
drob operator*(const drob & a, int b)
{
	drob c = a;
	c *= b;
	return c;
}
drob operator/(const drob & a, int b)
{
	drob c = a;
	c /= b;
	return c;
}

