#include "Quadrangle.h"
#include "Triangle.h"

int main()
{
	Polygon **shapes;
	int n;
	cout << "Nhap so hinh can nhap: ";
	cin >> n;
	cin.ignore();
	shapes = new Polygon*[n];
	for (int i = 0, choice; i < n; i++)
	{
		cout << "Nhap so canh, 3 hoac 4: ";
		cin >> choice;
		cin.ignore();
		if (choice == 3)
			shapes[i] = new Triangle;
		else
			shapes[i] = new Quadrangle;
		shapes[i]->input();
	}
	for (int i = 0; i < n; i++)
		shapes[i]->output();

	Vector v;
	cout << "Nhap vector de tinh tien: ";
	v.input();
	for (int i = 0; i < n; i++)
		shapes[i]->translateBy(v);
	for (int i = 0; i < n; i++)
		shapes[i]->output();

	for (int i = 0; i < n; i++)
		delete shapes[i];
	delete[] shapes;
	cout << "Press any key to continue...";
	getchar();
	return 0;
}