#include "Polygon.h"



Polygon::Polygon()
{
	vertices = NULL;
}


Polygon::~Polygon()
{
}

void Polygon::output()
{
	for (int i = 0; i < N; i++)
		vertices[i].ouput();
	cout << endl;
}

void Polygon::translateBy(Vector &v)
{
	for (int i = 0; i < N; i++)
	{
		vertices[i].setX(vertices[i].getX() + v.getX());
		vertices[i].setY(vertices[i].getY() + v.getY());
	}
}
