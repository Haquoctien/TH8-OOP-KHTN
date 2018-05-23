#include "Mag.h"
#include "Novel.h"
#include "Textbook.h"

typedef Book** bookList;
#define deleteList delete

int bookListInput(bookList &);

int main(void)
{

	bookList list;
	int size = bookListInput(list);
	for (int i = 0; i < size; i++)
		list[i]->output();
	for (int i = 0; i < size; i++)
		delete list[i];
	deleteList list;
	getchar();
	return 0;
}

int bookListInput(bookList &list)
{
	int n;
	cout << "Nhap so sach can nhap: ";
	cin >> n;
	cin.ignore();
	list = new Book*[n];
	for (int i = 0, choice = 1; i < n; i++)
	{
		cout << "Lua chon:\n\t1 : SGK\n\t2 : Tieu thuyet\n\t3 : Tap chi\n\tchon: ";
		cin >> choice;
		cin.ignore();
		switch (choice)
		{
		case 1:
			list[i] = new Textbook;
			break;
		case 2:
			list[i] = new Novel;
			break;
		case 3:
			list[i] = new Mag;
			break;
		default:
			list[i] = new Book;
			break;
		}
		list[i]->input();
	}
	return n;
}