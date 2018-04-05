#include "rectangle.h"



rectangle::rectangle()
{
	length = 1.0;
	width = 1.0;
}

rectangle::rectangle(double _length, double _width)
{
	length = _length;
	width = _width;
}

double rectangle::getLength()
{
	return length;
}

double rectangle::getWidht()
{
	return width;
}

void rectangle::setLength(double _length)
{
	length = _length;
}

void rectangle::setWidth(double _width)
{
	width = _width;
}

double rectangle::getArea()
{
	return length * width;
}

double rectangle::getPerimeter()
{
	return (length + width)*2;
}

std::string rectangle::toString()
{
	std::string s1 = std::to_string(getArea());
	return s1;
}

rectangle::~rectangle()
{
	std::cout << "I'm done";
}
