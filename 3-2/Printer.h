#ifndef __Printer_h__
#define __Printer_h__

#define MAX 100

class Printer
{
private:
	//const char* sptr; �� ����� ��!
	char saveString[MAX];
public:
	void SetString(const char* inputString);
	void ShowString();
};

#endif

