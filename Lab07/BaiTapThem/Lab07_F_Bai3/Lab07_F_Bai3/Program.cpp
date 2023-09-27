#include <iostream>
#include <conio.h>
#include <string>

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

        int namDuongLich;
        cout << "Nhap vao nam Duong lich: ";
        cin >> namDuongLich;

        string namAmLich = ChuyenDoiNamAmLich(namDuongLich);
        cout << "Nam Am lich tuong ung la: " << namAmLich << endl;

        cout << "\n\nNua khong, nhan ESC neu khong!\n";
        kt = _getch();
    } while (kt != 27);
}