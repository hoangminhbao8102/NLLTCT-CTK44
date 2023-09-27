#include <iostream>
#include <string>
#include <vector>
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
	int menu, SoMenu = 4;
	string s;
	cout << "Nhap vao xau: ";
	cin >> s;
	do
	{
		system("CLS");
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, s);
	} while (menu > 0);
}