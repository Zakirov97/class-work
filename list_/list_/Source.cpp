#include "dzD.h"

int main()
{

	PrintQueue pq;
	pq.addToQueue(0, "ADMIN");
	pq.addToQueue(1, "Manager");
	pq.addToQueue(2, "Brat");
	pq.addToQueue(0, "AD");
	pq.addToQueue(3, "NeBrat");
	pq.addToQueue(0, "MIN");
	pq.showQueue();
	system("pause");
	return 0;
}