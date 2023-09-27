#include <iostream>
#include <string.h>
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
	int menu, SoMenu = 3;
	string s, t;
	cout << "Nhap vao xau s: ";
	cin >> s;
	cout << "Nhap vao xau t: ";
	cin >> t;
	do
	{
		system("CLS");
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, s, t);
	} while (menu > 0);
}