#include <iostream>
#include <conio.h>
#include<iomanip>
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
	int SoMenu = 5, menu, n = 0;
	MaTranVuong a, c;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, c, n);
	} while (menu > 0);
}