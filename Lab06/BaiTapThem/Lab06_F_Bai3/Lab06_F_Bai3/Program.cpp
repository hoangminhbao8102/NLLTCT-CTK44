#include <iostream>
#include <conio.h>

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
	int n;
	char matrix[MAX_SIZE][MAX_SIZE];
	do
	{
		system("CLS");
        cout << "Nhap kich thuoc ma tran: ";
        cin >> n;

        // Nhập ma trận
        cout << "Nhap ma tran:\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }

        // Gọi hàm tìm dãy liên tiếp
        int maxLen = TimDayLienTiepX(matrix, n);

        // In kết quả
        cout << "Do dai day lien tiep chua X lon nhat: " << maxLen << endl;

		cout << "\n\nNua khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
}