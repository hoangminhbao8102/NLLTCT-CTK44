#include<iostream >
#include<math.h>
#include<conio.h>
using namespace std;
double TinhDoCao(double phi, double delta, double h);
double TinhPhuongVi(double phi, double delta, double h);
int main()
{
	double phi, delta, h, Altitude, Azimunth;
	cout << "Nhap gia tri phi = ";
	cin >> phi;
	cout << "Nhap gia tri delta = ";
	cin >> delta;
	cout << "Nhap gia tri h = ";
	cin >> h;
	Altitude = TinhDoCao(phi, delta, h);
	cout << endl << "Do cao ma ban vua nhap la: " << Altitude;
	Azimunth = TinhPhuongVi(phi, delta, h);
	cout << endl << "Phuong vi ma ban nhap la: " << Azimunth;
	_getch();
	return 1;
}
double TinhDoCao(double phi, double delta, double h)
{
	double altitude;
	altitude = asin(sin(phi) * sin(delta) + cos(phi) * cos(delta) * cos(h));
	return altitude;
}
double TinhPhuongVi(double phi, double delta, double h)
{
	double azimuth;
	azimuth = acos((cos(phi) * sin(delta) - sin(phi) * cos(delta) * cos(h)) / cos(asin(sin(phi) * sin(delta) + cos(phi) * cos(delta) * cos(h))));
	return azimuth;
}