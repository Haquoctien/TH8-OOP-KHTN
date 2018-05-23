#pragma once
#include "Book.h"
class Textbook :
	public Book
{
private:
	string subject;
public:
	Textbook();
	~Textbook();
	void input();
	void output();
};

