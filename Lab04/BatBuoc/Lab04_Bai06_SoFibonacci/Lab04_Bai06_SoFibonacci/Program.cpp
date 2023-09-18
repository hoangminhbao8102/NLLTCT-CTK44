#include <conio.h>
#include <iostream>
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
	int menu, SoMenu = 3;
	unsigned n;
	cout << endl << "Nhap so nguyen duong n = ";
	cin >> n;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, n);
	} while (menu > 0);
}