// ==================================================
// Nạp các tập tin thư viện hàm xây dựng sẵn
// ==================================================
#include <iostream>
#include <conio.h>
using namespace std;
#include "ThuVien.h"
#include "Menu.h"
// Xây dựng thêm hàm Chạy chương trình
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int menu,
		SoMenu = 4;
	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu);
	} while (menu > 0);
}