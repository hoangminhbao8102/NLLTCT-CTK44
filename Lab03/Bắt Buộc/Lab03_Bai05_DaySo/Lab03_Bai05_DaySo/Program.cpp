#include<iostream>
#include<conio.h>
using namespace std;
double TinhTongH(unsigned int n);
double TinhTongS(unsigned int n);
int main()
{
	unsigned int n;
	double Hn, Sn;
	cout << "Nhap so nguyen n = ";
	cin >> n;
	Hn = TinhTongH(n);
	cout << "Tong cua H(n) la: " << Hn << endl;
	Sn = TinhTongS(n);
	cout << "Tong cua S(n) la: " << Sn;
	_getch();
	return 1;
}
double TinhTongH(unsigned int n)
{
	double sum = 0;
	unsigned int i;
	for (i = 1; i < n; i++)
	{
		sum += 1.0 / i;
	}
	return sum;
}
double TinhTongS(unsigned int n)
{
	double sum = 0;
	unsigned int i;
	for (i = 1; i < n; i++)
	{
		sum += (i + 1.0) / (i * i);
	}
	return sum;
}