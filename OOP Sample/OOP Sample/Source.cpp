#include <iostream>
#include "Time.h"

int main()
{
	//Time a;
	Time(15,16,12);
	while (true)
	{
		Sleep(1000);
		a.addSecond();
		system("cls");
		a.print();
	}
	system("pause");
	return 0;
}
