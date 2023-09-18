#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x, y;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
	cout << "z(+) = " << x + y << endl
		<< "z(-) = " << x - y << endl
		<< "z(*) = " << x * y << endl
		<< "z(/) = " << x / y << endl
		<< "z(%) = " << x % y << endl;
	_getch();
	return 1;
}