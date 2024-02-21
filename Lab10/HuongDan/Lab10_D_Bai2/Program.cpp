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
	int menu, SoMenu = 3, n = 0;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu);
	} while (menu > 0);
}