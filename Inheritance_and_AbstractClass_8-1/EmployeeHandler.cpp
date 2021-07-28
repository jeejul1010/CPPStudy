#include "EmployeeHandler.h"
#include <iostream>

using namespace std;

EmployeeHandler::EmployeeHandler():empNum(0)
{

}

void EmployeeHandler::addEmployee(Employee* emp)
{
	empList[empNum++] = emp;
}

void EmployeeHandler::showAllSalaryInfo() const
{
	for (int i = 0; i < empNum; i++)
	{
		empList[i]->showSalaryInfo();
	}
}

void EmployeeHandler::showTotalSalary() const
{
	int sum = 0;
	for (int i = 0; i < empNum; i++)
	{
		sum += empList[i]->getPay();
	}

	cout << "salary sum: " << sum << endl;
}

EmployeeHandler::~EmployeeHandler()
{
	for (int i = 0; i < empNum; i++)
	{
		delete empList[i];
	}
}
