#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Student
{
	string firstName;
	string lastName;
	string group;
	bool gender;
	int ID;
	int phone;
	vector<int> mark;
public:
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setGroup(string group);
	void setGender(bool gender);
	void setID(int ID);
	void setPhone(int phone);
	void setMark(int mark);


	string getFirstName()const { return firstName; };
	string getLastName()const { return lastName; };
	string getGroup()const { return group; };
	bool getGender()const { return gender; };
	int getID()const { return ID; };
	int getPhone()const { return phone; };
	vector<int> getMarks() const;

	Student();
	Student(string firstName, string lastName, string group, bool gender, int ID, int phone);
	~Student();
	friend ostream& operator<<(ostream &out, const Student &st);
};

ostream& operator<<(ostream &out, const Student &st);

