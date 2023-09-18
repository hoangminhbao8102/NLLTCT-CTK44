void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, DaySo a, int n);
void XuatMenu()
{
	cout << endl << "================== CHON CHUC NANG =================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Xuat mang";
	cout << endl << "2. Tinh trung binh cong cua tat ca cac phan tu";
	cout << endl << "3. Tinh tong binh phuong cua tat ca cac phan tu";
	cout << endl << "4. Tinh do lech lon nhat giua 2 phan tu nam lien tiep";
	cout << endl << "5. Tinh tong cac so nguyen to co 2 chu so";
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
	double kq;
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
		cout << endl << "2. Tinh trung binh cong cua tat ca cac phan tu";
		kq = TrungBinhCong(a, n);
		cout << "\nKet qua : " << kq;
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tinh tong binh phuong cua tat ca cac phan tu";
		kq = TongBinhPhuong(a, n);
		cout << "\nKet qua : " << kq;
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tinh do lech lon nhat giua 2 phan tu nam lien tiep";
		kq = DoLechLonNhat(a, n);
		cout << "\nKet qua : " << kq;
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Tinh tong cac so nguyen to co 2 chu so";
		kq = TinhTongNT(a, n);
		cout << "\nKet qua : " << kq;
		break;
	}
	_getch();
}