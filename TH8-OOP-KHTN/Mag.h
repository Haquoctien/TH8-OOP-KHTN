#pragma once
#include "Book.h"
class Mag :
	public Book
{
private:
	string date;
	unsigned issue;
public:
	Mag();
	~Mag();
	void input();
	void output();
};

