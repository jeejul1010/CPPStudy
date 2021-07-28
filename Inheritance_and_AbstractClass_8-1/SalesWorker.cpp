#include "SalesWorker.h"
#include <iostream>

using namespace std;

SalesWorker::SalesWorker(const char* name, int money, double ratio)
	:PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
{

}
void SalesWorker::addSalesResult(int value)
{
	salesResult += value;
}
int SalesWorker::getPay() const
{
	return PermanentWorker::getPay() + (int)(salesResult * bonusRatio);
}
void SalesWorker::showSalaryInfo() const
{
	showYourName();
	cout << "salary: " << getPay() << endl << endl;

}
