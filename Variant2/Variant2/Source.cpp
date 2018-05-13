#include "Patient.h"
#include "Bus.h"
#include "Filee.h"
#include "House.h"
#include "Phone.h"
#include "Person.h"
#include <algorithm>
//Patient

//int main()
//{
//	Patient p[4];
//	p[0] = { "toto","kolya",  "Lol", "furma", "retard", 1 };
//	p[1] = { "poto","vitya", "Mol", "surma", "petard", 2 };
//	p[2] = { "moto","petya", "Pol", "turma", "ketard", 3 };
//	p[3] = { "soto","kaisar", "Dol", "durma", "letard", 4 };
//	string str = "";
//	int d1, d2;
//	cout << "Enter diagnosis - ";
//	cin >> str;
//	cout << "Enter the search interval - ";
//	cin >> d1 >> d2;
//	if (str == "")
//		cout << "Enter diagnosis!";
//	for (int i = 0; i < 4; i++)
//	{
//		if (p[i].wDiagnosis(str))
//		{
//			cout << p[i].getFirstName() << endl;
//		}
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (p[i].search(d1, d2))
//			cout << p[i].getFirstName() << endl;
//	}
//	system("pause");
//	return 0;
//}

//Bus

//
//int main()
//{
//	Bus b[4];
//	b[0] = { "Surname1", "Name1", 11,1,"Mark1",1971, 10010 };
//	b[1] = { "Surname2", "Name2", 22,2,"Mark2",1972, 10020 };
//	b[2] = { "Surname3", "Name3", 33,3,"Mark3",1973, 10030 };
//	b[3] = { "Surname4", "Name4", 44,4,"Mark4",1974, 10040 };
//	int numbRoute, numbYear;
//	cout << "Enter number route - ";
//	cin >> numbRoute;
//	for (int i = 0; i < 4; i++)
//	{
//		if (b[i].searchBus(numbRoute))
//			cout << b[i].getNumBus();
//	}
//	cout << endl;
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (b[i].yearOfOperated())
//		{
//			cout << "Year of opearated " << b[i].getNumBus() << endl;
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		if (b[i].mileAge())
//		{
//			cout << "Mileage "<< b[i].getNumBus() << endl;
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//File

//
//string compare(string a, string b)
//{
//	int g = 0;
//
//	if (a.size() >= b.size())
//		g = a.size();
//	else
//		g = b.size();
//
//	for (int i = 0; i < g; i++)
//	{
//		if (a[i] = b[i])
//		{
//			break;
//		}
//		else if(a[i] > b[i])
//		{
//			return a;
//		}
//		else
//		{
//			return b;
//		}
//	}
//	return a;
//}
//
//int main()
//{
//	Filee f[4];
//
//	string *a = new string[4];
//	string *b = new string[4];
//	f[0] = { "FileName0", 10, 2000,10 };
//	f[1] = { "aileName1", 11, 2001,11 };
//	f[2] = { "tileName2", 12, 2002,12 };
//	f[3] = { "bileName3", 13, 2003,13 };
//	for (int i = 0; i < 4; i++)
//	{
//		string tmp = f[i].getFileName();
//		a[i] = tmp;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		b[i] = compare(a[i], a[i + 1]);
//	}
//	
//	for (size_t i = 0; i < 4; i++)
//	{
//		cout << b[i] << endl;
//	}
//	system("pause");
//	return 0;
//}

//House

//int main()
//{
//	House h[4];
//	h[0] = { "tam",1,2,50 };
//	h[1] = { "zdes",2,5,55 };
//	h[2] = { "tut",3,4,66 };
//	h[3] = { "gdeto",4,3,70 };
//	
//	cout << "a) Enter count of room - ";
//	int cnt;
//	cin >> cnt;
//	cout << "b) Enter count of room - ";
//	int cntb;
//	cin >> cntb;
//	cout << "Enter floor interval - ";
//	int f1, f2;
//	cin >> f1 >> f2;
//	cout << "c) Enter area - ";
//	int ar;
//	cin >> ar;
//	//a
//	for (int i = 0; i < 4; i++)
//	{
//		if (h[i].getCountOfRoom()==cnt)
//		{
//			cout << "a) The aparment number " << i << " has a " << cnt << " room" << endl;
//		}
//	}
//	//b
//	for (int i = 0; i < 4; i++)
//	{
//		if (h[i].getCountOfRoom() == cnt)
//		{
//			if (f1<h[i].getFloor() && h[i].getFloor()<f2)
//			{
//			cout << "b) The aparment number " << i << " has a " << cnt << " room" << " and this apartment stay on the entered interval" <<  endl;
//			}
//		}
//	}
//	//c
//	for (int i = 0; i < 4; i++)
//	{
//		if (h[i].getArea() > ar)
//		{
//			cout << "c) The aparment number " << i << " has a superior area" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

//phone

//void a(Phone pp[], int time_)
//{
//	for (int i = 0; i < 4; i++)
//	{
//		if (pp[i].getInCityCall()>time_)
//		{
//			pp[i].info();
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//void b(Phone pp[])
//{
//	for (int i = 0; i < 4; i++)
//	{
//		if (pp[i].getOutCityCall())
//		{
//			cout << "Phone number " << i;
//			pp[i].info();
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	Phone p[4];
//	p[0] = { "toto","kolya",  "Lol", "furma", 12345, 10,70 };
//	p[1] = { "poto","vitya", "Mol", "surma", 65423, 20,42 };
//	p[2] = { "moto","petya", "Pol", "turma", 37589, 30, 39};
//	p[3] = { "soto","kaisar", "Dol", "durma", 96583, 70, 20 };
//	int inCTime;
//	cout << "Enter the time calls - ";
//	cin >> inCTime;
//	a(p, inCTime);
//	b(p);
//
//
//	system("pause");
//	return 0;
//}

//person

//void a(Person p[],int agge)
//{
//	for (int i = 0; i < 4; i++)
//	{
//		if (2018 - p[i].getBirthday() > agge)
//		{
//			cout << endl;
//			p[i].pPerson();
//		}
//	}
//		cout << endl;
//}
//void b(Person p[])
//{
//	for (int i = 0; i < 4; i++)
//	{
//		if (p[i].getEducation()==3)
//		{
//			cout << endl;
//			p[i].pPerson();
//		}
//	}
//	cout << endl;
//}
//void c(Person p[])
//{
//	for (int i = 0; i < 4; i++)
//	{
//		if (p[i].getGender())
//		{
//			cout << endl;
//			p[i].pPerson();
//		}
//	}
//	cout << endl;
//}
//int main()
//{
//	Person p[4];
//	p[0] = { "toto","kolya",  "Lol", "furma", 1, 1950, 1 };
//	p[1] = { "poto","vitya", "Mol", "surma", 1, 1990, 2 };
//	p[2] = { "moto","petya", "Pol", "turma", 1, 2000, 3 };
//	p[3] = { "soto","kaisar", "Dol", "durma", 0, 2015, 3 };
//	cout << "Enter age - ";
//	int agge;
//	cin >> agge;
//	cout << "List of citizens whose age exceeds the preset: " << endl;
//	a(p,agge);
//	cout << "List of citizens who have higher education: " << endl;
//	b(p);
//	cout << "List of male citizens: " << endl;
//	c(p);
//	system("pause");
//	return 0;
//}