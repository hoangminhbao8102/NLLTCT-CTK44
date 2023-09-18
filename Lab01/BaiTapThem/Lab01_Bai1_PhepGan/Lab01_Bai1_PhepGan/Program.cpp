#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int a = 5;
    int b = 10;

    int t = a;
    b = t;
    a = b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    _getch();

    return 1;
}