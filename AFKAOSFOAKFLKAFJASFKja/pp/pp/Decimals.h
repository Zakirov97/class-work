#pragma once
class Decimals
{
	int x, y;
public:
	void setNum(int n);
	void setDenum(int d);
	void Input(int n, int d);
	double getDecimals();
	int getWholePartOfDec();
	Decimals();
	~Decimals();
};

