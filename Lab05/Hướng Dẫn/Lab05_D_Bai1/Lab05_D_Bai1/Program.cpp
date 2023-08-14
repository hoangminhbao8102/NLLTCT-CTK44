#include<iostream>
#include<conio.h>
using namespace std;
#include"ThuVien.h"
#include"Menu.h"
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int menu,
		SoMenu = 7,
		n = 0;
	DaySo a;
	cout << endl << "Nhap mot so nguyen duong : ";
	cin >> n;
	NhapMang(a, n);
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}