#include <ctime>
#include "VectorMy.h"
void main() {
	
	srand(time(0));
	

	VectorMy v;
	VectorMy v2 = v;
	v.print();
	v2.print();



	/*VectorMy vec;
	vec.push_back(150);
	vec.print();
	for (size_t i = 0; i < 9; i++)
	{
		vec.push_back(rand() % 10);
	}

	VectorMy v2 = vec;
	cout << "-------------\n";
	vec.print();
	cout << "-------------\n";
	v2.print();
	cout << "-------------\n";*/

	/*vec.print();
	for (size_t i = 0; i < 15; i++)
	{
		vec.pop_back();
		vec.print();
	}*/

	system("pause");
}

