#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
#define PI 3.1415926
int main()
{
	float r, TheTich, DienTich;
	cout << "Nhap ban kinh r = ";
	cin >> r;
	TheTich = (4 / 3) * PI * pow(r, 3);
	DienTich = 4 * PI * pow(r, 2);
	cout << "The tich = " << TheTich << endl;
	cout << "Dien tich = " << DienTich;
	_getch();
	return 1;
}