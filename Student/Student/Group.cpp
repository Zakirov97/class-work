#include "Group.h"
#include <iostream>


void Group::deleteStudent(int student_id)
{
	st.erase(st.begin() + student_id);

}

void Group::addStudent(Student st)
{
	this->st.push_back(st);
}
//
//void Group::addMarkToStudent(Student &s, int markk)
//{
//	s.setMark(markk);
//}

Group::Group()
{
	st;
	numberOfGroup = 0;
	group_name = "NoName";
}

Group::Group(vector<Student> st)
{
	this->st = st;
}

Group::~Group()
{
}

void Group::saveToFile() 
{
	vector<string> str;
	for (int i = 0; i < st.size(); i++)
	{
		string str2 = st[i].codeInfo();
		str.push_back(str2);
	}
	fstream f("group.csv", std::ios::out);
	ostream_iterator<string> out(f,"\n");
	copy(str.begin(), str.end(), out);
	
	f.close();

}

//ostream & operator<<(ostream & out,  Group &gr)
//{
//	for (int i = 0; i < gr.getStudents().size(); i++)
//	{
//		out << gr.getStudents()[i] << endl;
//	}
//	return out;
//}
//
