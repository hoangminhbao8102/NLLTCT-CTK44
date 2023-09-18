#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float x, y, z;
	int n;
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
	cout << "Nhap n = ";
	cin >> n;
	z = pow(x, n) + pow(y, n);
	cout << "Ket qua = " << z;
	_getch();
	return 0;
}