void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, int** matrix, int& n);

void XuatMenu()
{
	cout << "\n===========================HE THONG CHUC NANG===========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Tao va hien thi ma tran xoan oc";
	cout << "\n2. Tinh trung binh cong cua cac phan tu";
	cout << "\n3. Tinh tong binh phuong cua cac phan tu";
	cout << "\n4. Tinh do lech lon nhat giua hai phan tu lien tiep";
	cout << "\n5. Tinh tong lon nhat cua k phan tu lien tiep";
	cout << "\n6. Tim phan tu xuat hien nhieu nhat va so lan xuat hien";
	cout << "\n7. Tim so am lon nhat va vi tri cua no";
	cout << "\n8. Dem cac phan tu xuat hien it nhat k lan";
	cout << "\n9. Dem so lan xuat hien cua phan tu x tu vi tri vt";
	cout << "\n10. Xao tron cac phan tu trong mang";
	cout << "\n11. Sap xep so nguyen to dau mang, so con lai giam dan";
	cout << "\n========================================================================";
}

int ChonMenu(int SoMenu)
{
	int STT;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0,...," << SoMenu << "] de chon chuc nang, stt = ";
		cin >> STT;
		if (0 <= STT && STT <= SoMenu)
			break;
	}
	return STT;
}

void XuLyMenu(int menu, int** matrix, int& n)
{
    switch (menu)
    {
    case 0:
        system("CLS");
        cout << "\n0. Thoat khoi chuong trinh\n";
        exit(0);
        break;
    case 1:
        system("CLS");
        cout << "\n1. Tao va hien thi ma tran xoan oc\n";
        matrix = createSpiralMatrix(n);
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        break;
    case 2:
        system("CLS");
        cout << "\n2. Tinh trung binh cong cua cac phan tu\n";
        cout << "Trung binh cong: " << averageMatrix(matrix, n) << endl;
        break;
    case 3:
        system("CLS");
        cout << "\n3. Tinh tong binh phuong cua cac phan tu\n";
        cout << "Tong binh phuong: " << sumOfSquares(matrix, n) << endl;
        break;
    case 4:
        system("CLS");
        cout << "\n4. Tinh do lech lon nhat giua hai phan tu lien tiep\n";
        cout << "Do lech lon nhat: " << maxDifferenceConsecutive(matrix, n) << endl;
        break;
    case 5:
        system("CLS");
        cout << "\n5. Tinh tong lon nhat cua k phan tu lien tiep\n";
        int k;
        cout << "Nhap k: ";
        cin >> k;
        cout << "Tong lon nhat cua " << k << " phan tu lien tiep: " << maxSumOfKConsecutive(matrix, n, k) << endl;
        break;
    case 6:
        system("CLS");
        cout << "\n6. Tim phan tu xuat hien nhieu nhat va so lan xuat hien\n";
        findMostFrequent(matrix, n);
        break;
    case 7:
        system("CLS");
        cout << "\n7. Tim so am lon nhat va vi tri cua no\n";
        findMaxNegative(matrix, n);
        break;
    case 8:
        system("CLS");
        cout << "\n8. Dem cac phan tu xuat hien it nhat k lan\n";
        cout << "Nhap k: ";
        cin >> k;
        countAndPrintElementsAtLeastKTimes(matrix, n, k);
        break;
    case 9:
        system("CLS");
        cout << "\n9. Dem so lan xuat hien cua phan tu x tu vi tri vt\n";
        int x, vt;
        cout << "Nhap gia tri x: ";
        cin >> x;
        cout << "Nhap vi tri vt: ";
        cin >> vt;
        cout << "So lan xuat hien cua " << x << " tu vi tri " << vt << ": " << countOccurrencesFrom(matrix, n, x, vt) << endl;
        break;
    case 10:
        system("CLS");
        cout << "\n10. Xao tron cac phan tu trong mang\n";
        shuffleMatrix(matrix, n);
        break;
    case 11:
        system("CLS");
        cout << "\n11. Sap xep so nguyen to dau mang, so con lai giam dan\n";
        sortPrimesFirst(matrix, n);
        break;
    default:
        system("CLS");
        cout << "\nTuy chon khong hop le. Vui long thu lai.\n";
        break;
    }
}