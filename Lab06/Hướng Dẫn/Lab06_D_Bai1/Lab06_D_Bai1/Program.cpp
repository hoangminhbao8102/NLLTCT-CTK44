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
	int SoMenu = 8,
		menu,
		n = 0;
	MaTranVuong a;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}