#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
#define SIXTY 60
#define MAX 3600
int main()
{
	int n, Gio, Phut, Giay;
	cout << "Nhap so nguyen n = ";
	cin >> n;
	Gio = n / MAX;
	Phut = (n % MAX) / SIXTY;
	Giay = (n % MAX) % SIXTY;
	cout << "Thoi gian ban da nhap la: " << Gio << ":" << Phut << ":" << Giay << endl;
	_getch();
	return 1;
}