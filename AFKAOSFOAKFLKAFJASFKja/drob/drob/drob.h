#pragma once
class drob
{
	int x;
	int y;
public:
	void setX(int _x);
	void setY(int _y);
	int getDouble() const;
	void operator-=(const drob &a);
	void operator+=(const drob &a);
	void operator*=(const drob &a);
	void operator/=(const drob &a);
	drob(int x = 0,int y = 1);
	~drob();
};
drob operator+(const drob &a, const drob &b);
drob operator-(const drob & a, const drob & b);
drob operator*(const drob & a, const drob & b);
drob operator/(const drob & a, const drob & b);
bool operator>(const drob &a, const drob &b);
bool operator<(const drob & a, const drob & b);
bool operator>=(const drob & a, const drob & b);
bool operator<=(const drob & a, const drob & b);
bool operator!=(const drob & a, const drob & b);
bool operator==(const drob & a, const drob & b);
drob operator+=(const drob &a, int b);

