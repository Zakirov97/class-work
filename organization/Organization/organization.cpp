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
	cout << "Введите профессию человека которого хотите уволить - " << endl;
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
		cout << "Введите имя человека (такое же как и в консоли) которого хотите удалить - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				if ((*emps[i]).getName() == delName)
				{
					cout << "Работник с именем " << (*emps[i]).getName() << " был удалён.";
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
		cout << "Введите имя человека (такое же как и в консоли) которого хотите удалить - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				if ((*emps[i]).getName() == delName)
				{
					cout << "Работник с именем " << (*emps[i]).getName() << " был удалён.";
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
		cout << "Введите имя человека (такое же как и в консоли) которого хотите удалить - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				if ((*emps[i]).getName() == delName)
				{
					cout << "Работник с именем " << (*emps[i]).getName() << " был удалён.";
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
		cout << "Введите имя человека (такое же как и в консоли) которого хотите удалить - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if (typeid(*emps[i]).name() == res)
			{
				if ((*emps[i]).getName() == delName)
				{
					cout << "Работник с именем " << (*emps[i]).getName() << " был удалён.";
					emps.erase(emps.begin() + i);
					break;
				}
			}
		}
	}

	else
		cout << "Вы ввели не корректно профессию человека." << endl;
}

void organization::changeInfo()
{
	system("cls");
	int prof;
	cout << "Введите число профессии человека которого хотите изменить - " << endl;
	cout << "1.admin" << endl << "2.developer" << endl << "3.saler" << endl << "4.anykey" << endl << "9.Вернуться в прошлое меню" << endl;
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
		cout << "Введите имя человека (такое же как и в консоли) которого хотите удалить - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if ((*emps[i]).getName() == delName)
			{
				cout << "Какую информацию вы хотите изменить у данного работника?(выберите цифру)" << endl;
				cout << "1.Имя" << endl << "2.Дату рождения " << endl << "3.Пол " << endl << "4.Опыт работы " << endl;
				int choose;
				cin >> choose;
				if (choose == 1)
				{
					cout << "Введите изменённое имя - ";
					string chName;
					cin >> chName;
					(*emps[i]).setName(chName);
				}
				else if (choose == 2)
				{
					cout << "Введите изменённую дату рождение(в формате dd mm yyyy) - ";
					int d, m, y;
					cin >> d >> m >> y;
					(*emps[i]).setBdate(d, m, y);
				}
				else if(choose == 3)
				{
					cout << "Введите изменённый пол(1 мужской, 0 женский) - ";
					bool chGender;
					cin >> chGender;
					(*emps[i]).setGender(chGender);
				}
				else if (choose == 4)
				{
					cout << "Введите изменённый опыт работы(в годах) - ";
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
		cout << "Введите имя человека (такое же как и в консоли) которого хотите удалить - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if ((*emps[i]).getName() == delName)
			{
				cout << "Какую информацию вы хотите изменить у данного работника?(выберите цифру)" << endl;
				cout << "1.Имя" << endl << "2.Дату рождения " << endl << "3.Пол " << endl << "4.Опыт работы " << endl;
				int choose;
				cin >> choose;
				if (choose == 1)
				{
					cout << "Введите изменённое имя - ";
					string chName;
					cin >> chName;
					(*emps[i]).setName(chName);
				}
				else if (choose == 2)
				{
					cout << "Введите изменённую дату рождение(в формате dd mm yyyy) - ";
					int d, m, y;
					cin >> d >> m >> y;
					(*emps[i]).setBdate(d, m, y);
				}
				else if (choose == 3)
				{
					cout << "Введите изменённый пол(1 мужской, 0 женский) - ";
					bool chGender;
					cin >> chGender;
					(*emps[i]).setGender(chGender);
				}
				else if (choose == 4)
				{
					cout << "Введите изменённый опыт работы(в годах) - ";
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
		cout << "Введите имя человека (такое же как и в консоли) которого хотите удалить - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if ((*emps[i]).getName() == delName)
			{
				cout << "Какую информацию вы хотите изменить у данного работника?(выберите цифру)" << endl;
				cout << "1.Имя" << endl << "2.Дату рождения " << endl << "3.Пол " << endl << "4.Опыт работы " << endl;
				int choose;
				cin >> choose;
				if (choose == 1)
				{
					cout << "Введите изменённое имя - ";
					string chName;
					cin >> chName;
					(*emps[i]).setName(chName);
				}
				else if (choose == 2)
				{
					cout << "Введите изменённую дату рождение(в формате dd mm yyyy) - ";
					int d, m, y;
					cin >> d >> m >> y;
					(*emps[i]).setBdate(d, m, y);
				}
				else if (choose == 3)
				{
					cout << "Введите изменённый пол(1 мужской, 0 женский) - ";
					bool chGender;
					cin >> chGender;
					(*emps[i]).setGender(chGender);
				}
				else if (choose == 4)
				{
					cout << "Введите изменённый опыт работы(в годах) - ";
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
		cout << "Введите имя человека (такое же как и в консоли) которого хотите удалить - ";
		string delName;
		cin >> delName;
		for (size_t i = 0; i < emps.size(); i++)
		{
			if ((*emps[i]).getName() == delName)
			{
				cout << "Какую информацию вы хотите изменить у данного работника?(выберите цифру)" << endl;
				cout << "1.Имя" << endl << "2.Дату рождения " << endl << "3.Пол " << endl << "4.Опыт работы " << endl;
				int choose;
				cin >> choose;
				if (choose == 1)
				{
					cout << "Введите изменённое имя - ";
					string chName;
					cin >> chName;
					(*emps[i]).setName(chName);
				}
				else if (choose == 2)
				{
					cout << "Введите изменённую дату рождение(в формате dd mm yyyy) - ";
					int d, m, y;
					cin >> d >> m >> y;
					(*emps[i]).setBdate(d, m, y);
				}
				else if (choose == 3)
				{
					cout << "Введите изменённый пол(1 мужской, 0 женский) - ";
					bool chGender;
					cin >> chGender;
					(*emps[i]).setGender(chGender);
				}
				else if (choose == 4)
				{
					cout << "Введите изменённый опыт работы(в годах) - ";
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
	cout << "Наименование организации: " << name << "\n----------\n";
	for (size_t i = 0; i < emps.size(); i++)
	{
		string res = typeid(*emps[i]).name();
		cout << res.substr(6) << endl;
		emps[i]->info();
		cout << "\nзарплата:" << emps[i]->getCoef()*salary
			<< " тенге\n------\n";
	}

}
