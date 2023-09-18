#include <iostream>
#include <conio.h>

using namespace std;

void ChuyenDoiNhietDo(double celsius, double& kelvin, double& fahrenheit, double& rankine);

int main() 
{
    double celsius;

    cout << "Nhap gia tri Celsius: ";
    cin >> celsius;

    double kelvin, fahrenheit, rankine;
    ChuyenDoiNhietDo(celsius, kelvin, fahrenheit, rankine);

    cout << "Gia tri Kelvin: " << kelvin << endl;
    cout << "Gia tri Fahrenheit: " << fahrenheit << endl;
    cout << "Gia tri Rankine: " << rankine << endl;

    _getch();

    return 0;
}

void ChuyenDoiNhietDo(double celsius, double& kelvin, double& fahrenheit, double& rankine) 
{
    fahrenheit = celsius * 9 / 5 + 32;
    kelvin = celsius + 273.15;
    rankine = (celsius + 273.15) * 9 / 5;
}