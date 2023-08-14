#include <iostream>
#include <conio.h>
#include <math.h>
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
	int SoMenu = 4, menu, n;
	cout << "\nNhap vao 1 so nguyen duong n : ";
	cin >> n;
	do
	{
		system("cls");
		menu = ChonMenu(SoMenu, n);
		XuLyMenu(menu, n);
	} while (menu > 0);
	cout << "\nCam on da dung chuong trinh";
	_getch();
}