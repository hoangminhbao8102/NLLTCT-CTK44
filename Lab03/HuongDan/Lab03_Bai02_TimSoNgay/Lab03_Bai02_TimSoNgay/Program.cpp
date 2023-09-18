#include<iostream>
#include<conio.h>
using namespace std;
int NhapSoTrongMien(int min, int max);
int TimSoNgay(int Thang, int Nam);
int main()
{
	int SoNgay, Thang, Nam;
	cout << endl << "Nhap mot thang trong nam";
	Thang = NhapSoTrongMien(1, 12);
	cout << endl << "Nhap nam duong lich";
	Nam = NhapSoTrongMien(1, 3000);
	SoNgay = TimSoNgay(Thang, Nam);
	cout << endl << "Thang " << Thang << " nam " << Nam << " co " << SoNgay << " ngay.";
	_getch();
	return 1;
}
int NhapSoTrongMien(int min, int max)
{
	int So;
	do
	{
		cout << endl << "Nhap mot so trong doan [" << min << ".." << max << "] : ";
		cin >> So;
	} while (So < min || So > max);
	return So;
}
int TimSoNgay(int Thang, int Nam)
{
	int SoNgay;
	switch (Thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		SoNgay = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		SoNgay = 30;
		break;
	default:
		if ((Nam % 4 == 0 && Nam % 100 != 0) || (Nam % 400 == 0))
			SoNgay = 29;
		else
			SoNgay = 28;
		break;
	}
	return SoNgay;
}