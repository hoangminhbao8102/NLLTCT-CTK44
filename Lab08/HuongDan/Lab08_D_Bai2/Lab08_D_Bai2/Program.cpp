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
	int menu,
		SoMenu = 12,
		n = 0;
	PhanSo a, b;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, b, n);
	} while (menu > 0);
}