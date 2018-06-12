#include <vector>
#include <list>
#include <iostream>
#include <ctime>

using namespace std;

bool moreFive(const int&value) { return(value > 500); }

void main()
{
	//1 exercise
	
	//vector<int> v;
	//for (int i = 0; i < 10; i++)
	//	v.push_back(i*i);
	//for (vector<int>::reverse_iterator i = v.rbegin(); i != v.rend(); i++)
	//	cout << *i << ' ';
	

	//2 exercise
	
	//vector<int> v;
	//for (int i = 0; i < 10; i++)
	//	v.push_back(i);
	//v.insert(v.begin()+8, 3,50);
	//for (int i = 0; i < v.size(); i++)
	//	cout << v[i] << ' ';

	//3 exercise

	srand(time(NULL));
	list<int> l;
	for (int i = 0; i < 10; i++)
	{
		l.push_back(rand() % 1000);
	}
	for (list<int>::iterator i = l.begin(); i != l.end(); i++)
	{
		cout << *i << ' ';
	}
	cout << endl;
	l.remove_if(moreFive);
	for (list<int>::iterator i = l.begin(); i != l.end(); i++)
	{
		cout << *i << ' ';
	}
	cout << endl;
	system("pause");
}