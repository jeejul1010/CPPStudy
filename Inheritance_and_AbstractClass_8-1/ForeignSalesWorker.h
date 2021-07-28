#pragma once
#include "SalesWorker.h"
class ForeignSalesWorker: public SalesWorker
{
private:
	const int risklevel;
public:
	ForeignSalesWorker(const char* name, int money, double ratio, int risklevel);
	int getPay() const;
	int getRiskPay() const;
	void showSalaryInfo() const;
};

