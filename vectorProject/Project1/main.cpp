#include <ctime>
#include "VectorMy.h"
void main() {
	srand(time(0));
	VectorMy v;
	v.print();
	for (size_t i = 0; i < 10; i++)
	{
		v.push_back(rand() % 10);
	}
	v.print();
	
	//v.insert(4, 50);
	//v.print();
	//////////////
	//v.erase(5);
	//v.print();
	//////////////
	//v.reverse();
	//v.print();


	/*vec.print();
	for (size_t i = 0; i < 15; i++)
	{
		vec.pop_back();
		vec.print();
	}*/

	system("pause");
}

