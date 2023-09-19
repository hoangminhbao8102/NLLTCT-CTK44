#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double TinhTongSoTien(double principal, double interestRate, int months);

int main() 
{
    double principal;
    double interestRate;
    int months;

    cout << "Nhập số tiền gửi ban đầu: ";
    cin >> principal;

    cout << "Nhập lãi suất hàng tháng (%): ";
    cin >> interestRate;

    cout << "Nhập số tháng gửi: ";
    cin >> months;

    double totalAmount = TinhTongSoTien(principal, interestRate, months);

    cout << "Số tiền nhận được sau " << months << " tháng là: " << totalAmount << endl;

    _getch();

    return 0;
}

double TinhTongSoTien(double principal, double interestRate, int months) 
{
    double totalAmount = principal;

    for (int i = 0; i < months; i++) 
    {
        double interest = totalAmount * (interestRate / 100);
        totalAmount += interest;
    }

    return totalAmount;
}