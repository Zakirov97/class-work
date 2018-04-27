#pragma once
#include <iostream>
using namespace std;
class drob
{
	int x;
	int y;
public:
	explicit drob(int x = 0, int y = 1);
	void setX(int x);
	void setY(int y);
	int getX() const {return x;}
	double getDouble() const
	{
		return double(x) / y;
	}
	const drob& operator+=(const drob &a);
	const drob& operator-=(const drob &a);
	const drob& operator*=(const drob &a);
	const drob& operator/=(const drob &a);
	void operator+=(int a);
	void operator-=(int a);
	void operator*=(int a);
	void operator/=(int a);
	
	const drob& operator++();
	const drob& operator++(int);
	const drob& operator--();
	const drob& operator--(int);

};

	ostream& operator<<(ostream &out, const drob &a);

//глобальные функции
drob operator+(const drob &a, const drob &b);
drob operator-(const drob &a, const drob &b);
drob operator*(const drob &a, const drob &b);
drob operator/(const drob &a, const drob &b);
drob operator+(const drob &a, int b);
drob operator-(const drob &a, int b);
drob operator*(const drob &a, int b);
drob operator/(const drob &a, int b);
bool operator>(const drob &a, const drob &b);
bool operator<(const drob &a, const drob &b);
bool operator>=(const drob &a, const drob &b);
bool operator<=(const drob &a, const drob &b);
bool operator!=(const drob &a, const drob &b);
bool operator==(const drob &a, const drob &b);
drob operator-(drob &b);
//operator double();