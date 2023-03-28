#include<iostream>
#include<conio.h>
using namespace std;
double TinhKhoangCach(double Xa, double Ya, double Xb, double Yb);
int main()
{
	double xa, ya, xb, yb, KhoangCach;
	cout << endl << "Nhap Xa : ";
	cin >> xa;
	cout << endl << "Nhap Ya : ";
	cin >> ya;
	cout << endl << "Nhap Xb : ";
	cin >> xb;
	cout << endl << "Nhap Yb : ";
	cin >> yb;
	KhoangCach = TinhKhoangCach(xa, ya, xb, yb);
	cout << endl << "Khoang cach A, B = " << KhoangCach;
	_getch();
	return 1;
}
double TinhKhoangCach(double Xa, double Ya, double Xb, double Yb)
{
	double d;
	d = sqrt(pow((Xb - Xa), 2) + pow((Yb - Ya), 2));
	return d;
}