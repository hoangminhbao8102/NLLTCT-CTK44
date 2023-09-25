#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

#include "ThuVien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	char kt;
	int N, M;
	do
	{
		system("CLS");
		cout << "Nhap so luong sinh vien: ";
		cin >> N;

		cout << "Nhap so luong lan gia lap su kien: ";
		cin >> M;

		srand(static_cast<unsigned int>(time(0)));

		double probability = calculateProbability(N, M);

		cout << "Xac suat co it nhat mot sinh vien lay dung bia cua minh: " << probability << endl;

		cout << "\nNua khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
}