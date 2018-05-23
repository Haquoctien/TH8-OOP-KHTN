#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
protected:
	float x, y;
public:
	Point();
	virtual ~Point();
	Point(float x, float y);
	void input();
	void ouput();
	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;
	}
	void setX(float x)
	{
		this->x = x;
	}
	void setY(float y)
	{
		this->y = y;
	}
	float distanceFrom(Point &);
};

