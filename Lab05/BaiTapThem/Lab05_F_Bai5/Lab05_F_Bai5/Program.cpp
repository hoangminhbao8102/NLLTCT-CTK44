#include <iostream>
#include <conio.h>

using namespace std;

#include "ThuVien.h"

void ChayChuongTrinh();

int main() {
    ChayChuongTrinh();
    return 1;
}

void ChayChuongTrinh()
{
	char kt;
	int n, a[i];
	do
	{
		system("CLS");
        cout << "Nhap so phan tu cua mang: ";
        cin >> n;

        std::cout << "Nhap cac phan tu cua mang: ";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (checkDuplicate(a, n)) {
            cout << "Mang chua it nhat 2 phan tu trung nhau." << endl;
        }
        else {
            cout << "Mang khong chua it nhat 2 phan tu trung nhau." << endl;
        }

		cout << "\nNua khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
}