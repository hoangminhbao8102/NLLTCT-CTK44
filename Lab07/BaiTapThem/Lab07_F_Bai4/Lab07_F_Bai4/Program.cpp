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

        string s = "AAABBCCCCCCDDDEEEEEEEFFFG";

        // Nén xâu ký tự
        string compressedString = nenXau(s);
        cout << "Xau sau khi nen: " << compressedString << endl;

        // Giải nén xâu ký tự
        string decompressedString = giaiNenXau(compressedString);
        cout << "Xau sau khi giai nen: " << decompressedString << endl;

        cout << "\n\nNua khong, nhan ESC neu khong!\n";
        kt = _getch();
    } while (kt != 27);
}