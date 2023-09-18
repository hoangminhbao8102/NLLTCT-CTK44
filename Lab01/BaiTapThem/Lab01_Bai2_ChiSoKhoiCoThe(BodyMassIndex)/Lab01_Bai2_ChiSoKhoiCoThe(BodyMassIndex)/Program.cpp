#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    float weight, height;

    cout << "Nhap vao khoi luong co the (kg): ";
    cin >> weight;

    cout << "Nhap vao chieu cao (m): ";
    cin >> height;

    float bmi = weight / (height * height);

    cout << "Chi so khoi co the (BMI) cua ban la: " << bmi << endl;

    _getch();

    return 1;
}