#include "Quadrangle.h"



Quadrangle::Quadrangle()
{
}


Quadrangle::~Quadrangle()
{
}

void Quadrangle::input()
{
	N = 4;
	Polygon::vertices = vertices;
	vertices[0].input();
	vertices[1].input();
	vertices[2].input();
	vertices[3].input();
}

void Quadrangle::output()
{
	cout << "Xuat hinh tu giac: ";
	Polygon::output();
}
