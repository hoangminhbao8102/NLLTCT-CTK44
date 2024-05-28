#include <iostream>
#include <conio.h>
#include <string>
#include <time.h>
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
	int menu, SoMenu = 10;
	MatHang mh;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, mh);
	} while (menu > 0);
}