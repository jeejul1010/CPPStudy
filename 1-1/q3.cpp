#include <iostream>

int main()
{
	std::cout << "구구단 몇 단을 출력할까요? ";
	int num;
	std::cin >> num;

	for (int i = 1; i < 10; i++)
	{
		std::cout << num << " * " << i << " = " << num * i << std::endl;
	}
}