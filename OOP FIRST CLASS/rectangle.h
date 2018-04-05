#pragma once
#include <string>
#include <iostream>
class rectangle
{
private:
	double length,width;
public:
	rectangle();
	rectangle(double _length, double _width);
	double getLength();
	double getWidht();
	void setLength(double _length);
	void setWidth(double _width);
	double getArea();
	double getPerimeter();
	std::string toString();
	~rectangle();
};

