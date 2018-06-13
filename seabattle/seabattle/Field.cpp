#include "Field.h"



bool Field::check(int x, int y) const
{
	if (x == 0 || y == 0 || x == 11 || y == 11)
		return false;
	for (size_t i = x - 1; i < x + 2; i++)
	{
		for (size_t j = y - 1; j < y + 2; j++)
		{
			/*if (i < 0 || j < 0 || i > 11 || j > 11)
			return false;*/
			if (this->field[i][j] != 0)
				return false;
		}
	}
	return true;
}
//check for killed ships
bool Field::killingCheck(int x, int y) const
{
	bool tOrNot = false;
	for (size_t i = x - 1; i < x + 2; i++)
	{
		for (size_t j = y - 1; j < y + 2; j++)
		{
			if (x == i && y == j)
				continue;
			if (this->field[i][j] == shoot_control::SHIP)
				return false;
			if (this->field[i][j] == shoot_control::HIT)
			{
				tOrNot = killingCheck(i, j, x, y);
				if (!tOrNot) return false;
			}
		}
	}
	return true;
}
bool Field::killingCheck(int x, int y, int lastX, int lastY) const
{
	bool tOrNot = false;
	for (size_t i = x - 1; i <= x + 1; i++)
	{
		for (size_t j = y - 1; j <= y + 1; j++)
		{
			if (i == lastX && j == lastY)
				continue;
			if (x == lastX && y == lastY)
				continue;
			if (this->field[i][j] == shoot_control::SHIP)
				return false;
			if (this->field[i][j] == shoot_control::HIT && (x != lastX && y != lastY))
			{
				tOrNot = killingCheck(i, j, x, y);
				return tOrNot;
			}
		}
	}
	return true;
}

Field::Field()
{
	field = vector<vector<int>>(12);
	for (size_t i = 0; i < field.size(); i++)
	{
		for (size_t j = 0; j < field.size(); j++)
		{
			field[i].push_back(0);
		}
	}
}

void Field::printField() const
{
	cout << '\t' << " ";
	for (int i = 1; i < 11; i++)
	{
		cout << i << ' ';
	}
	cout << endl << endl << endl;
	for (size_t i = 1; i < field.size() - 1; i++)
	{
		cout << i << '\t' << ' ';
		for (size_t j = 1; j < field.size() - 1; j++)
		{
			if (field[i][j] == HIT)
				cout << '@' << ' ';
			else if (field[i][j] == KILL)
				cout << 'X' << ' ';
			else if (field[i][j] == MISS)
				cout << '@' << ' ';
			else
			{
				cout << field[i][j] << ' ';
			}
		}
		cout << endl;
	}
}

void Field::generation()
{
	/*
	4-1
	3-2
	2-3
	1-4
	*/

	while (!addShip(FOUR)) {};
	for (size_t i = 0; i < 2; i++)
	{
		while (!addShip(THREE)) {};
	}
	for (size_t i = 0; i < 3; i++)
	{
		while (!addShip(TWO)) {};
	}
	for (size_t i = 0; i < 4; i++)
	{
		while (!addShip(ONE)) {};
	}
}

bool Field::addShip(ship s)
{
	int x = rand() % 10 + 1;
	int y = rand() % 10 + 1;
	//int x = 4, y = 5;

	bool direction = rand() % 2;
	//if r1 = true > down
	for (size_t i = 0; i < s; i++)
	{
		if (direction) {
			if (!check(x + i, y))
				return false;
		}
		else if (!check(x, y + i))
			return false;
	}

	for (size_t i = 0; i < s; i++)
	{
		if (direction)
			field[x + i][y] = 1;
		else
			field[x][y + i] = 1;
	}
	return true;
}

void Field::clear()
{
	for (size_t i = 0; i < field.size(); i++)
	{
		for (size_t j = 0; j < field.size(); j++)
		{
			field[i][j] = 0;
		}

	}
}

int Field::shoot(int x, int y)
{
	if (field[x][y] == EMPTY)
	{
		field[x][y] = shoot_control::MISS;
		return shoot_control::MISS;
	}
	if (field[x][y] == shoot_control::SHIP)
	{
		if (killingCheck(x, y))
		{
			fillKilledShip(x, y);
			field[x][y] = shoot_control::KILL;
			return KILL;
		}
		else {
			field[x][y] = HIT;
			return HIT;
		}
	}

	return MISS;
}

void Field::shootBot()
{
	int randX = rand() % 10 + 1;
	int randY = rand() % 10 + 1;
	int out = shoot(randX, randY);
	if (out == 4)
	{
		cout << "Bot are missed " << endl;
	}
	else if (out == 3)
	{
		cout << "Bot are kill " << endl;
	}
	else if (out == 2)
	{
		cout << "Bot are hitted but don't kill " << endl;
	}
	system("pause");
}

void Field::fillKilledShip(int x, int y)
{
	for (size_t i = x - 1; i < x + 2; i++)
	{
		for (size_t j = y - 1; j < y + 2; j++)
		{
			if (x == i && y == j || x == KILL && j == KILL)
				continue;
			if (field[i][j] == HIT)
			{
				field[i][j] = KILL;
				fillKilledShip(i, j);
			}
			else if (field[i][j] == KILL)
			{
				continue;
			}
			else
				field[i][j] = MISS;
		}
	}
}

void Field::printBotField() const
{
	cout << '\t' << " ";
	for (int i = 1; i < 11; i++)
	{
		cout << i << ' ';
	}
	cout << endl << endl << endl;
	for (int i = 1; i < field.size()-1; i++)
	{
		cout << i << '\t' << ' ';
		for (int j = 1; j < field.size()-1; j++)
		{
			if (field[i][j] == EMPTY || field[i][j] == SHIP)
				cout << '0' << ' ';
			else if (field[i][j] == HIT)
				cout << 'H' << ' ';
			else if (field[i][j] == MISS)
				cout << '@' << ' ';
			else if (field[i][j] == KILL)
				cout << 'K' << ' ';
		}
		cout << endl;
	}
}
