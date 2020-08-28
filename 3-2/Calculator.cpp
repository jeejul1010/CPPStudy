#include <iostream>
#include "Calculator.h"
using std::cout;
using std::endl;


float Calculator::Add(float a, float b)
{
	addCount++;
	return a + b;

}

float Calculator::Min(float a, float b)
{
	minCount++;
	return a - b;
}

float Calculator::Mul(float a, float b)
{
	mulCount++;
	return a * b;
}

float Calculator::Div(float a, float b)
{
	divCount++;
	return a / b;
}

void Calculator::ShowOpCount()
{
	cout << "µ¡¼À: " << addCount << " »¬¼À: " << minCount << " °ö¼À: " << mulCount << " ³ª´°¼À: " << divCount << endl;
}
