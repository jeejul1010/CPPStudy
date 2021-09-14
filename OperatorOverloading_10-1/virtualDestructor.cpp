#include <iostream>
using namespace std;

class First
{
private:
	char* strOne;
public:
	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];
	}
	virtual void simpleFunc() const
	{
		cout << "first's simpleFunc()!!" << endl;
	}
	virtual ~First()
	{
		cout << "~First()" << endl;
		delete[]strOne;
	}
};

class Second : public First
{
private:
	char* strTwo;
public:
	Second(const char* str1, const char* str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}
	void simpleFunc() const
	{
		cout << "second's simpleFunc()!!" << endl;
	}
	~Second()
	{
		cout << "~Second()" << endl;
		delete[]strTwo;
	}
};

class Third : public Second
{
private:
	char* strThree;
public:
	Third(const char* str1, const char* str2, const char* str3) : Second(str1, str2)
	{
		strThree = new char[strlen(str3) + 1];
	}
	void simpleFunc() const
	{
		cout << "third's simpleFunc()!!" << endl;
	}
	~Third()
	{
		cout << "~Third()" << endl;
		delete[]strThree;
	}
};

void goodFunction(const First& ref)
{
	ref.simpleFunc();
	cout << "wow" << endl;

}

int main(void)
{
	Second* ptr = new Third("haha", "lolo", "nana");
	goodFunction(Third("mama", "papa", "hehe"));
	cout << "hahahha" << endl;
	delete ptr;
	return 0;
}