#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c;
	float p, ChuVi, DienTich;
	cout << "Nhap do dai canh a = ";
	cin >> a;
	cout << "Nhap do dai canh b = ";
	cin >> b;
	cout << "Nhap do dai canh c = ";
	cin >> c;
	ChuVi = a + b + c;
	p = ChuVi / 2.0;
	DienTich = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Chu vi hinh tam giac la: " << ChuVi << endl
		<< " va dien tich hinh tam giac la: " << DienTich;
	_getch();
	return 1;
}