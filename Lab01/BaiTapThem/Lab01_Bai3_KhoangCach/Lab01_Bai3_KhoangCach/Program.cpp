#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    float xa, ya, xb, yb;

    cout << "Nhap toa do diem A: " << endl;
    cout << "xa = ";
    cin >> xa;
    cout << "ya = ";
    cin >> ya;

    cout << "Nhap toa do diem B: " << endl;
    cout << "xb = ";
    cin >> xb;
    cout << "yb = ";
    cin >> yb;

    float distance = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));

    cout << "Khoang cach giua hai diem A va B la: " << distance << endl;

    _getch();

    return 0;
}