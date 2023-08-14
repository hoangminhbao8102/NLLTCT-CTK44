#include <iostream>
#include <conio.h>
using namespace std;
int UCLN(int a, int b);
int BCNN(int a, int b);
int main()
{
	int a, b, kq;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	kq = UCLN(a, b);
	cout << "UCLN : " << kq;
	cout << "\n";
	kq = BCNN(a, b);
	cout << "BCNN : " << kq << endl;
	_getch();
	return 1;
}
int UCLN(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
int BCNN(int a, int b)
{
	int result = UCLN(a, b);
	return a * b / result;
}