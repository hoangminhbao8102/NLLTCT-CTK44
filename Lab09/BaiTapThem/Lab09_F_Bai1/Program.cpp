#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#include "ThuVien.h"
#include "Menu.h"

#define MAX 100

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu, SoMenu = 4;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu);
	} while (menu > 0);
}