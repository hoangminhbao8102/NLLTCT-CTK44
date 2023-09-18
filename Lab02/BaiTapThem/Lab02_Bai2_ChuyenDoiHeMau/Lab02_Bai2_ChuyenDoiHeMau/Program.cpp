#include <iostream>
#include <conio.h>

using namespace std;

void ChuyenDoiRGBSangCMYK(int r, int g, int b, double& c, double& m, double& y, double& k);

int main() {
    int r, g, b;

    cout << "Nhap gia tri R: ";
    cin >> r;

    cout << "Nhap gia tri G: ";
    cin >> g;

    cout << "Nhap gia tri B: ";
    cin >> b;

    double c, m, y, k;
    ChuyenDoiRGBSangCMYK(r, g, b, c, m, y, k);

    cout << "Gia tri C: " << c << endl;
    cout << "Gia tri M: " << m << endl;
    cout << "Gia tri Y: " << y << endl;
    cout << "Gia tri K: " << k << endl;

    _getch();

    return 0;
}

void ChuyenDoiRGBSangCMYK(int r, int g, int b, double& c, double& m, double& y, double& k) 
{
    double red = r / 255.0;
    double green = g / 255.0;
    double blue = b / 255.0;

    double maxColor = std::max(std::max(red, green), blue);

    k = 1 - maxColor;
    c = (1 - red - k) / (1 - k);
    m = (1 - green - k) / (1 - k);
    y = (1 - blue - k) / (1 - k);
}