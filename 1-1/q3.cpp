#include <iostream>

int main()
{
	std::cout << "������ �� ���� ����ұ��? ";
	int num;
	std::cin >> num;

	for (int i = 1; i < 10; i++)
	{
		std::cout << num << " * " << i << " = " << num * i << std::endl;
	}
}