#pragma once
#include <iostream>
#include <string>
using namespace std;
class Book
{
protected:
	string id, title, type;
	unsigned Npage, quantity;
public:
	Book();
	virtual ~Book();
	virtual void input();
	virtual void output();
};

