#include <iostream>
#include <conio.h>

using namespace std;

int TimSoFibonacci(int n);
void LietKeSoFibonacciNhoHonBangN(int n);
void LietKeNSoFibonacci(int n);

int main() 
{
    int n;
    cout << "Nhap vao mot so nguyen duong n: ";
    cin >> n;

    cout << "So Fibonacci thu " << n << " la: " << TimSoFibonacci(n) << endl;
    LietKeSoFibonacciNhoHonBangN(n);
    LietKeNSoFibonacci(n);

    _getch();

    return 0;
}

// Định nghĩa hàm để tìm số Fibonacci thứ n
int TimSoFibonacci(int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return TimSoFibonacci(n - 1) + TimSoFibonacci(n - 2);
}

// Định nghĩa hàm để liệt kê các số Fibonacci nhỏ hơn hoặc bằng n
void LietKeSoFibonacciNhoHonBangN(int n) 
{
    int a = 0, b = 1, c = 0;
    cout << "Cac so Fibonacci nho hon hoac bang " << n << " la: ";
    cout << a << " ";

    while (c <= n) {
        cout << c << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

// Định nghĩa hàm để liệt kê n số Fibonacci đầu tiên
void LietKeNSoFibonacci(int n) 
{
    cout << "Cac so Fibonacci dau tien la: ";
    for (int i = 0; i < n; i++) {
        cout << TimSoFibonacci(i) << " ";
    }
    cout << endl;
}