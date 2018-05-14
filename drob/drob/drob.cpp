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


void drob::findCommonDenum(drob & a)
{
	this->x *= a.x;
	this->y *= a.y;
}

void drob::getDec() const
{
	cout << x << '/' << y;
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

ostream & operator<<(ostream & out, const drob & a)
{
	out << a.getX << '/' << a.getY;
	return out;
}

istream & operator>>(istream & in, drob & a)
{
	int x, y;
	cout << "¬ведите числитель\n";
	in >> x;
	cout << "¬ведите знаменатель\n";
	in >> y;
	a.setX = x;
	a.setY = y;
	return in;
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
bool operator<(const drob &a, const drob &b) 
{
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

drob operator+(int a, const drob & b)
{
	drob c = b;
	c += a;
	return c;
}
drob operator-(int a, const drob & b)
{
	drob c = b;
	c -= a;
	return c;
}
drob operator*(int a, const drob & b)
{
	drob c = b;
	c *= a;
	return c;
}
drob operator/(int a, const drob & b)
{
	drob c = b;
	c.setY *= a;
	return c;
}
bool operator>(int a, const drob & b)
{
	return a > b.getDouble();
}
bool operator<(int a, const drob & b)
{
	return a < b.getDouble();
}
bool operator>=(int a, const drob & b)
{
	return a >= b.getDouble();
}
bool operator<=(int a, const drob & b)
{
	return a <= b.getDouble();
}
bool operator!=(int a, const drob & b)
{
	return a != b.getDouble();
}
bool operator==(int a, const drob & b)
{
	return a == b.getDouble();
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

drob::operator int() const
{
	return x / y;
}

drob::operator double() const
{
	return this->getDouble;
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

bool operator>(const drob & b, int a)
{
	return a > b.getDouble();
}
bool operator<(const drob & b, int a)
{
	return a < b.getDouble();
}
bool operator>=(const drob & b, int a)
{
	return a >= b.getDouble();
}
bool operator<=(const drob & b, int a)
{
	return a <= b.getDouble();
}
bool operator!=(const drob & b, int a)
{
	return a != b.getDouble();
}
bool operator==(const drob & b, int a)
{
	return a == b.getDouble();
}

drob operator-(drob & b)
{
	drob tmp(b);
	tmp.setX(tmp.getX()*-1);
	return tmp;
}
