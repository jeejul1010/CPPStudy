#ifndef __Calculator_h__
#define __Calculator_h__
class Calculator
{
private:
	int addCount;
	int minCount;
	int mulCount;
	int divCount;
public:
	void Init();
	float Add(float a, float b);
	float Min(float a, float b);
	float Mul(float a, float b);
	float Div(float a, float b);
	void ShowOpCount();

};

inline void Calculator::Init()
{
	addCount = 0;
	minCount = 0;
	mulCount = 0;
	divCount = 0;
}

#endif

