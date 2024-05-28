#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>
#include <vector>

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
	TaiLieu tl;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, tl);
	} while (menu > 0);
}