#include <iostream>
#include <conio.h>

using namespace std;

#include "ThuVien.h"

void ChayChuongTrinh();

int main() {
    ChayChuongTrinh();
    return 0;
}

void ChayChuongTrinh() {
    int a, b;
    cout << "Nhap vao hai so nguyen duong: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Hai so nhap vao phai la so nguyen duong.\n";
        return;
    }

    int ucln = UCLN(a, b);
    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << ucln << endl;
}