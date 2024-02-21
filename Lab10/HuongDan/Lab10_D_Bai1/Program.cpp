#include <iostream>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
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
	int menu, SoMenu = 9, n = 0;
	DayDong a;
	a = new int[100];
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}