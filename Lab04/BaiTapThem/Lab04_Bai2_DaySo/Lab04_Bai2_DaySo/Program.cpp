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
	int menu, SoMenu = 5;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu);
	} while (menu > 0);
}