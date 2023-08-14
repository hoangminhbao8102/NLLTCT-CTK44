#include <iostream>
#include <conio.h>
#include <string.h>
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
		SoMenu = 11;
	String a, b;
	do
	{
		system("CLS");
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, b);
	} while (menu > 0);
}