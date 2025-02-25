#include "Student.h"
#include "Group.h"



vector<int> Student::getMarks() const
{
	return mark;
}

string Student::codeInfo()const
{
	string str;
	str = firstName + ";";
	str += lastName + ";";
	str += group + ";";
	str += std::to_string(gender) + ";";
	str += std::to_string(phone) + ";";
	for (int i = 0; i < getMarks().size(); i++)
	{
		str += std::to_string(getMarks()[i]);
	}
	str += ";";
	return str;
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
	if (this->mark[0] == 0)
		this->mark.erase(this->mark.begin());
	this->mark.push_back(mark);
	
}

Student::Student()
{
}

Student::Student(string firstName, string lastName, string group, bool gender, int phone)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->group = group;
	this->gender = gender;
	this->phone = phone;
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

Student::Student(string firstName, string lastName, string group, bool gender, int ID, int phone, vector<int> marks)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->group = group;
	this->gender = gender;
	this->ID = ID;
	this->phone = phone;
	for (int i = 0; i < marks.size(); i++)
	{
		this->mark.push_back(marks[i]);
	}
}

Student::Student(string firstName, string lastName, string group, bool gender, int phone, vector<int> marks)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->group = group;
	this->gender = gender;
	this->phone = phone;
	for (int i = 0; i < marks.size(); i++)
	{
		this->mark.push_back(marks[i]);
	}
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