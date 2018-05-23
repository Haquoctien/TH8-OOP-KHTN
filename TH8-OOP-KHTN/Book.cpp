#include "Book.h"



Book::Book()
{
	id = title = type = "Chua nhap";
	quantity = Npage = 0;
}


Book::~Book()
{
}

void Book::input()
{
	cout << "Nhap ma sach: ";
	getline(cin, id);
	cout << "Nhap ten sah: ";
	getline(cin, title);
	cout << "Nhap so trang sach: ";
	cin >> Npage;
	cout << "Nhap so luong sach: ";
	cin >> quantity;
	cin.ignore();
}

void Book::output()
{
	cout << "\tMa sach: " << id << endl;
	cout << "\tTen sach: " << title << endl;
	cout << "\tLoai sach: " << type << endl;
	cout << "\tSo trang: " << Npage << endl;
	cout << "\tSo luong: " << quantity << endl;
}
