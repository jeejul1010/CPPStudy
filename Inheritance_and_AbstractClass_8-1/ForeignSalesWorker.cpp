#include "ForeignSalesWorker.h"
#include <iostream>

using namespace std;

ForeignSalesWorker::ForeignSalesWorker(const char* name, int money, double ratio, int risklevel)
	: SalesWorker(name, money, ratio), risklevel(risklevel)
{

}

int ForeignSalesWorker::getPay() const
{
	return SalesWorker::getPay() + getRiskPay();
}

int ForeignSalesWorker::getRiskPay() const
{
	return SalesWorker::getPay() * (double(risklevel) / 100);
}

void ForeignSalesWorker::showSalaryInfo() const
{
	showYourName();
	cout << "salary: " << SalesWorker::getPay() << endl;
	cout << "risk pay: " << getRiskPay() << endl;
	cout << "sum: " << getPay() << endl << endl;
}
