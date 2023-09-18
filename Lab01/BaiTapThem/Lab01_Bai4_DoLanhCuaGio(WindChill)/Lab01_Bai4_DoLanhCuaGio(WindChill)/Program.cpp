#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    float t, v;

    cout << "Nhap vao nhiet do (Fahrenheit): ";
    cin >> t;

    cout << "Nhap vao van toc gio (dam/gio): ";
    cin >> v;

    if (t < -50 || t > 50 || v < 3 || v > 120) {
        cout << "Gia tri nhiet do hoac van toc gio khong hop le!" << endl;
        return 0;
    }

    float w = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);

    cout << "Do lanh cua gio la: " << w << " Fahrenheit" << endl;

    _getch();

    return 0;
}