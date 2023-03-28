#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int TinhDienTichHCN(int Dai, int Rong);
double TinhDienTichTamGiac(int CanhA, int CanhB, int CanhC);
int main()
{
	int a, b, c;
	double DienTich;
	cout << endl << "Nhap do dai canh a : ";
	cin >> a;
	cout << endl << "Nhap do dai canh b : ";
	cin >> b;
	cout << endl << "Nhap do dai canh c : ";
	cin >> c;
	DienTich = TinhDienTichHCN(a, b);
	cout << endl << "Dien tich cua hinh chu nhat co chieu dai " << a << " va chieu rong " << b << " la " << DienTich;
	DienTich + TinhDienTichTamGiac(a, b, c);
	cout << endl << "Dien tich cua hinh tam giac co 3 canh : a = " << a << ", b = " << b << ", c = " << c << " la " << DienTich;
	_getch();
	return 1;
}
int TinhDienTichHCN(int Dai, int Rong)
{
	int dt;
	dt = Dai * Rong;
	return dt;
}
double TinhDienTichTamGiac(int CanhA, int CanhB, int CanhC)
{
	double dt, p;
	p = (CanhA + CanhB + CanhC) / 2.0;
	dt = sqrt(p * (p - CanhA) * (p - CanhB) * (p - CanhC));
	return dt;
}