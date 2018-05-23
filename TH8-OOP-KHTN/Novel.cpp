#include "Novel.h"



Novel::Novel()
{
	genre = author = "Chua nhap";
}


Novel::~Novel()
{
}

void Novel::input()
{
	Book::input();
	cout << "Nhap lan luot the loai tieu thuyet va tac gia\ncach nhau bang dau enter: ";
	getline(cin, genre);
	getline(cin, author);
}

void Novel::output()
{
	Book::output();
	cout << "The loai: " << genre << endl;
	cout << "Tac gia: " << author << endl;
}
