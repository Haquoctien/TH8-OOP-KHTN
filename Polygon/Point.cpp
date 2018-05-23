#include "Point.h"



Point::Point()
{
	x = y = 0;
}


Point::~Point()
{
}

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Point::input()
{
	cout << "Nhap lan luot x, y: ";
	cin >> x >> y;
	cin.ignore();
}

void Point::ouput()
{
	cout << "(" << x << "," << y << ")  ";
}

float Point::distanceFrom(Point &other)
{
	return sqrt((x - other.x)*(x - other.x) + (y - other.y)*(y - other.y));
}
