#include "Time.h"


void main() {
	setlocale(0, "");
	Time t(15, 20, 20);
	Time t2(25, 0, 0);
	t -= t2;
	//cin >> t;
	cout << t;
	system("pause");
}