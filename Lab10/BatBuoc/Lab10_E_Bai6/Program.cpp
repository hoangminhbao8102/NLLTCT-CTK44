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
    int n;
    cout << "Nhap so dia: ";
    cin >> n;

    GiaiThapHaNoi(n, 'A', 'C', 'B');

    _getch();
}