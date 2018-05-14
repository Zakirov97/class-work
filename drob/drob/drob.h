#pragma once
#include <iostream>
using namespace std;
class drob
{
	int x;
	int y;
public:
	explicit drob(int x = 0, int y = 1);
	void setX(int x = 0);
	void setY(int y = 1);
	int getX() const { return x; }
	int getY() const { return y; }

	void findCommonDenum(drob &a);

	void getDec() const;

	const drob& operator+=(const drob &a);
	const drob& operator-=(const drob &a);
	const drob& operator*=(const drob &a);
	const drob& operator/=(const drob &a);
	void operator+=(int a);
	void operator-=(int a);
	void operator*=(int a);
	void operator/=(int a);
	
	double getDouble() const
	{
		return double(x) / y;
	}
	operator int() const;
	operator double() const;
	const drob& operator++();
	const drob& operator++(int);
	const drob& operator--();
	const drob& operator--(int);

};

	ostream& operator<<(ostream &out, const drob &a);
	istream &operator>>(istream &in, drob &a);

//глобальные функции
drob operator+(const drob &a, const drob &b);
drob operator-(const drob &a, const drob &b);
drob operator*(const drob &a, const drob &b);
drob operator/(const drob &a, const drob &b);
bool operator>(const drob &a, const drob &b);
bool operator<(const drob &a, const drob &b);
bool operator>=(const drob &a, const drob &b);
bool operator<=(const drob &a, const drob &b);
bool operator!=(const drob &a, const drob &b);
bool operator==(const drob &a, const drob &b);

drob operator+(int a, const drob &b);
drob operator-(int a, const drob &b);
drob operator*(int a, const drob &b);
drob operator/(int a, const drob &b);
bool operator>(int a, const drob &b);
bool operator<(int a, const drob &b);
bool operator>=(int a, const drob &b);
bool operator<=(int a, const drob &b);
bool operator!=(int a, const drob &b);
bool operator==(int a, const drob &b);

drob operator+(const drob &a, int b);
drob operator-(const drob &a, int b);
drob operator*(const drob &a, int b);
drob operator/(const drob &a, int b);
bool operator>(const drob &a, int b);
bool operator<(const drob &a, int b);
bool operator>=(const drob &a, int b);
bool operator<=(const drob &a, int b);
bool operator!=(const drob &a, int b);
bool operator==(const drob &a, int b);


drob operator-(drob &b);