#pragma once
const int MAX = 100;
class Employee
{
private:
	char name[MAX];
public:
	Employee(const char* name);
	void showYourName() const;
	virtual int getPay() const = 0;
	virtual void showSalaryInfo() const = 0;
};

