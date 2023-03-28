#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
double TinhCanhBen(int a, int b, int h);
double TinhChuVi(int a, int b, double CanhBen);
double TinhDienTich(int a, int b, int h);
int main()
{
	int a, b, h;
	double CanhBen, ChuVi, DienTich;
	cout << endl << "Nhap a: ";
	cin >> a;
	cout << endl << "Nhap b: ";
	cin >> b;
	cout << endl << "Nhap h: ";
	cin >> h;
	CanhBen = TinhCanhBen(a, b, h);
	ChuVi = TinhChuVi(a, b, CanhBen);
	DienTich = TinhDienTich(a, b, h);
	cout << endl << "Chu vi = " << ChuVi << endl;
	cout << "Dien tich = " << DienTich << endl;
	_getch();
	return 1;
}
double TinhCanhBen(int a, int b, int h)
{
	double CanhBen, p;
	p = (a - b) / 2;
	CanhBen = sqrt(pow(p, 2) + pow(h, 2));
	return CanhBen;
}
double TinhChuVi(int a, int b, double CanhBen)
{
	double ChuVi;
	ChuVi = a + b + 2 * CanhBen;
	return ChuVi;
}
double TinhDienTich(int a, int b, int h)
{
	int DienTich;
	DienTich = ((a + b) * h) / 2;
	return DienTich;
}