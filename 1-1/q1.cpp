#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cout << i + 1 << "��° ���� �Է�: ";
        int input;
        std::cin >> input;
        sum += input;

    }
    std::cout << "�հ�: " << sum << std::endl;

}