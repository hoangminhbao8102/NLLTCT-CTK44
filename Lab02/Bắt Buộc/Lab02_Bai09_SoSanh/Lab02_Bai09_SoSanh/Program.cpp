#include<iostream>
#include<conio.h>
using namespace std;
double TimMax(double x, double y);
double TimMax4(double a, double b, double c, double d);
int main()
{
	double a, b, c, d, max;
	cout << "Nhap gia tri a = ";
	cin >> a;
	cout << "Nhap gia tri b = ";
	cin >> b;
	cout << "Nhap gia tri c = ";
	cin >> c;
	cout << "Nhap gia tri d = ";
	cin >> d;
	max = TimMax4(a, b, c, d);
	cout << "So lon nhat trong 4 so vua nhap la: " << max;
	_getch();
	return 1;
}
double TimMax(double x, double y)
{
	double MAX;
	MAX = (x >= y) ? x : y;
	return MAX;
}
double TimMax4(double a, double b, double c, double d)
{
	TimMax(TimMax(a, b), TimMax(c, d));
	cout << TimMax(TimMax(a, b), TimMax(c, d));
	return  TimMax(TimMax(a, b), TimMax(c, d));
}