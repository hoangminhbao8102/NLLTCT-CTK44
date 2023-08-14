#include<conio.h>
#include<iostream>
#include<math.h>
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
	int menu, SoMenu = 3;
	double n;
	cout << endl << "Nhap x (degree) = ";
	cin >> n;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, n);
	} while (menu > 0);
}