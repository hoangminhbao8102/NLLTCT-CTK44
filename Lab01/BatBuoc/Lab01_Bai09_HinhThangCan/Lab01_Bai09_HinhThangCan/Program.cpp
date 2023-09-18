#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float a, b, h, p, CanhBen, ChuVi, DienTich;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	cout << "Nhap h = ";
	cin >> h;
	p = (a - b) / 2;
	CanhBen = sqrt(p * p + h * h);
	ChuVi = a + b + 2 * CanhBen;
	DienTich = ((a + b) * h) / 2;
	cout << "Chu vi hinh thang can la: " << ChuVi << endl
		<< "Dien tich hinh thang can la: " << DienTich;
	_getch();
	return 1;
}