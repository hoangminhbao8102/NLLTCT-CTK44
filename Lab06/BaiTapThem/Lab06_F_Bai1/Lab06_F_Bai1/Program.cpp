#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

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
	int m, n, p;
	do
	{
		system("CLS");

		cout << "Nhap kich thuoc bai min (m, n): ";
		cout << endl << "Nhap hang(m): ";
		cin >> m;
		cout << "Nhap cot(n): ";
		cin >> n;
		cout << "Nhap so luong qua min (p): ";
		cin >> p;

		taoBaiMin(m, n, p);

		cout << "\n\nNua khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
}