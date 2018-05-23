#include "Triangle.h"



Triangle::Triangle()
{
}


Triangle::~Triangle()
{
}

void Triangle::input()
{
	N = 3;
	Polygon::vertices = vertices;
	cout << "Nhap lan luot ba dinh: " << endl;
	vertices[0].input();
	vertices[1].input();
	vertices[2].input();
}

void Triangle::output()
{
	cout << "Xuat tam giac: ";
	Polygon::output();
}
