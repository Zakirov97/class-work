#pragma once
#include "Student.h"
#include <iostream>
#include <fstream>
#include <iterator>
class Group
{
	vector<Student> st;
	int numberOfGroup;
	string group_name;
	int student_id;
public:
	void deleteStudent(int student_id);
	void addStudent(Student st);
	int getNumberOfGroup() { return numberOfGroup; };
	vector<Student> &getStudents() { return st; };
	void addMarkToStudent(Student &s, int mark);
	Group();
	Group(vector<Student> st);
	~Group();
	void saveToFile();
	friend ostream& operator<<(ostream &out, Student &st);
};

ostream& operator<<(ostream &out,  Group &gr);
