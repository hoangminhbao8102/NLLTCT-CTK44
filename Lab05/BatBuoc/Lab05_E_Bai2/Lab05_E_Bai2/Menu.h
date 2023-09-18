void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, DaySo a, int n);
void XuatMenu()
{
	cout << endl << "================== CHON CHUC NANG =================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Xuat mang";
	cout << endl << "2. Dem so luong so co 3 chu so";
	cout << endl << "3. Dem cac so nam ngoai pham vi [min..max] cho truoc";
	cout << endl << "4. Dem so luong so chinh phuong";
	cout << endl << "5. Dem so lan xuat hien cua phan tu x ke tu vi tri vt cho truoc";
	cout << endl << "6. Dem so luong cac duong chay trong day";
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
	int kq;
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
		cout << endl << "2. Dem so luong so co 3 chu so";
		kq = So3ChuSo(a, n);
		cout << endl << "Co " << kq << " phan tu co 3 chu so";
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Dem cac so nam ngoai pham vi [min..max] cho truoc";
		double min, max;
		cout << "\nNhap min = ";
		cin >> min;
		cout << "\nNhap max = ";
		cin >> max;
		kq = NamNgoaiPhamVi(a, n, min, max);
		cout << "\nCo " << kq << " so nam ngoai [" << min << ",..," << max << "]";
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Dem so luong so chinh phuong";
		kq = DemSoChinhPhuong(a, n);
		cout << "\nCo " << kq << " so chinh phuong";
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Dem so lan xuat hien cua phan tu x ke tu vi tri vt cho truoc";
		int vt, x;
		cout << endl << "Nhap vi tri : ";
		cin >> vt;
		cout << endl << "Nhap phan tu muon tim ke tu vi tri " << vt << " : ";
		cin >> x;
		kq = DemX(a, n, x, vt);
		cout << endl << "Da tim thay " << kq << " so";
		break;
	case 6:
		cout << endl << "6. Dem so luong cac duong chay trong day";
		kq = SoDuongChay(a, n);
		cout << endl << "Co " << kq << " duong chay trong day";
		break;
	}
	_getch();
}