#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(NULL)); //매번 다른 시드값 생성

	int random = 0; //정수형 변수 선언

	for (int i = 0; i < 5; i++)
	{
		random = rand() % 100; //난수 생성
		cout << random << ' ';
	}
	cout << endl;

	return 0;
}
