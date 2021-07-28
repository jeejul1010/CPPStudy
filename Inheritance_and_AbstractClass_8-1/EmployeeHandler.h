#pragma once
#include "Employee.h"
const int MAXNUM = 50;

class EmployeeHandler
{
private:
	Employee* empList[MAXNUM];
	int empNum;
public:
	EmployeeHandler();
	void addEmployee(Employee* emp);
	void showAllSalaryInfo() const;
	void showTotalSalary() const;
	~EmployeeHandler();
};

