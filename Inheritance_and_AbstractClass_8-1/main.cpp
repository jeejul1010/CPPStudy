#include <iostream>
#include "EmployeeHandler.h"
#include "ForeignSalesWorker.h"

using namespace std;

namespace RISK_LEVEL {
	enum ENUM
	{
		RISK_A = 30,
		RISK_B = 20,
		RISK_C = 10
		
	};
}

int main()
{
	EmployeeHandler handler;

	ForeignSalesWorker* fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
	fseller1->addSalesResult(7000);
	handler.addEmployee(fseller1);

	ForeignSalesWorker* fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
	fseller2->addSalesResult(7000);
	handler.addEmployee(fseller2);

	ForeignSalesWorker* fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
	fseller3->addSalesResult(7000);
	handler.addEmployee(fseller3);

	handler.showAllSalaryInfo();
	return 0;


}