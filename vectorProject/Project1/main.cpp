#include <ctime>
#include "VectorMy.h"
#include <vector>

void inc(VectorMy&d) {
	for (size_t i = 0; i < d.getSize(); i++)
	{
		d[i]++;
	}
}
int getMax(const VectorMy&d) {
	d[5]++;
	int max = d[5];
	return max;
}



void main() {
	
	srand(time(0));
	

	VectorMy v(15);
	for (size_t i = 0; i < 15; i++)
	{
		v[i] = i;
	}
	cout << v<<"---\n";
	VectorMy s(4, 5);
	//v += s;
	v = s;
	
		cout << v;
	
	system("pause");
}

