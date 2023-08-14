#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
#include "ThuVien.h"
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	char kt;
	int kq, k, SoDe;
	do
	{
		system("CLS");
		SoDe = SinhSoNgauNhien();
		k = ChonMucDoan();
		kq = XuLyTroChoi(k, SoDe);
		system("CLS");
		cout << "\nTRO CHOI DOAN SO VOI SO LAN DOAN : k = " << k << " :\n";
		ThongBaoKetQua(kq, SoDe);
		_getch();
		system("CLS");
		cout << "\nChoi nua khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
}