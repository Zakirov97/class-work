#include "Decimals.h" 

void Decimals::setNum(int n)
{
	x = n;
}

void Decimals::setDenum(int d)
{
	y = d;
}

void Decimals::Input(int n, int d)
{
	setNum(n);
	setDenum(d);
}

double Decimals::getDecimals()
{
	return (double)x / y;
}

int Decimals::getWholePartOfDec()
{
	return (int)getDecimals();
}

Decimals::Decimals()
{
}


Decimals::~Decimals()
{
}