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
	int m, n, p, k;
	do
	{
		system("CLS");
		
		cout << "Nhap kich thuoc bai min (m, n): ";
		cin >> m >> n;
		cout << "Nhap so luong qua min (p): ";
		cin >> p;
		cout << "Nhap so luong mang (k): ";
		cin >> k;

		taoBaiMin(m, n, p, k);

		cout << "\n\nNua khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
}