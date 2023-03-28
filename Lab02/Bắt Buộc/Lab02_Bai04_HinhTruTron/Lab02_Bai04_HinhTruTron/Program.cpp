#include<iostream>
#include<conio.h>
using namespace std;
#define PI 3.1415962
double TinhChuVi(int r);
double DienTichDay(int r);
double DienTichXungQuanhHinhTruTron(int h, int r);
double DienTichToanPhanHinhTruTron(int h, int r);
double TheTichHinhTruTron(int r, int h);
int main()
{
	int r, h;
	double ChuVi, S, DienTichXQ, DienTichTP, TheTich;
	cout << endl << "Nhap vao ban kinh mat day : ";
	cin >> r;
	cout << endl << "Nhap vao chieu cao : ";
	cin >> h;
	ChuVi = TinhChuVi(r);
	S = DienTichDay(r);
	DienTichXQ = DienTichXungQuanhHinhTruTron(h, r);
	DienTichTP = DienTichToanPhanHinhTruTron(h, r);
	TheTich = TheTichHinhTruTron(r, h);
	cout << endl << "Chu vi = " << ChuVi;
	cout << endl << "Dien tich day = " << S;
	cout << endl << "Dien tich Xq = " << DienTichXQ;
	cout << endl << "Dien tich Tp = " << DienTichTP;
	cout << endl << "The tich = " << TheTich;
	_getch();
	return 1;
}
double TinhChuVi(int r)
{
	double ChuVi;
	ChuVi = 2 * PI * r;
	return ChuVi;
}
double DienTichDay(int r)
{
	double SDay;
	SDay = PI * pow(r, 2);
	return SDay;
}
double DienTichXungQuanhHinhTruTron(int h, int r)
{
	double Sxq;
	Sxq = 2 * PI * r * h;
	return Sxq;
}
double DienTichToanPhanHinhTruTron(int h, int r)
{
	double Stp;
	Stp = (2 * PI * r * h) + (2 * PI * pow(r, 2));
	return Stp;
}
double TheTichHinhTruTron(int r, int h)
{
	double TheTich;
	TheTich = 4 * PI * pow(r, 2) * h;
	return TheTich;
}