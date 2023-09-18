#include <iostream>
#include <conio.h>

using namespace std;

double TinhToanThanhToanHangThang(double principal, double interestRate, int years);

int main() 
{
    double principal, interestRate;
    int years;

    cout << "Nhap so tien vay: ";
    cin >> principal;

    cout << "Nhap lai suat hang thang (%): ";
    cin >> interestRate;

    cout << "Nhap so nam vay: ";
    cin >> years;

    double monthlyPayment = TinhToanThanhToanHangThang(principal, interestRate, years);

    cout << "So tien phai tra hang thang: " << monthlyPayment << endl;

    _getch();

    return 0;
}

double TinhToanThanhToanHangThang(double principal, double interestRate, int years)
{
    double monthlyInterestRate = interestRate / 100 / 12;
    int numberOfPayments = years * 12;

    double monthlyPayment = principal * monthlyInterestRate / (1 - pow(1 + monthlyInterestRate, -numberOfPayments));

    return monthlyPayment;
}