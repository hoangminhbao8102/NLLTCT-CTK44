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

        string s = "Hello, World!";

        // Mã hóa chuỗi ký tự
        string encodedString = maHoa(s);
        cout << "Chuoi sau khi ma hoa: " << encodedString << endl;

        // Giải mã chuỗi ký tự
        string decodedString = giaiMa(encodedString);
        cout << "Chuoi sau khi giai ma: " << decodedString << endl;

        cout << "\n\nNua khong, nhan ESC neu khong!\n";
        kt = _getch();
    } while (kt != 27);
}