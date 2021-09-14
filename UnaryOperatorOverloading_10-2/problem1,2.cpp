#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0):xpos(x), ypos(y)
	{ }
	void showPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point& operator-()
	{
		Point pos(-xpos, -ypos);
		return pos;
	}
	friend Point& operator~(const Point& ref);
};

Point& operator~(const Point& ref)
{
	Point pos(ref.ypos, ref.xpos);
	return pos;
}

int main(void)
{
	Point pos1(1, 2);
	Point pos2 = -pos1;
	Point pos3 = ~pos1;
	pos1.showPosition();
	pos2.showPosition();
	pos3.showPosition();

	int a = 3;
	int b;
	b = a--;
	cout << b << endl;
	cout << a << endl;
	return 0;
}