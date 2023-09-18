#include <iostream>
#include <conio.h>
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
		SoMenu = 3;
	unsigned int n;
	cout << endl << "Nhap mot so nguyen duong : ";
	cin >> n;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, n);
	} while (menu > 0);
}