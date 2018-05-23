#pragma once
#include "Polygon.h"
class Quadrangle :
	public Polygon
{
private:
	Point vertices[4];
public:
	Quadrangle();
	~Quadrangle();
	void input();
	void output();
};

