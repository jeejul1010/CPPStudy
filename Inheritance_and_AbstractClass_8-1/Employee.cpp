#include "Employee.h"
#include <iostream>
#include <string>

#pragma warning(disable:4996)

using namespace std;

Employee::Employee(const char* name)
{
	strcpy(this->name, name);
}
void Employee::showYourName() const
{
	cout << "name: " << name << endl;
}