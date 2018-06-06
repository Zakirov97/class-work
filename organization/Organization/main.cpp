#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "admin.h"
#include "developer.h"
#include "saler.h"
#include "organization.h"
#include "anykey.h"
#include "Interface.h"
using namespace std;

void printInfo(organization &org)
{
	system("cls");
	int number;
	cout << "����� ���������� � ������ ���������� �������� ���(�������� �����)" << endl;
	cout << "1. �������� ���������" << endl;
	cout << "2. ������� ���������" << endl;
	cout << "3. �������� ���������� � ���������" << endl;
	cout << "4. ������� ���������� � ���� ����������" << endl;
	cout << "9. ����� �� ������ ����������" << endl;
	cin >> number;
	if (number == 1)
	{
		system("cls");
		int prof;
		cout << "��������� � ����� ���������� �� ������ ��������?(������� ����� ���������) " << endl;
		cout << "1.admin" << endl << "2.developer" << endl << "3.saler" << endl << "4.anykey" << endl << "9.��������� � ������� ����" << endl;
		cin >> prof;
		if (prof == 1)
		{
			system("cls");
			cout << "������� ��� ���������(�� ����������) - ";
			string empName;
			cin >> empName;

			cout << "������� ���� �������� ���������(� ������� dd mm yyyy) - ";
			int d, m, y;
			cin >> d >> m >> y;

			cout << "������� ��� ���������(1 - �������, 0 - �������) - ";
			bool empGen;
			cin >> empGen;

			cout << "������� ���� ������(� �����) - ";
			int empExp;
			cin >> empExp;

			cout << "������� ���������� ����������� �� �������� ������ admin - ";
			int cntPc;
			cin >> cntPc;
			org.addEmployee(new admin(empName, date_(d, m, y), empGen, empExp, cntPc));
		}
		else if (prof == 2)
		{
			system("cls");
			cout << "������� ��� ���������(�� ����������) - ";
			string empName;
			cin >> empName;

			cout << "������� ���� �������� ���������(� ������� dd mm yyyy) - ";
			int d, m, y;
			cin >> d >> m >> y;

			cout << "������� ��� ���������(1 - �������, 0 - �������) - ";
			bool empGen;
			cin >> empGen;

			cout << "������� ���� ������(� �����) - ";
			int empExp;
			cin >> empExp;

			cout << "������� ���������� ������ �������� ������� �������� - ";
			int cntLangs;
			cin >> cntLangs;
			org.addEmployee(new developer(empName, date_(d, m, y), empGen, empExp, cntLangs));

		}
		else if (prof == 3)
		{
			system("cls");
			cout << "������� ��� ���������(�� ����������) - ";
			string empName;
			cin >> empName;

			cout << "������� ���� �������� ���������(� ������� dd mm yyyy) - ";
			int d, m, y;
			cin >> d >> m >> y;

			cout << "������� ��� ���������(1 - �������, 0 - �������) - ";
			bool empGen;
			cin >> empGen;

			cout << "������� ���� ������(� �����) - ";
			int empExp;
			cin >> empExp;

			cout << "������� ������� ���������� ������ ��������� - ";
			int cntSales;
			cin >> cntSales;
			org.addEmployee(new saler(empName, date_(d, m, y), empGen, empExp, cntSales));
		}
		else if (prof == 4)
		{
			system("cls");
			cout << "������� ��� ���������(�� ����������) - ";
			string empName;
			cin >> empName;

			cout << "������� ���� �������� ���������(� ������� dd mm yyyy) - ";
			int d, m, y;
			cin >> d >> m >> y;

			cout << "������� ��� ���������(1 - �������, 0 - �������) - ";
			bool empGen;
			cin >> empGen;

			cout << "������� ���� ������(� �����) - ";
			int empExp;
			cin >> empExp;

			cout << "������� ������� ���������� ������ ��������� - ";
			int cntSales;
			cin >> cntSales;
			org.addEmployee(new saler(empName, date_(d, m, y), empGen, empExp, cntSales));
		}
		else if (prof == 9)
		{
			return;
		}
	}
	else if (number == 2)
	{
		system("cls");
		org.deleteEmployee();
	}
	else if (number == 3)
	{
		system("cls");
		org.changeInfo();

	}
	else if (number == 4)
	{
		org.getInfo();
		system("pause");
	}
	else if (number == 9)
	{
		return;
	}
}

int main()
{
	setlocale(0, "");
	organization itstep("�������� ���", 100000);
	itstep.addEmployee(new admin("Petya", date_(5, 3, 1992), 1, 5, 56));
	itstep.addEmployee(new developer("Nastya", date_(29, 6, 2001), 0, 0, 1));
	itstep.addEmployee(new admin("Vasya", date_(5, 8, 1996), 1, 2, 3));
	itstep.addEmployee(new saler("Katya", date_(1, 1, 1990), 0, 3, 300));
	itstep.addEmployee(new anykey("Leha"));

	while (1)
	{
		printInfo(itstep);
	}


	itstep.getInfo();
	system("pause");
}
