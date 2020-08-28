#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>
#include "Printer.h"
using namespace std;

void Printer::SetString(const char* inputString)
{
	strcpy(saveString, inputString);
}

void Printer::ShowString()
{
	cout << saveString << endl;
}
