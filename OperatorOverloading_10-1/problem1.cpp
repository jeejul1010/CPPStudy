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
	Point operator-(const Point& ref)
	{
		Point pos(xpos - ref.xpos, ypos - ref.ypos);
		cout << "method call" << endl;
		return pos;
	}
	friend Point operator-(const Point& ref1, const Point& ref2);
};

Point operator-(const Point& ref1, const Point& ref2)
{
	Point pos(ref1.xpos - ref2.xpos, ref1.ypos - ref2.ypos);
	cout << "global call" << endl;
	return pos;
}


//int main(void)
//{
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	Point pos3 = pos1-pos2;
//	pos1.showPosition();
//	pos2.showPosition();
//	pos3.showPosition();
//
//	return 0;
//}