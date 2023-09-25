#include <iostream>
#include <algorithm>
#include <conio.h>
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
	int n, a[10000];
	do
	{
		system("CLS");
		std::cout << "Nhap so phan tu cua mang a: ";
		std::cin >> n;

		std::cout << "Nhap cac phan tu cua mang a:\n";
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}

		XuatPhanTuPhanBiet(a, n);

		std::cout << "\nNua khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
}