#include "Student.h"
#include "Group.h"
void interfaceAddStudent(Group &gr);
void interfaceDeleteStudent(Group &gr);
void menu(Group &gr);

void interfaceAddStudent(Group &gr)
{
	string str1;
	cout << "Введите имя студента - " ;
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

	int int1;
	cout << "Введите ID студента - ";
	cin >> int1;

	int int2;
	cout << "Введите номер телефона студента - ";
	cin >> int2;
	Student newStudent = { str1,str2,str3,bool1,int1,int2 };
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
		if (id == gr.getStudents[i].getID())
		{
			gr.deleteStudent(gr.getStudents[i]());
		}
	}
	cout << "Выбранный студент удалён.";
	system("pause");
	system("cls");
	menu(gr);
}
void interfaceAddMark(Group &gr)
{
	int id;
	cout << gr;
	cout << "Введите ID студента которому хотите поставить оценку- ";
	cin >> id;
	for (int i = 0; i < gr.getStudents().size(); i++)
	{
		if (id == gr.getStudents[i].getID())
		{
			int mark;
			cout << "Введите оценку";
			cin >> mark;
			gr.addMarkToStudent(gr.getStudents[i](),mark);
		}
	}
	cout << "Выбранный студент удалён.";
	system("pause");
	system("cls");
	menu(gr);
}
void menu(Group &gr)
{
	system("cls");
	cout << "Меню: " << endl;
	cout << "1. Создать студента " << endl;
	cout << "2. Удалить студента " << endl;
	cout << "3. Добавить оценки " << endl;
	cout << "4. Вывести всю группу " << endl;
	cout << "5. Завершить работу " << endl;
	int menu_int = -1;
	while (menu_int != 0)
	{
		cin >> menu_int;
		if (menu_int == 1)
			interfaceAddStudent(gr);
		if (menu_int == 2)
			interfaceDeleteStudent(gr);
		if (menu_int == 3)
			interfaceAddMark(gr);
		if (menu_int == 4)
			cout << gr;
		if (menu_int == 5)
			menu_int = 0;
	}
}
int main()
{
	Student st1 = { "dias", "zakirov", "smb 172.2", 1, 1, 877712};
	Student st2 = { "kaisar", "erdenbekov", "smb 172.2", 1, 2, 123456 };
	Student st3 = { "asfaf", "asdfasdf", "smb 172.2", 0, 3, 141245 };
	Student st4 = { "11111", "1111111", "smb 172.2", 1, 4, 666666 };
	Group gr;
	gr.addStudent(st1);
	gr.addStudent(st2);
	gr.addStudent(st3);
	gr.addStudent(st4);
	//
	menu(gr);
	system("pause");
	return 0;
}
