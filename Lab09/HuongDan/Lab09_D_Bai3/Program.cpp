#include <iostream>
#include <conio.h>

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
	int SoMenu = 7, menu;
	ChuoiDong a;
	a = new char[MAX];
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a);
	} while (menu > 0);
}