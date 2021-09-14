#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
	{ }
	void showPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point& operator+=(const Point& ref)
	{
		xpos += ref.xpos;
		ypos += ref.ypos;
		cout << "method call" << endl;
		return *this;
	}
	friend bool operator==(const Point& ref1, const Point& ref2);
	friend bool operator!=(const Point& ref1, const Point& ref2);
};

bool operator==(const Point& ref1, const Point& ref2)
{
	if (ref1.xpos == ref2.xpos && ref1.ypos == ref2.ypos)
	{
		return true;
	}
	return false;
}

bool operator!=(const Point& ref1, const Point& ref2)
{
	if (!(ref1==ref2))
	{
		return true;
	}
	return false;
}

int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point& pos3 = pos1 += pos2;
	if (pos1 == pos3)
	{
		cout << "1, 3 equal!!" << endl;
	} else if (pos1 != pos3)
	{
		cout << "1, 3 not equal!!" << endl;
	}

	if (pos1 == pos2)
	{
		cout << "1, 2 equal!!" << endl;
	}
	else if (pos1 != pos2)
	{
		cout << "1, 2 not equal!!" << endl;
	}
	pos1.showPosition();
	pos2.showPosition();
	pos3.showPosition();

	return 0;
}