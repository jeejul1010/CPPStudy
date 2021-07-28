#include "PermanentWorker.h"
#include <iostream>

using namespace std;

PermanentWorker::PermanentWorker(const char* name, int money)
	: Employee(name), salary(money)
{

}

int PermanentWorker::getPay() const
{
	return salary;
}

void PermanentWorker::showSalaryInfo() const
{
	showYourName();
	cout << "salary: " << getPay() << endl << endl;
}