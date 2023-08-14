#include <iostream>
#include <conio.h>
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
	int n, menu, SoMenu = 5;
	do
	{
		cout << "\nNhap vao 1 so nguyen duong n >> ";
		cin >> n;
	} while (n < 0);
	do
	{
		menu = ChonMenu(SoMenu, n);
		XuLyMenu(menu, n);
	} while (menu > 0);
	cout << "\nCam on da su dung chuong trinh";
	_getch();
}