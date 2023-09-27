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
        cout << "Chuong trinh choi Sudoku" << endl;
        ChoiSudoku();
        cout << "\n\nNua khong, nhan ESC neu khong!\n";
        kt = _getch();
    } while (kt != 27);
}