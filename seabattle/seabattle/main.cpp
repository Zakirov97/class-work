#include "Field.h"
#include <ctime>
#include <iostream>

int main() {
	setlocale(0, "");
	srand(time(0));
	Field f;
	Field f2;

	f.clear();
	f.generation();
	f.printField();
	cout << endl;
	f2.clear();
	f2.generation();
	f2.printBotField();
	while (1)
	{
		char y;
		int x;
		cout << "\nEnter coordinate - ";
		cin >> x >> y;
		int yy = y-64;
		int out = f2.shoot(x, yy);
		f.shootBot();
		system("cls");
		f.printField();
		cout << endl;
		f2.printBotField();
		if (out == 4)
		{
			cout << "You are miss " << endl;
		}
		else if (out == 3)
		{
			cout << "You are kill " << endl;
		}
		else if (out == 2)
		{
			cout << "You are hitted but don't kill " << endl;
		}

		//system("pause");
	}

	return 0;
}