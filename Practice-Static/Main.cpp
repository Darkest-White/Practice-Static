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

	int get_id()
	{
		return ID;
	}
};
int Point::Count = 0;


int main()
{
	Point p1(10, 10);
	Point p2(20, 20);
	Point p3(30, 30);

	cout << p1.get_id() << endl;
	cout << p2.get_id() << endl;
	cout << p3.get_id() << endl;

	cout << Point::get_Count() << endl;
}