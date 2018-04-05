#include "EmployeeClass.h"



EmployeeClass::EmployeeClass()
{
}


EmployeeClass::~EmployeeClass()
{
}

EmployeeClass::EmployeeClass(int _id, int _salary, std::string _firstName, std::string _lastName)
{
	id = _id;
	salary = _salary;
	firstName = _firstName;
	lastName = _lastName;
}

int EmployeeClass::getId()
{
	return id;
}

std::string EmployeeClass::getFirstName()
{
	return firstName;
}

std::string EmployeeClass::getLastName()
{
	return lastName;
}

std::string EmployeeClass::getName()
{
	return firstName + lastName;
}

int EmployeeClass::getSalary()
{
	return salary;
}

void EmployeeClass::setSalary(int _salary)
{
	salary = _salary;
}

int EmployeeClass::getAnnualSalary()
{
	return salary * 12;
}

int EmployeeClass::raiseSalary(int _percent)
{
	return salary + ((salary / 100) * _percent);
}

std::string EmployeeClass::toString()
{
	std::string s1, s2;
	s1 = std::to_string(id);
	s2 = std::to_string(salary);
	return s1 + ' ' + firstName + ' ' + lastName + ' ' + s2 ;
}
