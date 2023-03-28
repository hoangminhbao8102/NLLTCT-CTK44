#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	cout << setw(35) << "DANH SACH SINH VIEN" << endl << endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "MSSV"
		<< setw(25) << "Ho va Ten"
		<< setw(10) << "Khoa"
		<< setw(10) << "Diem"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "------"
		<< setw(25) << "--------------------"
		<< setw(10) << "-----"
		<< setw(10) << "----"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1211520"
		<< setw(25) << "Le Duy Tung"
		<< setw(10) << "33"
		<< setw(10) << "4.57"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1210152"
		<< setw(25) << "Tran Van Tien"
		<< setw(10) << "34"
		<< setw(10) << "VT"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1211962"
		<< setw(25) << "Pham Duc Anh"
		<< setw(10) << "33"
		<< setw(10) << "6.48"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1211518"
		<< setw(25) << "Nguyen Hong Phuc"
		<< setw(10) << "36"
		<< setw(10) << "VT"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1211510"
		<< setw(25) << "Pham Minh Duc"
		<< setw(10) << "30"
		<< setw(10) << "8.05"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1211793"
		<< setw(25) << "Nguyen Khac Vy"
		<< setw(10) << "33"
		<< setw(10) << "VT"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << "1211519"
		<< setw(25) << "Nguyen Tan Tai"
		<< setw(10) << "34"
		<< setw(10) << "2.89"
		<< endl;
	cout << setw(25) << "=================================================";
	_getch();
	return 1;
}