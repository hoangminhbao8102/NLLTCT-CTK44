#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
#define PI 3.1415926
int main()
{
	float r, h, Sxq, Stp, V;
	cout << "Nhap ban kinh r = ";
	cin >> r;
	cout << "Nhap chieu cao h = ";
	cin >> h;
	Sxq = 2 * PI * r * h;
	Stp = Sxq + 2 * PI * pow(r, 2);
	V = PI * pow(r, 2) * h;
	cout << "Dien tich xung quanh la: " << Sxq << endl;
	cout << "Dien tich toan phan la: " << Stp << endl;
	cout << "The tich la: " << V;
	_getch();
	return 1;
}