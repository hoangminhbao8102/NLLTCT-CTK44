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
		SoMenu = 7;
	int n = 0;
	DaySo a;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
	_getch();
}
