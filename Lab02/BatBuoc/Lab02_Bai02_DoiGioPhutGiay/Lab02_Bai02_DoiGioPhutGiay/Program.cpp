#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
#define MAX 3600
#define SIXTY 60
void DoiThoiGian(unsigned int n);
int main()
{
	int SoGiay;
	cout << endl << "Nhap so giay : ";
	cin >> SoGiay;
	DoiThoiGian(SoGiay);
	_getch();
	return 1;
}
void DoiThoiGian(unsigned int n)
{
	int gio, phut, giay;
	gio = n / MAX;
	phut = (n % MAX) / SIXTY;
	giay = (n % MAX) % SIXTY;
	cout << "Thoi gian ban da nhap la: " << gio << ":" << phut << ":" << giay << endl;
	return;
}