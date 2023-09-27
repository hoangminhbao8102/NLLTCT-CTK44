#include<iostream>
#include<conio.h>

using namespace std;

#include"ThuVien.h"
#include"Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu,
		SoMenu = 6;
	String a;
	do
	{
		system("CLS");
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a);
	} while (menu > 0);
}