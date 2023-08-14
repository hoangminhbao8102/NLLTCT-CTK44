#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
#define MAX 100
int SinhSoNgauNhien();
bool XuLySoLanDoan(int SoDe, int k);
void ThongBao_KQTC(int SoDe, int kq);
int ChonDoKho();
int main()
{
	srand(time(0));
	int TiepTuc;
	do
	{
		int SoDe = SinhSoNgauNhien();
		int k = ChonDoKho();
		bool ChienThang = XuLySoLanDoan(SoDe, k);
		ThongBao_KQTC(SoDe, ChienThang);
		cout << "\nBan co muon tiep tuc choi (0 de thoat, 1 de tiep tuc) >> ";
		cin >> TiepTuc;
		if (TiepTuc)
			system("cls");
	} while (TiepTuc != 0);
	cout << "\nCam on da su dung chuong trinh";
	_getch();
	return 0;
}
int SinhSoNgauNhien()
{
	int SoDe;
	SoDe = 1 + rand() % MAX;
	return SoDe;
}
bool XuLySoLanDoan(int SoDe, int k)
{
	bool ChienThang = false;
	int NguoiDuDoan;
	for (int i = 1; i <= k; i++)
	{
		cout << "\nNhap vao 1 so (1 - 100) >> ";
		cin >> NguoiDuDoan;
		if (NguoiDuDoan < SoDe)
			cout << "\nNhap vao so lon hon";
		else if (NguoiDuDoan > SoDe)
			cout << "\nNhap vao so nho hon";
		else
		{
			ChienThang = true;
			break;
		}
	}
	return ChienThang;
}
void ThongBao_KQTC(int SoDe, int kq)
{
	if (kq)
		cout << "\nBan da chien thang tro choi!";
	else
		cout << "\nBan da thua, chuc ban may man lan sau";
	cout << "\nSo ngau nhien la : " << SoDe;
}
int ChonDoKho()
{
	int level;
	do
	{
		cout << "\nChon so lan doan toi da (3, 5, 7, 9) >> ";
		cin >> level;
	} while (level != 3 && level != 5 && level && 7 && level != 9);
	return level;
}