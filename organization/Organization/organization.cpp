#include "organization.h"

string organization::getName(string name)const
{
	return name;
}

organization::organization(string name, double salary)
{
	this->salary = salary;
	this->name = name;
}

double organization::wageRequirements()
{
	double wageReq = 0;
	for (int i = 0; i < emps.size(); i++)
	{
		wageReq += emps[i]->getCoef()*salary;
	}
	return wageReq;
}

void organization::addEmployee(employee * emp)
{
	emps.push_back(auto_ptr<employee>(emp));
}

void organization::deleteEmployee()
{
	string str;
	cout << "������� ��������� �������� �������� ������ ������� - " << endl;
	cout << "admin" << endl << "developer" << endl << "saler" << endl << "anykey" << endl;
	cin >> str;
	if (str == "anykey")
	{
		employee *e = new anykey;
		string res = typeid(*e).name();
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				cout << (*emps[i]).getName() << endl;
			}
		}
		cout << "������� ��� �������� (����� �� ��� � � �������) �������� ������ ������� - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				if ((*emps[i]).getName() == delName)
				{
					cout << "�������� � ������ " << (*emps[i]).getName() << " ��� �����.";
					emps.erase(emps.begin() + i);
					break;
				}
			}
		}
	}
	else if (str == "saler")
	{
		employee *e = new saler;
		string res = typeid(*e).name();
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				cout << (*emps[i]).getName() << endl;
			}
		}
		cout << "������� ��� �������� (����� �� ��� � � �������) �������� ������ ������� - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				if ((*emps[i]).getName() == delName)
				{
					cout << "�������� � ������ " << (*emps[i]).getName() << " ��� �����.";
					emps.erase(emps.begin() + i);
					break;
				}
			}
		}
	}
	else if (str == "admin")
	{
		employee *e = new admin;
		string res = typeid(*e).name();
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				cout << (*emps[i]).getName() << endl;
			}
		}
		cout << "������� ��� �������� (����� �� ��� � � �������) �������� ������ ������� - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				if ((*emps[i]).getName() == delName)
				{
					cout << "�������� � ������ " << (*emps[i]).getName() << " ��� �����.";
					emps.erase(emps.begin() + i);
					break;
				}
			}
		}
	}
	else if (str == "developer")
	{
		employee *e = new developer;
		string res = typeid(*e).name();
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				cout << (*emps[i]).getName() << endl;
			}
		}
		cout << "������� ��� �������� (����� �� ��� � � �������) �������� ������ ������� - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				if ((*emps[i]).getName() == delName)
				{
					cout << "�������� � ������ " << (*emps[i]).getName() << " ��� �����.";
					emps.erase(emps.begin() + i);
					break;
				}
			}
		}
	}

	else
		cout << "�� ����� �� ��������� ��������� ��������." << endl;
}

