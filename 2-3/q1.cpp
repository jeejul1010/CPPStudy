#include <iostream>

using std::cout;
using std::endl;

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* p = new Point;
	p->xpos = p1.xpos + p2.xpos;
	p->ypos = p1.ypos + p2.ypos;

	return *p;
}

int main()
{
	Point* p1 = new Point;
	p1->xpos = 5;
	p1->ypos = 3;

	Point* p2 = new Point;
	p2->xpos = 6;
	p2->ypos = 2;

	Point& p3 = PntAdder(*p1, *p2);

	cout << "두점의 합은: (" << p3.xpos << ", " << p3.ypos<<")" << endl;

	delete p1;
	delete p2;
	delete &p3;
	return 0;
}