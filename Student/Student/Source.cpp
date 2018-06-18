#include "Student.h"
#include "Group.h"
#include <map>
#include <algorithm>
void interfaceAddStudent(Group &gr);
void interfaceDeleteStudent(Group &gr);
void interfaceAddMark(Group &gr);
void interfaceAddGroup();
void interfaceDeleteGroup();
void interfaceChooseGroup();
void YouShallNotPass();
void menu(Group &gr);

void interfaceAddStudent(Group &gr)
{
	string str1;
	cout << "������� ��� �������� - ";
	cin >> str1;

	string str2;
	cout << "������� ������� �������� - ";
	cin >> str2;

	bool bool1;
	cout << "������� ��� ��������.(1 = �������, 0 = �������) - ";
	cin >> bool1;

	int int2;
	cout << "������� ����� �������� �������� - ";
	cin >> int2;
	Student newStudent = { str1,str2,gr.getGroupName(),bool1,int2 };
	gr.addStudent(newStudent);
	cout << "������� ��������";
	system("pause");
	system("cls");
	menu(gr);
}
void interfaceDeleteStudent(Group &gr)
{
	int id;
	cout << gr;
	cout << "������� ID ���������� �������� - ";
	cin >> id;
	for (int i = 0; i < gr.getStudents().size(); i++)
	{
		if (id == gr.getStudents()[i].getID())
		{
			gr.deleteStudent(i);
		}
	}
	cout << "��������� ������� �����.";
	system("pause");
	system("cls");
	menu(gr);
}
void interfaceAddMark(Group &gr)
{
	cout << "1.��������� ������ ���� ��������� �� �������" << endl;
	cout << "2.��������� �����e ������ ��������" << endl;
	cout << "3.��������� � ������� ����;" << endl;
	int num;
	cin >> num;
	if (num == 1)
	{
		for (int i = 0; i < gr.getStudents().size(); i++)
		{
			cout << gr.getStudents()[i];
			int mark;
			cout << "������� ������ ";
			cin >> mark;
			gr.addMarkToStudent(gr.getStudents()[i], mark);
		}
	}
	else if (num == 2)
	{
		int id;
		cout << gr;
		cout << "������� ID �������� �������� ������ ��������� ������- ";
		cin >> id;
		for (int i = 0; i < gr.getStudents().size(); i++)
		{
			if (id == gr.getStudents()[i].getID())
			{
				int mark;
				cout << "������� ������ ";
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

void interfaceAddGroup()
{

	cout << "�������� �������� ��� ����� ������ - ";
	string nameGroup;
	cin >> nameGroup;
	if (nameGroup.size() == 0)
		while (nameGroup.size() < 0)
			cout << "�������� ������ ������� ��������!";

	nameGroup += ".txt";
	//Proverka na nalichie grupp s takim nazvaniem
	ifstream FCK("GROUPS.txt");
	vector<string> v;
	while (!FCK.eof())
	{
		string s = "";
		getline(FCK, s, ';');
		if (s != "")
			v.push_back(s);
	}
	FCK.close();
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == nameGroup)
		{
			cout << "����� ������ ��� �������, ���������� ������" << endl;
			system("pause");
			return;
		}
	}
	////
	fstream fGr(nameGroup, ios::out);
	cout << "1.�������� � ����� ������ ��������" << endl;
	cout << "2.�� ��������� ��������" << endl;
	int choose;
	cin >> choose;

	Group newGroup = Group(nameGroup);
	if (choose == 1)
	{
		interfaceAddStudent(newGroup);
	}
	ofstream f("GROUPS.txt");
	ostream_iterator<string> ff(f, ";");
	v.push_back(nameGroup);
	copy(v.begin(), v.end(), ff);
	f.close();
}
void interfaceDeleteGroup()
{
	vector<string> v;
	ifstream f("GROUPS.txt");
	while (!f.eof())
	{
		string s;
		getline(f, s, ';');
		if (s != "")
			v.push_back(s);
	}

	if (v.size() == 0)
	{
		cout << "�� ������ ������ ��� �����." << endl;
		system("pause");
		return;
	}

	cout << "�������� ����� ������ ������� ������ �������." << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << i << '.' << v[i] << endl;
	}

	int nameGroup;
	cin >> nameGroup;
	remove(v[nameGroup].c_str());
	v.erase(v.begin() + nameGroup);
	ofstream out("GROUPS.txt");
	ostream_iterator<string> os(out, ";");
	copy(v.begin(), v.end(), os);
	cout << "��������� ������ ���� �������" << endl;
	system("pause");
}
void interfaceChooseGroup()
{
	system("cls");
	ifstream IF("GROUPS.txt");
	vector<string> v;
	while (!IF.eof())
	{
		string s = "";
		getline(IF, s, ';');
		if (s != "")
			v.push_back(s);
	}
	IF.close();
	cout << "1.�������� ���� � ������" << endl;
	cout << "2.�������� ������" << endl;
	cout << "3.������� ������" << endl;
	cout << "9.��������� ������" << endl;
	int groupChoose;
	cin >> groupChoose;
	if (groupChoose == 1)
	{
		system("cls");
		cout << "� ����� ������ �� ������ �������� ����?(������� �����)" << endl;
		//for_each(v.begin(), v.end(), []() {});Kak sdelat erase dlya vseh elementov???
		for (int i = 0; i < v.size(); i++)
			v[i].erase(v[i].size() - 4);
		for (int i = 0; i < v.size(); i++)
			cout << i << '.' << v[i] << endl;
		int choose;
		cin >> choose;
		Group gr;
		gr.readFromFile(v[choose] + ".txt");
		menu(gr);
	}
	else if (groupChoose == 2)
	{
		interfaceAddGroup();
	}
	else if(groupChoose == 3)
	{
		interfaceDeleteGroup();
	}
	else if (groupChoose == 9)
	{
		return;
	}
}

void menu(Group &gr)
{
	int menu_int = -1;
	while (menu_int != 0)
	{
		setlocale(0, "");
		system("cls");
		cout << "����: " << endl;
		cout << "1. ������� �������� " << endl;
		cout << "2. ������� �������� " << endl;
		cout << "3. ��������� ������ " << endl;
		cout << "4. ������� ���������� � ���� ������ " << endl;
		cout << "5. ��������� ������ " << endl;
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
	system("chcp 1251");
	system("cls");
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
	YouShallNotPass(); //check login and password
	interfaceChooseGroup();//interface groups


	//Group gr("smb 172.2");
	//gr.readFromFile();
	//menu(gr);
	//gr.saveToFile();
	return 0;
}
