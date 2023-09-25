#include <iostream>
#include <conio.h>

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
	int n, a[10000];
	do
	{
		system("CLS");
        cout << "Nhap so luong phan tu cua mang: ";
        cin >> n;

        if (n > 10000) {
            cout << "So luong phan tu vuot qua gioi han!" << std::endl;
            return;
        }

        cout << "Nhap cac phan tu cua mang:" << std::endl;
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        bubbleSort(a, n);

        cout << "Cac phan tu cua mang va thu tu sau khi sap xep:" << std::endl;
        printSortedArray(a, n);

		cout << "\nNua khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
}