void organization::changeInfo()
{
	system("cls");
	int prof;
	cout << "������� ����� ��������� �������� �������� ������ �������� - " << endl;
	cout << "1.admin" << endl << "2.developer" << endl << "3.saler" << endl << "4.anykey" << endl << "9.��������� � ������� ����" << endl;
	cin >> prof;
	if (prof == 1)
	{
		employee *e = new admin;
		string res = typeid(*e).name();
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				cout << (*emps[i]).getName() << endl;
			}
		}
		cout << "������� ��� �������� (����� �� ��� � � �������) �������� ������ ������� - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if ((*emps[i]).getName() == delName)
			{
				cout << "����� ���������� �� ������ �������� � ������� ���������?(�������� �����)" << endl;
				cout << "1.���" << endl << "2.���� �������� " << endl << "3.��� " << endl << "4.���� ������ " << endl;
				int choose;
				cin >> choose;
				if (choose == 1)
				{
					cout << "������� ��������� ��� - ";
					string chName;
					cin >> chName;
					(*emps[i]).setName(chName);
				}
				else if (choose == 2)
				{
					cout << "������� ��������� ���� ��������(� ������� dd mm yyyy) - ";
					int d, m, y;
					cin >> d >> m >> y;
					(*emps[i]).setBdate(d, m, y);
				}
				else if(choose == 3)
				{
					cout << "������� ��������� ���(1 �������, 0 �������) - ";
					bool chGender;
					cin >> chGender;
					(*emps[i]).setGender(chGender);
				}
				else if (choose == 4)
				{
					cout << "������� ��������� ���� ������(� �����) - ";
					int chExp;
					cin >> chExp;
					(*emps[i]).setExp(chExp);
				}
				else
					break;
			}
		}
	}
	else if (prof == 2)
	{
		employee *e = new developer;
		string res = typeid(*e).name();
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				cout << (*emps[i]).getName() << endl;
			}
		}
		cout << "������� ��� �������� (����� �� ��� � � �������) �������� ������ ������� - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if ((*emps[i]).getName() == delName)
			{
				cout << "����� ���������� �� ������ �������� � ������� ���������?(�������� �����)" << endl;
				cout << "1.���" << endl << "2.���� �������� " << endl << "3.��� " << endl << "4.���� ������ " << endl;
				int choose;
				cin >> choose;
				if (choose == 1)
				{
					cout << "������� ��������� ��� - ";
					string chName;
					cin >> chName;
					(*emps[i]).setName(chName);
				}
				else if (choose == 2)
				{
					cout << "������� ��������� ���� ��������(� ������� dd mm yyyy) - ";
					int d, m, y;
					cin >> d >> m >> y;
					(*emps[i]).setBdate(d, m, y);
				}
				else if (choose == 3)
				{
					cout << "������� ��������� ���(1 �������, 0 �������) - ";
					bool chGender;
					cin >> chGender;
					(*emps[i]).setGender(chGender);
				}
				else if (choose == 4)
				{
					cout << "������� ��������� ���� ������(� �����) - ";
					int chExp;
					cin >> chExp;
					(*emps[i]).setExp(chExp);
				}
				else
					break;
			}
		}
	}
	else if (prof == 3)
	{
		employee *e = new saler;
		string res = typeid(*e).name();
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				cout << (*emps[i]).getName() << endl;
			}
		}
		cout << "������� ��� �������� (����� �� ��� � � �������) �������� ������ ������� - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if ((*emps[i]).getName() == delName)
			{
				cout << "����� ���������� �� ������ �������� � ������� ���������?(�������� �����)" << endl;
				cout << "1.���" << endl << "2.���� �������� " << endl << "3.��� " << endl << "4.���� ������ " << endl;
				int choose;
				cin >> choose;
				if (choose == 1)
				{
					cout << "������� ��������� ��� - ";
					string chName;
					cin >> chName;
					(*emps[i]).setName(chName);
				}
				else if (choose == 2)
				{
					cout << "������� ��������� ���� ��������(� ������� dd mm yyyy) - ";
					int d, m, y;
					cin >> d >> m >> y;
					(*emps[i]).setBdate(d, m, y);
				}
				else if (choose == 3)
				{
					cout << "������� ��������� ���(1 �������, 0 �������) - ";
					bool chGender;
					cin >> chGender;
					(*emps[i]).setGender(chGender);
				}
				else if (choose == 4)
				{
					cout << "������� ��������� ���� ������(� �����) - ";
					int chExp;
					cin >> chExp;
					(*emps[i]).setExp(chExp);
				}
				else
					break;
			}
		}
	}
	else if (prof == 4)
	{
		employee *e = new anykey;
		string res = typeid(*e).name();
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				cout << (*emps[i]).getName() << endl;
			}
		}
		cout << "������� ��� �������� (����� �� ��� � � �������) �������� ������ ������� - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if ((*emps[i]).getName() == delName)
			{
				cout << "����� ���������� �� ������ �������� � ������� ���������?(�������� �����)" << endl;
				cout << "1.���" << endl << "2.���� �������� " << endl << "3.��� " << endl << "4.���� ������ " << endl;
				int choose;
				cin >> choose;
				if (choose == 1)
				{
					cout << "������� ��������� ��� - ";
					string chName;
					cin >> chName;
					(*emps[i]).setName(chName);
				}
				else if (choose == 2)
				{
					cout << "������� ��������� ���� ��������(� ������� dd mm yyyy) - ";
					int d, m, y;
					cin >> d >> m >> y;
					(*emps[i]).setBdate(d, m, y);
				}
				else if (choose == 3)
				{
					cout << "������� ��������� ���(1 �������, 0 �������) - ";
					bool chGender;
					cin >> chGender;
					(*emps[i]).setGender(chGender);
				}
				else if (choose == 4)
				{
					cout << "������� ��������� ���� ������(� �����) - ";
					int chExp;
					cin >> chExp;
					(*emps[i]).setExp(chExp);
				}
				else
					break;
			}
		}
	}
	else if (prof == 9)
	{
		return;
	}
	else
	{
		return;
	}
}

void organization::getInfo() const
{
	cout << "������������ �����������: " << name << "\n----------\n";
	for (size_t i = 0; i < emps.size(); i++)
	{
		string res = typeid(*emps[i]).name();
		cout << res.substr(6) << endl;
		emps[i]->info();
		cout << "\n��������:" << emps[i]->getCoef()*salary
			<< " �����\n------\n";
	}

}
