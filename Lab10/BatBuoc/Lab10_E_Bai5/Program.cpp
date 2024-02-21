#include <iostream>
#include <conio.h>

using namespace std;

#define MAX 100

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
	int menu, SoMenu = 2, n, arr[MAX];
    cout << "Nhap so phan tu cua day: ";
    cin >> n;

    if (n <= 0 || n > MAX) 
    {
        cout << "So phan tu khong hop le." << endl;
    }

    cout << "Nhap cac phan tu cua day:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }

	do
	{
		menu = ChonMenu(SoMenu);
		XuLyMenu(menu, arr, n);
	} while (menu > 0);
}