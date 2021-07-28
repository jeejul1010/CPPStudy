#pragma once
#include "PermanentWorker.h"
class SalesWorker: public PermanentWorker
{
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(const char* name, int money, double ratio);
	void addSalesResult(int value);
	int getPay() const;
	void showSalaryInfo() const;


};

