#include "Vector.h"



Vector::Vector()
{
}


Vector::~Vector()
{
}

float Vector::length()
{
	return sqrt(x*x + y*y);
}
