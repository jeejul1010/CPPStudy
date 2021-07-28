#include "TemporaryWorker.h"
#include <iostream>

using namespace std;

TemporaryWorker::TemporaryWorker(const char* name, int pay)
	:Employee(name), workTime(0), payPerHour(pay)
{

}

void TemporaryWorker::addWorkTime(int time)
{
	workTime += time;
}
int TemporaryWorker::getPay() const
{
	return workTime * payPerHour;
}
void TemporaryWorker::showSalaryInfo() const
{
	showYourName();
	cout << "salary: " << getPay() << endl << endl;
}
