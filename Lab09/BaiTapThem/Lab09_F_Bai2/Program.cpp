#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <random>

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
    int menu, SoMenu = 11, n = 10; // Giả sử bạn muốn mảng 10x10
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) 
    {
        matrix[i] = new int[n]; // Cấp phát bộ nhớ cho từng hàng của mảng 2 chiều
    }
    do
    {
        menu = ChonMenu(SoMenu);
        XuLyMenu(menu, matrix, n);
    } while (menu > 0);

    // Đừng quên giải phóng bộ nhớ
    for (int i = 0; i < n; i++) 
    {
        delete[] matrix[i]; // Giải phóng từng hàng
    }
    delete[] matrix; // Giải phóng mảng chính
}
