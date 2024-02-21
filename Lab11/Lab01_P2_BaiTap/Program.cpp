#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>

using namespace std;

#include "ThuVien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int SoMenu = 2, menu, kt_a, kt_ds;
	DaySo a;
	DanhSach ds;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, a, ds, kt_a, kt_ds);
	} while (menu > 0);
}