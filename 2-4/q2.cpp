#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(NULL)); //�Ź� �ٸ� �õ尪 ����

	int random = 0; //������ ���� ����

	for (int i = 0; i < 5; i++)
	{
		random = rand() % 100; //���� ����
		cout << random << ' ';
	}
	cout << endl;

	return 0;
}
