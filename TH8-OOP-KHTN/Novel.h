#pragma once
#include "Book.h"
class Novel :
	public Book
{
private:
	string genre;
	string author;
public:
	Novel();
	~Novel();
	void input();
	void output();
};

