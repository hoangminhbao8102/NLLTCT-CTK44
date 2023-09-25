#include <iostream>
#include <conio.h>

using namespace std;

#include "ThuVien.h"

#define MAX 100

void ChayChuongTrinh();

int main() 
{
    ChayChuongTrinh();
    return 1;
}

void ChayChuongTrinh() 
{
    char kt;
    float a[MAX], b[MAX];
    int sizeA = 0, sizeB = 0;
    do
    {
        system("CLS");
        cout << "Nhap so phan tu cua mang a: ";
        cin >> sizeA;

        cout << "Nhap cac phan tu cua mang a: ";
        for (int i = 0; i < sizeA; i++) 
        {
            cin >> a[i];
        }

        cout << "Nhap so phan tu cua mang b: ";
        cin >> sizeB;

        cout << "Nhap cac phan tu cua mang b: ";
        for (int i = 0; i < sizeB; i++) 
        {
            cin >> b[i];
        }

        insertArray(a, sizeA, b, sizeB);
        cout << "Mang a sau khi chen: ";
        for (int i = 0; i < sizeA; i++) 
        {
            cout << a[i] << " ";
        }
        cout << std::endl;

        insertSorted(a, sizeA, b, sizeB);
        cout << "Mang a sau khi chen va sap xep: ";
        for (int i = 0; i < sizeA; i++) 
        {
            cout << a[i] << " ";
        }
        cout << endl;

        cout << "\nNua khong, nhan ESC neu khong!\n";
        kt = _getch();
    } while (kt != 27);
}