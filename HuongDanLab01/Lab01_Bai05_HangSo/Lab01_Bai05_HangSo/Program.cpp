#include<iostream>
#include<conio.h>
using namespace std;
#define MAX  100
#define KHOA "Cong nghe Thong tin"
#define PI   3.1415926
#define TAB  '\t'
int main()
{
	cout << endl << "Gia tri hang so MAX  la : " << MAX;
	cout << endl << "Gia tri hang so KHOA la : " << KHOA;
	cout << endl << "Gia tri hang so PI   la : " << PI;
	cout << endl << TAB << "Dong nay duoc thut le 1 dau TAB";
	float r;
	cout << endl << "Nhap ban kinh hinh tron : ";
	cin >> r;
	float ChuVi, DienTich;
	ChuVi = 2 * PI * r;
	DienTich = PI * r * r;
	cout << endl << "Ban kinh : R = " << r
		<< ", Chu vi : C = " << ChuVi
		<< ", Dien tich : S = " << DienTich;
	_getch();
	return 1;
}