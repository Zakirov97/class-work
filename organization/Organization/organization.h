#pragma once
#include "employee.h"
#include <vector>
#include <string>
#include <memory>
#include "admin.h"
#include "developer.h"
#include "saler.h"
#include "anykey.h"
#include "date_.h"
using namespace std;

class organization {
	double salary;
	string name;
	vector<auto_ptr<employee>> emps;
public:
	string getName(string name) const;
	double wageRequirements();
	void addEmployee(employee* emp);
	void deleteEmployee();
	void changeInfo();
	void getInfo()const;
	organization(string name, double salary);
};