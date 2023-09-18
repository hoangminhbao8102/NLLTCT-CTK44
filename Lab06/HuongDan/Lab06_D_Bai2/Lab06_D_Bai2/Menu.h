void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, int a[SIZE][SIZE], int& m, int& n);
void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran chu nhat m x n";
	cout << endl << "2. Xem ma tran chu nhat";
	cout << endl << "3. Tinh gia tri lon nhat cua ma tran";
	cout << endl << "4. Tinh gia tri lon nhat hang i ";
	cout << endl << "5. Tinh tong cacphan tu hang i ";
	cout << endl << "6. Tinh gia tri nho nhat cot j ";
	cout << endl << "7. Tinh tich cac phan tu cot j ";
	cout << endl << "8. Xuat aij : lon nhat hang I van ho nhat cot j ";
	cout << endl << "==========================================";
}
int ChonMenu(int SoMenu)
{
	int STT;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so khong khoang [0,..," << SoMenu << "] de chon chuc nang, stt = ";
		cin >> STT;
		if (0 <= STT && STT <= SoMenu)
			break;
	}
	return STT;
}
void XuLyMenu(int menu, int a[SIZE][SIZE], int& m, int& n)
{
	int kq, i, j;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Nhap ma tran chu nhat";
		cout << "\nNhap so hang : m = ";
		cin >> m;
		cout << "\nNhap so cot : n = ";
		cin >> n;
		NhapTuDong_MaTran(a, m, n);
		cout << "\nMa tran vua nhap:\n";
		XuatMaTran(a, m, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Xem ma tran chu nhat";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tinh gia tri lon nhat cua ma tran";
		kq = Tinh_Max_MaTran(a, m, n);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		cout << "\nMax(a) = " << kq;
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tinh gia tri lon nhat hang i ";
		do
		{
			cout << "\nChon hang i (0 <= i <= " << m - 1 << ") : i = ";
			cin >> i;
		} while (i < 0 || i > m - 1);
		kq = Tinh_Max_Hang_i(a, i, n);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		cout << "\nMax(hang " << i << ") = " << kq;
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Tinh tong cac phan tu hang i ";
		do
		{
			cout << "\nChon hang i (0 <= i <= " << m - 1 << ") : i = ";
			cin >> i;
		} while (i < 0 || i > m - 1);
		kq = Tinh_Tong_Hang_i(a, i, n);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		cout << "\nTong (hang " << i << ") = " << kq;
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Tinh gia tri nho nhat cot j ";
		do
		{
			cout << "\nChon cot j (0 <= j <= " << n - 1 << ") : j = ";
			cin >> j;
		} while (j < 0 || j > n - 1);
		kq = Tinh_Min_Cot_j(a, m, j);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		cout << "\nMax(cot " << j << ") = " << kq;
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Tinh tich cac phan tu cot j ";
		do
		{
			cout << "\nChon cot j (0 <= j <= " << n - 1 << ") : j = ";
			cin >> j;
		} while (j < 0 || j > n - 1);
		kq = Tinh_Tich_Cot_j(a, m, j);
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		cout << "\nTich(cot " << j << ") = " << kq;
		break;
	case 8:
		system("CLS");
		cout << endl << "8. Xuat aij : lon nhat hang i va nho nhat cot j ";
		cout << "\nMa tran hien hanh:\n";
		XuatMaTran(a, m, n);
		MaxHang_MinCot(a, m, n);
		break;
	}
	_getch();
}