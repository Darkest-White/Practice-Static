#include<iostream>
using namespace std;


class Point
{
private:

	int x, y;

	int ID;

	static int Count;

public:

	Point(int x, int y)
	{
		this->x = x;
		this->y = y;

		Count++;

		ID = Count;
	}

	static int get_Count()
	{
		return Count;
	}

	static int get_id(Point& point)
	{
		return point.ID;
	}

	void print_coord()
	{
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};
int Point::Count = 0;


int main()
{
	Point p1(10, 10);
	Point p2(20, 20);
	Point p3(30, 30);

	cout << Point::get_id(p1) << endl;
	cout << Point::get_id(p2) << endl;
	cout << Point::get_id(p3) << endl;

	cout << Point::get_Count() << endl;
}