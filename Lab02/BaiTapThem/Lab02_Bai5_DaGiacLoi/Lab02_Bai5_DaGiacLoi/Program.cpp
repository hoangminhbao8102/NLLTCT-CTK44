#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double TinhTongCacGoc(int n);
int TinhSoDuongCheo(int n);

int main() 
{
    int n;

    cout << "Nhap so dinh cua da giac: ";
    cin >> n;

    double sumOfAngles = TinhTongCacGoc(n);
    int numberOfDiagonals = TinhSoDuongCheo(n);

    cout << "Tong so do cua cac goc: " << sumOfAngles << " do" << endl;
    cout << "Tong so duong cheo: " << numberOfDiagonals << endl;

    return 0;
}

double TinhTongCacGoc(int n) 
{
    double sumOfAngles = (n - 2) * 180;
    return sumOfAngles;
}

int TinhSoDuongCheo(int n) 
{
    int numberOfDiagonals = n * (n - 3) / 2;
    return numberOfDiagonals;
}