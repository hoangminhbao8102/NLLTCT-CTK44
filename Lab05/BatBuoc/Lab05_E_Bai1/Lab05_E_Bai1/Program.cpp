#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;
#include "ThuVien.h"
#include "Menu.h"
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int menu, SoMenu = 6;
	int n = 0;
	DaySo a;
	cout << endl << "Nhap kich thuoc mang : ";
	cin >> n;
	NhapMang(a, n);
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
	_getch();
}