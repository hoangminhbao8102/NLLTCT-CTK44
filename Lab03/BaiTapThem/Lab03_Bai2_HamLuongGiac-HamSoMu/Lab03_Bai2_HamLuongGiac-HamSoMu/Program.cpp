#include <iostream>
#include <conio.h>

using namespace std;

double GiaiThua(int n);
double LuyThua(double x, int n);
double HamSin(double x);
double HamCos(double x);
double HamExp(double x);

int main()
{
    double x;
    cout << "Nhap vao mot so x: ";
    cin >> x;

    double sinValue = HamSin(x);
    double cosValue = HamCos(x);
    double expValue = HamExp(x);

    cout << "sin(x) = " << sinValue << endl;
    cout << "cos(x) = " << cosValue << endl;
    cout << "e^x = " << expValue << endl;

    _getch();

    return 0;
}

// Hàm tính giai thừa
double GiaiThua(int n)
{
    double result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

// Hàm tính lũy thừa
double LuyThua(double x, int n)
{
    double result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= x;
    }
    return result;
}

// Hàm tính giá trị của hàm sin(x)
double HamSin(double x)
{
    double result = 0;
    int sign = 1;
    int n = 1;
    double term = LuyThua(x, n) / GiaiThua(n);

    while (term >= 1e-5)
    {
        result += sign * term;
        sign *= -1;
        n += 2;
        term = LuyThua(x, n) / GiaiThua(n);
    }

    return result;
}

// Hàm tính giá trị của hàm cos(x)
double HamCos(double x) {
    double result = 1;
    int sign = -1;
    int n = 2;
    double term = LuyThua(x, n) / GiaiThua(n);

    while (term >= 1e-5) {
        result += sign * term;
        sign *= -1;
        n += 2;
        term = LuyThua(x, n) / GiaiThua(n);
    }

    return result;
}

// Hàm tính giá trị của hàm e^x
double HamExp(double x) {
    double result = 1;
    int n = 1;
    double term = LuyThua(x, n) / GiaiThua(n);

    while (term >= 1e-5) {
        result += term;
        n++;
        term = LuyThua(x, n) / GiaiThua(n);
    }

    return result;
}