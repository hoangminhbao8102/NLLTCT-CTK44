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
    do
    {
        system("CLS");

        cout << "Chuong trinh tao ma phuong le" << endl;
        GiaiMaPhuongLe();

        cout << "\n\nNua khong, nhan ESC neu khong!\n";
        kt = _getch();
    } while (kt != 27);
}