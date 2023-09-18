void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, DaySo a, int n);
void XuatMenu()
{
	cout << endl << "================== CHON CHUC NANG =================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Xuat mang";
	cout << endl << "2. Tim vi tri cua so nguyen to cuoi cung trong a";
	cout << endl << "3. Tim phan tu xuat hien nhieu nhat va so lan xuat hien cua no";
	cout << endl << "4. Tim phan tu co gia tri nho nhat trong mang va vi tri xuat hien dau tien cua no";
	cout << endl << "5. Tim so am lon nhat va vi tri cua no";
	cout << endl << "6. Tim so duong nho nhat va vi tri cua no";
	cout << endl << "===================================================";
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
void XuLyMenu(int menu, DaySo a, int n)
{
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Xuat mang";
		cout << "\nDay hien hanh : \n";
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Tim vi tri cua so nguyen to cuoi cung trong a";
		int vt;
		vt = NguyenToCuoiCung(a, n);
		cout << "\nVi tri so nguyen to cuoi cung trong doan [0,...," << n - 1 << "] la : " << vt;
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tim phan tu xuat hien nhieu nhat va so lan xuat hien cua no";
		XuatHienNhieuNhat(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tim phan tu co gia tri nho nhat trong mang va vi tri xuat hien dau tien cua no";
		NhoNhat_DauTien(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Tim so am lon nhat va vi tri cua no";
		SoAmLonNhat(a, n);
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Tim so duong nho nhat va vi tri cua no";
		SoDuongNhoNhat(a, n);
		break;
	}
	_getch();
}