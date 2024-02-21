#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

#include "Thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu, n = 0, SoMenu = 7;
	DayDong a;
	a = new int[100];
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}