#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	cout << setiosflags(ios::left)
		<< setw(10) << "MSSV"
		<< setw(25) << "Ho va ten"
		<< setw(10) << "Lop"
		<< setw(10) << "Diem TB"
		<< setw(10) << "Diem TL"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1410234"
		<< setw(25) << "Nguyen Quang Tam"
		<< setw(10) << "CTK38CD"
		<< setw(10) << "7.50"
		<< setw(10) << setprecision(2) << 5.75
		<< endl;
	_getch();
	return 1;
}