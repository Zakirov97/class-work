#pragma once
#include "Student.h"
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
class Group
{
	vector<Student> st;
	vector<Group> gr;
	string groupName;
	int student_id;
public:
	void deleteStudent(int student_id);
	void addStudent(Student st);
	void setGroupName(string groupName);
	string getGroupName() { return groupName; }
	vector<Student> &getStudents() { return st; };
	void addMarkToStudent(Student &s, int mark);
	void setGroup(vector<Group> &gr);

	Group();
	Group(string groupName);
	Group(string groupName, vector<Student> st);
	void saveToFile();
	void readFromFile();
	void readFromFile(string s);
	friend ostream& operator<<(ostream &out, Group &gr);
};