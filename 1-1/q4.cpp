#include <iostream>

int main()
{
	while (1)
	{
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		int sales;
		std::cin >> sales;
		if (sales != -1)
		{
			sales = 50 + sales * 0.12;
			std::cout << "�̹� �� �޿�: " << sales << "����" << std::endl;

		}
		else
		{
			std::cout << "���α׷��� �����մϴ�." << std::endl;
			break;
		}
	}

}