#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x = 10;
	int y = 10;
	int z = 10;
	cout << "x = " << x;
	cout << "y = " << y;
	cout << "z = " << z;
	cout << endl
		<< x << " + "
		<< y << " + "
		<< z << " = "
		<< x + y + z;
	cout << endl << "x + y + z = " << x + y + z;
	int dai, rong;
	cout << endl << "Nhap chieu dai cua HCN : ";
	cin >> dai;
	cout << endl << "Nhap chieu rong cua HCN : ";
	cin >> rong;
	cout << endl
		<< "Chieu dai hinh chu nhat la " << dai << ", "
		<< "Chieu rong hinh chu nhat la " << rong;
	int ChuVi, DienTich;
	ChuVi = (dai + rong) * 2;
	DienTich = dai * rong;
	cout << endl << "Chu vi cua HCN la : " << ChuVi;
	cout << endl << "Dien tich cua HCN : " << DienTich;
	_getch();
	return 1;
}