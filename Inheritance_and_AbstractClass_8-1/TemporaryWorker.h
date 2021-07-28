#pragma once
#include "Employee.h"

class TemporaryWorker: public Employee
{
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(const char* name, int pay);
	void addWorkTime(int time);
	int getPay() const;
	void showSalaryInfo() const;
};

