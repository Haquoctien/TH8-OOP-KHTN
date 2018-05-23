#pragma once
#include "Polygon.h"
class Triangle :
	public Polygon
{
private:
	Point vertices[3];
public:
	Triangle();
	~Triangle();
	void input();
	void output();
};

