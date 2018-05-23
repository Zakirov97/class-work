#include "Student.h"
#include "Group.h"



vector<int> Student::getMarks() const
{
	return mark;
}

void Student::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void Student::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Student::setGroup(string group)
{
	this->group = group;
}

void Student::setGender(bool gender)
{
	this->gender = gender;
}

void Student::setID(int ID)
{
	this->ID = ID;
}

void Student::setPhone(int phone)
{
	this->phone = phone;
}

void Student::setMark(int mark)
{
	this->mark.push_back(mark);
}

Student::Student()
{
}

Student::Student(string firstName, string lastName, string group, bool gender, int ID, int phone)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->group = group;
	this->gender = gender;
	this->ID = ID;
	this->phone = phone;
}


Student::~Student()
{
}

ostream & operator<<(ostream & out, const Student & st)
{
	out << st.firstName << ' ' << st.lastName << ' ' << st.group << ' ' << endl;
	if (st.gender)
		out << "Man" << endl;
	else
		out << "Female" << endl;
	out << "ID: " << st.ID << endl;
	out << "Phone: " << st.phone << ' ' << endl << "Marks: ";
	for (int i = 0; i < st.getMarks().size(); i++)
	{
		out << st.mark[i] << ' ';
	}
	out << endl;
	return out;
}