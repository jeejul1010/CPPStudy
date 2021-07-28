#pragma once
#include "Employee.h"
class PermanentWorker: public Employee
{
private:
	int salary;
public:
	PermanentWorker(const char* name, int money);
	int getPay() const;
	void showSalaryInfo() const;
};

