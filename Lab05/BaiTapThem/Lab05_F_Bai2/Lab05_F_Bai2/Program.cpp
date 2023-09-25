#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
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
	int choice;
    int C, M;
	do
	{
        std::cout << "1. Thiet lap muc cuoc C va so tien ban dau M" << std::endl;
        std::cout << "2. Choi game" << std::endl;
        std::cout << "3. Thoat chuong trinh" << std::endl;
        std::cout << "Nhap lua chon: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            Setup(C, M);
            break;
        case 2:
            PlayGame();
            break;
        case 3:
            Exit();
            break;
        default:
            std::cout << "Lua chon khong hop le. Vui long nhap lai!" << std::endl;
            break;
        }
		std::cout << "\nNua khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
}