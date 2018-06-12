#include "Field.h"
#include <ctime>

int main() {
	setlocale(0, "");
	srand(time(0));
	Field f;
	Field f2;

	f.clear();
	f.generation();
	f.printField();

	f2.clear();
	f2.generation();
	f2.printField();
	while (1)
	{
		int x, y;
		cout << "\nEnter coordinate - ";
		cin >> x >> y;
		int out = f.shoot(x, y);
		system("cls");
		f.printField();
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
			cout << "Yout are hitted but don't kill " << endl;
		}
		int x2, y2;

		//system("pause");
	}

	return 0;
}