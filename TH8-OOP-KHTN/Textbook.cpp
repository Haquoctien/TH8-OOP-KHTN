#include "Textbook.h"



Textbook::Textbook()
{
	subject = "Chua nhap";
}


Textbook::~Textbook()
{
}

void Textbook::input()
{
	Book::input();
	type = "SGK";
	cout << "Nhap mon sach giao khoa: ";
	getline(cin, subject);
}

void Textbook::output()
{
	Book::output();
	cout << "Mon: " << subject << endl;
}
