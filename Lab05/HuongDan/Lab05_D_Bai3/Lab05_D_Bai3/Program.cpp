#include <iostream>
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
	int menu,
		SoMenu = 8;
	int n = 0;
	DaySo a;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}