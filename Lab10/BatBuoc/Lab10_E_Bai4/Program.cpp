#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

#include "ThuVien.h"

void ChayChuongTrinh();

int main() 
{
    ChayChuongTrinh();
    return 0;
}

void ChayChuongTrinh()
{
    string input;
    cout << "Nhap xau ky tu: ";
    getline(cin, input);

    string reversed = DaoNguocXau(input);
    cout << "Xau ky tu dao nguoc: " << reversed << endl;
}