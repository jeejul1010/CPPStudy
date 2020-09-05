#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

namespace COMP_POS
{
	enum {
		CLERK, SENIOR, ASSIST, MANAGER
	};
}

class NameCard
{
private:
	char* name;
	char* companyName;
	char* phoneNum;
	int rank;
public:
	NameCard(const char* _name, const char* _companyName, const char* _phoneNum, int _rank)
		:rank(_rank)
	{
		int namelen = strlen(_name) + 1;
		name = new char[namelen];
		strcpy(name, _name);

		int companylen = strlen(_companyName) + 1;
		companyName = new char[companylen];
		strcpy(companyName, _companyName);

		int phonelen = strlen(_phoneNum) + 1;
		phoneNum = new char[phonelen];
		strcpy(phoneNum, _phoneNum);

	}

	void ShowNameCardInfo()
	{
		cout << "이름: " << name << endl;
		cout << "회사: " << companyName << endl;
		cout << "전화번호: " << phoneNum << endl;

		char rankName[5];

		switch (rank)
		{
		case COMP_POS::CLERK:
			strcpy(rankName, "사원");
			break;
		case COMP_POS::SENIOR:
			strcpy(rankName, "주임");
			break;
		case COMP_POS::ASSIST:
			strcpy(rankName, "대리");
			break;
		case COMP_POS::MANAGER:
			strcpy(rankName, "과장");
			break;
		}
		cout << "직급: " << rankName << endl<<endl;
	}
};

int main()
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}