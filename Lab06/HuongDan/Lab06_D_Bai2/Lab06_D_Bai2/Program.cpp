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
	int SoMenu = 8,
		menu,
		m = 0,
		n = 0;
	int a[SIZE][SIZE];
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, m, n);
	} while (menu > 0);
}