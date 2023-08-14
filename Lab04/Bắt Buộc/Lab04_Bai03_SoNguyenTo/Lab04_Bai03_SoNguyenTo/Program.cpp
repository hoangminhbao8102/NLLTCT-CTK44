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
	int menu, n, SoMenu = 5;
	do
	{
		cout << endl << "Nhap 1 so nguyen duong n: ";
		cin >> n;
	} while (n < 0);
	do
	{
		system("cls");
		menu = ChonMenu(SoMenu, n);
		XuLyMenu(menu, n);
	} while (menu > 0);
	_getch();
}