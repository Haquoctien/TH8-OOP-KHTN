#include "Mag.h"



Mag::Mag()
{
	issue = 0;
	date = "Chua nhap";
}


Mag::~Mag()
{
}

void Mag::input()
{
	Book::input();
	cout << "Nhap ngay xuat ban: ";
	getline(cin, date);
	cout << "Nhap so tap chi: ";
	cin >> issue;
	cin.ignore();
}

void Mag::output()
{
	Book::output();
	cout << "Ngay xuat ban: " << date << endl;
	cout << "So tap chi: " << issue << endl;
}
