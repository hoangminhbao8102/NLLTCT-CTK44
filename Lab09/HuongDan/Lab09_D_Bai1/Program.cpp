#include <iostream>
#include <time.h>

using namespace std;

#include "ThuVien.h"

#define MAX 100

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int a[MAX], n;
	do {
		cout << "Nhap kich thuoc n = ";
		cin >> n;
	} while (n <= 0);
	cout << "\nMang da nhap tu dong: \n";
	NhapTuDong(a, n, 1, 10);
	XuatMang(a, n);
	XuatGiaTri_SoLan_PhanBiet(a, n);
}