#include "Time.h"


void main() {
	setlocale(0, "");
	Time t(15, 20, 20);
	Time t2(15, 20, 20);
	if (t<=t2)
	{
		cout << "all work	";
	}
	system("pause");
}