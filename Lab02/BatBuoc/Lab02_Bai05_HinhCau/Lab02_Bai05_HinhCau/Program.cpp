#include<iostream>
#include<conio.h>
using namespace std;
#define PI 3.1415962
double TheTichKhoiCau(int r);
double DienTichMatCau(int r);
int main()
{
	int r;
	double TheTich, DienTich;
	cout << endl << "Nhap ban kinh r = ";
	cin >> r;
	TheTich = TheTichKhoiCau(r);
	DienTich = DienTichMatCau(r);
	cout << endl << "The tich mat cau = " << TheTich;
	cout << endl << "Dien tich mat cau = " << DienTich;
	_getch();
	return 1;
}
double TheTichKhoiCau(int r)
{
	double TheTich;
	TheTich = (4 / 3) * PI * pow(r, 3);
	return TheTich;
}
double DienTichMatCau(int r)
{
	double DienTich;
	DienTich = 4 * PI * pow(r, 2);
	return DienTich;
}