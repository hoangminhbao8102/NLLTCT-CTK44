#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int d, m, y;

    cout << "Nhap vao ngay (d): ";
    cin >> d;

    cout << "Nhap vao thang (m): ";
    cin >> m;

    cout << "Nhap vao nam (y): ";
    cin >> y;

    int t = y - (14 - m) / 12;
    int x = t + t / 4 - t / 100 + t / 400;
    int k = m + 12 * ((14 - m) / 12) - 2;
    int w = (d + x + (31 * k) / 12) % 7;

    cout << "Thu trong tuan (w) tuong ung voi ngay " << d << "/" << m << "/" << y << " la: " << w << endl;

    _getch();

    return 0;
}