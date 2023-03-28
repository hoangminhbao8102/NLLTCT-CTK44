#include<iostream>
#include<conio.h>
using namespace std;
int NhapSoNguyen();
int TinhTong(unsigned int n);
int main()
{
	int x, y, z;
	x = NhapSoNguyen();
	y = NhapSoNguyen();
	cout << x << " + " << y<<" = " << x + y;
	z = (x + y) * NhapSoNguyen();
	cout << endl << "z = " << z;
	cout << NhapSoNguyen();
	int KetQua = 0;
	KetQua = TinhTong(50);
	cout << endl << "1 + 2 + ... + 50 = " << KetQua;
	unsigned int m;
	cout << endl << "Nhap mot so nguyen khong am : ";
	cin >> m;
	KetQua = TinhTong(m);
	cout << endl << "1 + 2 + ... + " << m << " = " << KetQua;
	_getch();
	return 1;
}
int NhapSoNguyen()
{
	int so;
	cout << endl << "Nhap mot so nguyen : ";
	cin >> so;
	return so;
}
int TinhTong(unsigned int n)
{
	int sum = 0;
	sum = n * (n + 1) / 2;
	return sum;
}