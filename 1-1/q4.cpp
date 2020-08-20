#include <iostream>

int main()
{
	while (1)
	{
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		int sales;
		std::cin >> sales;
		if (sales != -1)
		{
			sales = 50 + sales * 0.12;
			std::cout << "이번 달 급여: " << sales << "만원" << std::endl;

		}
		else
		{
			std::cout << "프로그램을 종료합니다." << std::endl;
			break;
		}
	}

}