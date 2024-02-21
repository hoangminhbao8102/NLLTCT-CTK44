#include <iostream>
#include <conio.h>
#include <math.h>

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
	int menu, SoMenu = 15;
	SoPhuc z1 = { 0,0 }, z2 = { 0,0 };
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, z1, z2);
	} while (menu > 0);
}