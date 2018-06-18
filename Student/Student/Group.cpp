#include "Group.h"


void Group::deleteStudent(int student_id)
{
	st.erase(st.begin() + student_id);
}

void Group::addStudent(Student st)
{
	this->st.push_back(st);
}

void Group::setGroupName(string groupName)
{
	this->groupName = groupName;
}

void Group::addMarkToStudent(Student &s, int markk)
{
	s.setMark(markk);
}

void Group::setGroup(vector<Group>& gr)
{
	
}

Group::Group()
{
}

Group::Group(string groupName)
{
	this->groupName = groupName;
}

Group::Group(string groupName, vector<Student> st)
{
	this->groupName = groupName;
	this->st = st;
}

void Group::saveToFile()
{
	vector<string> str;

	for (int i = 0; i < st.size(); i++)
	{
		string str2 = st[i].codeInfo();
		str.push_back(str2);
	}
	fstream f("group1.txt", std::ios::out);
	ostream_iterator<string> out(f);
	copy(str.begin(), str.end(), out);
	f.close();
}

void Group::readFromFile()
{
	int temp = 0;
	ifstream f("group1.txt");
	while (!f.eof())
	{
		string ffirstName, llastName, ggroupName, ggender, pphone, marks;
		
		getline(f, ffirstName, ';');
		getline(f, llastName, ';');
		getline(f, ggroupName, ';');
		getline(f, ggender, ';');
		getline(f, pphone, ';');
		getline(f, marks, ';');
		vector<int> v;
		if (ffirstName.size() > 0)
		{
			for (int i = 0; i < marks.size(); i++)
			{
				string st;
				st = marks[i];
				v.push_back(stoi(st));
			}
			st.push_back(Student(ffirstName, llastName, ggroupName, stoi(ggender), temp, stoi(pphone), v));
		}
		temp++;
	}
	f.close();
}

void Group::readFromFile(string str)
{
	int temp = 0;
	ifstream f(str);
	while (!f.eof())
	{
		string ffirstName, llastName, ggroupName, ggender, pphone, marks;

		getline(f, ffirstName, ';');
		getline(f, llastName, ';');
		getline(f, ggroupName, ';');
		getline(f, ggender, ';');
		getline(f, pphone, ';');
		getline(f, marks, ';');
		vector<int> v;
		if (ffirstName.size() > 0)
		{
			for (int i = 0; i < marks.size(); i++)
			{
				string st;
				st = marks[i];
				v.push_back(stoi(st));
			}
			st.push_back(Student(ffirstName, llastName, ggroupName, stoi(ggender), temp, stoi(pphone), v));
		}
		temp++;
	}
	f.close();
}

ostream & operator<<(ostream & out, Group &gr)
{
	cout << "Название группы - " << gr.getGroupName() << endl << endl;
	for (int i = 0; i < gr.getStudents().size(); i++)
	{
		out << gr.getStudents()[i].getFirstName() << ' ' << gr.getStudents()[i].getLastName() << '\n';
		if (gr.getStudents()[i].getGender())
			cout << "Мужской пол" << ' ';
		else
			cout << "Женский пол" << ' ';
		cout << "\nТелефон " << gr.getStudents()[i].getPhone() << '\n' << "ID " << gr.getStudents()[i].getID() << endl;
		cout << "Оценки: ";
		if (gr.getStudents()[i].getMarks()[0] != 0)
			for (int j = 0; j < gr.getStudents()[i].getMarks().size(); j++)
				cout << gr.getStudents()[i].getMarks()[j] << ' ';
		else
			cout << "оценок нет";
		cout << endl;
		cout << endl;

	}
	return out;
}

