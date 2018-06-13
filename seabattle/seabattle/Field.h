#pragma once
#include <vector>
#include <iostream>

using namespace std;



enum ship { ONE = 1, TWO = 2, THREE = 3, FOUR = 4 };
enum shoot_control { EMPTY = 0, SHIP = 1, HIT = 2, KILL = 3, MISS = 4 };
class Field
{
public:
	vector<vector<int>> field;
	bool check(int x, int y) const;
	bool killingCheck(int x, int y) const;
	bool killingCheck(int x, int y, int lastX, int lastY) const;

public:
	Field();
	void printField() const;
	void generation();
	bool addShip(ship s);
	void clear();
	int shoot(int x, int y);
	void shootBot();
	void fillKilledShip(int x, int y);
	void printBotField() const;
};