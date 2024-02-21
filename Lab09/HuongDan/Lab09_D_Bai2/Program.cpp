#include <iostream>
#include <iomanip>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

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
	int menu, SoMenu = 5, n = 0;
	MaTranVuong a, b;
	a = new int[100];
	b = new int[100];
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, b, n);
	} while (menu > 0);
}