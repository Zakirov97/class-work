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
	//f2.printField();
	while (1)
	{
		int x, y;
		cout << "\nВведите координаты - ";
		cin >> x >> y;
		int out = f2.shoot(x, y);
		system("cls");
		f.printField();
		if (out == 4)
		{
			cout << "Вы промахнулись " << endl;
		}
		else if(out == 3)
		{
			cout << "Вы убили " << endl;
		}
		else if (out == 2)
		{
			cout << "Вы попали но не убили " << endl;
		}
		int x2, y2;
		
	//system("pause");
	}
	
	return 0;
}