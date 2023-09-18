#include <iostream>
#include <conio.h>

using namespace std;

int TinhNgayTrongTuan(int day, int month, int year);

int main() 
{
    int day, month, year;

    cout << "Nhap ngay: ";
    cin >> day;

    cout << "Nhap thang: ";
    cin >> month;

    cout << "Nhap nam: ";
    cin >> year;

    int dayOfWeek = TinhNgayTrongTuan(day, month, year);

    cout << "Thu trong tuan la: " << dayOfWeek << endl;

    _getch();

    return 0;
}

int TinhNgayTrongTuan(int day, int month, int year) 
{
    int t = year - (14 - month) / 12;
    int x = t + t / 4 - t / 100 + t / 400;
    int k = month + 12 * ((14 - month) / 12) - 2;
    int dayOfWeek = (day + x + (31 * k) / 12) % 7;
    return dayOfWeek;
}