#pragma once
#include "Point.h"
#include "Vector.h"
#include <iostream>
using namespace std;

class Polygon
{
protected:
	Point* vertices;
	unsigned N;
public:
	Polygon();
	virtual ~Polygon();
	virtual void input() = 0;
	virtual void output();
	virtual void translateBy(Vector &);
};

