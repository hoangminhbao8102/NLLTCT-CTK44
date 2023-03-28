#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
#define PI 3.1415926
double TinhChuViHinhTron(double r);
double TinhDienTichHinhTron(double r);
int main()
{
	double ChuVi, DienTich, BanKinh;
	cout << endl << "Nhap ban kinh : ";
	cin >> BanKinh;
	ChuVi = TinhChuViHinhTron(BanKinh);
	cout << "Chu vi hinh tron co ban kinh r = " << BanKinh << " la : " << ChuVi << endl;
	DienTich = TinhDienTichHinhTron(BanKinh);
	cout << "Dien tich hinh tron co ban kinh r = " << BanKinh << " la : " << DienTich << endl;
	_getch();
	return 1;
}
double TinhChuViHinhTron(double r)
{
	double ChuVi;
	ChuVi = r * 2 * PI;
	return ChuVi;
}
double TinhDienTichHinhTron(double r)
{
	double DienTich;
	DienTich = pow(r, 2) * PI;
	return DienTich;
}