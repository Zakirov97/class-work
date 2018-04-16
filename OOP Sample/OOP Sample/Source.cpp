#include <iostream>
#include "Time.h"

class time
{
private:
	int x;

};
int main()
{
	Time a;
	a.setH(5);
	a.setM(2);
	a.setS(3);
	while (true)
	{
		Sleep(1000);
		a.addSecond();
		system("cls");
		a.print();
	}
	a.print();
	system("pause");
	return 0;
}
