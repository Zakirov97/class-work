//#include "PrintQueue.h"
//
//int main()
//{
//	PrintQueue pq;
//	pq.addToQueue(0, "ADMIN");
//	pq.addToQueue(1, "Manager");
//	pq.addToQueue(2, "Brat");
//	pq.addToQueue(3, "NeBrat");
//	pq.showQueue();
//
//	system("pause");
//	return 0;
//}

#include "list_.h"

int main()
{
	singleLinkedList<int> sl;
	for (int i = 0; i < 10; i++)
	{
		sl.push_back(i);
	}
	sl.print();
	cout << endl;
	sl.back_print();
	system("pause");
	return 0;
}