#include "Student.h"
#include "Group.h"
#include <map>
void interfaceAddStudent(Group &gr);
void interfaceDeleteStudent(Group &gr);
void menu(Group &gr);

void interfaceAddStudent(Group &gr)
{
	string str1;
	cout << "Введите имя студента - ";
	cin >> str1;

	string str2;
	cout << "Введите фамилию студента - ";
	cin >> str2;

	string str3;
	cout << "Введите имя группы - ";
	cin >> str3;

	bool bool1;
	cout << "Введите пол студента.(1 = мужчина, 0 = женщина) - ";
	cin >> bool1;

	int int2;
	cout << "Введите номер телефона студента - ";
	cin >> int2;
	Student newStudent = { str1,str2,str3,bool1,int2 };
	gr.addStudent(newStudent);
	cout << "Студент добавлен";
	system("pause");
	system("cls");
	menu(gr);
}
void interfaceDeleteStudent(Group &gr)
{
	int id;
	cout << gr;
	cout << "Введите ID удаляемого студента - ";
	cin >> id;
	for (int i = 0; i < gr.getStudents().size(); i++)
	{
		if (id == gr.getStudents()[i].getID())
		{
			gr.deleteStudent(i);
		}
	}
	cout << "Выбранный студент удалён.";
	system("pause");
	system("cls");
	menu(gr);
}
void interfaceAddMark(Group &gr)
{
	cout << "1.Поставить оценки всем студентам по очереди" << endl;
	cout << "2.Поставить оценкe одному студенту" << endl;
	cout << "3.Вернуться в главное меню;" << endl;
	int num;
	cin >> num;
	if (num == 1)
	{
		for (int i = 0; i < gr.getStudents().size(); i++)
		{
			cout << gr.getStudents()[i];
			int mark;
			cout << "Введите оценку ";
			cin >> mark;
			gr.addMarkToStudent(gr.getStudents()[i], mark);
		}
	}
	else if (num == 2)
	{
		int id;
		cout << gr;
		cout << "Введите ID студента которому хотите поставить оценку- ";
		cin >> id;
		for (int i = 0; i < gr.getStudents().size(); i++)
		{
			if (id == gr.getStudents()[i].getID())
			{
				int mark;
				cout << "Введите оценку ";
				cin >> mark;
				gr.addMarkToStudent(gr.getStudents()[i], mark);
			}
		}
	}
	else if (num == 3)
		return;
	system("pause");
	system("cls");
	menu(gr);
}
void menu(Group &gr)
{
	int menu_int = -1;
	while (menu_int != 0)
	{
		setlocale(0, "");
		system("cls");
		cout << "Меню: " << endl;
		cout << "1. Создать студента " << endl;
		cout << "2. Удалить студента " << endl;
		cout << "3. Поставить оценки " << endl;
		cout << "4. Вывести информацию о всей группе " << endl;
		cout << "5. Завершить работу " << endl;
		cin >> menu_int;
		if (menu_int == 1)
			interfaceAddStudent(gr);
		if (menu_int == 2)
			interfaceDeleteStudent(gr);
		if (menu_int == 3)
			interfaceAddMark(gr);
		if (menu_int == 4)
		{
			system("cls");
			cout << gr;
			system("pause");
		}
		if (menu_int == 5)
			return;
	}
}
void YouShallNotPass()
{
	ifstream f("YouShallNotPass.txt");
	map<string, int> m;
	while (!f.eof())
	{
		string key, value;
		getline(f, key, ';');
		getline(f, value, ';');
		if (key.size() <= 0)
			break;
		else
			m.insert(make_pair(key, stoi(value)));
	}
	string login;
	int password;
	while (1)
	{

		cout << "Login - ";
		cin >> login;
		cout << "\nPassword - ";
		cin >> password;
		map<string, int>::iterator it;
		it = m.find(login);
		if (it->first == login)
		{
			if (it->second = password)
			{
				return;
			}
			else
			{
				while (password != it->second)
				{
					cout << "\nWrong password try again" << endl;
					cin >> password;
				}
				return;
			}
		}
		else
		{
			cout << "Login is not found" << endl;
		}

	}

}
int main()
{
	//vector<int> v;
	//Student st1 = { "dias", "zakirov", "smb 172.2", 1, 877712, v};
	//Student st2 = { "kaisar", "erdenbekov", "smb 172.2", 1, 123456 };
	//Student st3 = { "asfaf", "asdfasdf", "smb 172.2", 0, 141245 };
	//Student st4 = { "lolipop", "pony", "smb 172.2", 1, 666666 };
	//Student st5 = { "lolipop2", "pony2", "smb 172.2", 1, 23213 };
	//gr.addStudent(st1);
	//gr.addStudent(st2);
	//gr.addStudent(st3);
	//gr.addStudent(st4);
	//gr.addStudent(st5);
	//YouShallNotPass(); check login and password

	Group gr("smb 172.2");
	gr.readFromFile();
	menu(gr);
	gr.saveToFile();
	return 0;
}
