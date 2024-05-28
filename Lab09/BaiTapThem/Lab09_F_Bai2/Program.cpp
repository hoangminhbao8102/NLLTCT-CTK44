#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <random>

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
	int menu, SoMenu = 11, n = 0, ** matrix;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, matrix, n);
	} while (menu > 0);
}