#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
double TinhCanBacHai(double a);
int main()
{
	double a;
	cout << "\nNhap vao 1 so thuc bat ki : ";
	cin >> a;
	cout << "\nCan bac hai cua " << a << " la: " << TinhCanBacHai(a);
	_getch();
	return 0;
}
double TinhCanBacHai(double a)
{
	double xn, x0;
	double limit = pow(10, -15);
	if (a == 0)
		xn = 0;
	else
		xn = 1;
	do
	{
		x0 = xn;
		xn = (a / x0 + x0) / 2;
	} while (abs(xn - x0) > limit);
	return xn;
}