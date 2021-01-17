#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* _name, int _age)
	{
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
		age = _age;

	}
	~MyFriendInfo()
	{
		delete []name;
	}
	void ShowMyFriendInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;

	}
};

class MyFriendDetailInfo :public MyFriendInfo
{
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* _name, int _age, const char* _addr, const char* _phone):MyFriendInfo(_name, _age)
	{
		addr = new char[strlen(_addr) + 1];
		phone = new char[strlen(_phone) + 1];
		strcpy(addr, _addr);
		strcpy(phone, _phone);
	}
	~MyFriendDetailInfo()
	{
		delete[]addr;
		delete[]phone;
	}
	
	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소: " << addr << endl;
		cout << "전화: " << phone << endl << endl;
	}
};

int main()
{
	MyFriendDetailInfo myFriend("Hong", 23, "Seoul", "010-1234-5678");
	myFriend.ShowMyFriendDetailInfo();
	return 0;
}