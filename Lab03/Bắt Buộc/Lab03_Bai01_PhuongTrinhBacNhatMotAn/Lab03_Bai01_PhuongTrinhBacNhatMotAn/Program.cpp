#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;
void GiaiPTBacNhatMotAn(double a, double b);
int main()
{
	double a, b;
	cout << endl << "Nhap vao gia tri A: ";
	cin >> a;
	cout << endl << "Nhap vao gia tri B: ";
	cin >> b;
	GiaiPTBacNhatMotAn(a, b);
	_getch();
	return 1;
}
void GiaiPTBacNhatMotAn(double a, double b)
{
	double x;
	if (a == 0 && b == 0)
		cout << endl << "Phuong trinh co vo so nghiem";
	else if (a == 0 && b != 0)
		cout << endl << "Phuong trinh vo nghiem";
	else
		x = -b / a;
	cout << endl << "Phuong trinh co 1 nghiem duy nhat X = " << x;
}