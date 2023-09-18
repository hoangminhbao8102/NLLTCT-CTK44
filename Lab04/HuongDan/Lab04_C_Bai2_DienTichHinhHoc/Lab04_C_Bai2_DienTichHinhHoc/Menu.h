void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu);
void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Tinh dien tich hinh vuong";
	cout << endl << "2. Tinh dien tich hinh chu nhat";
	cout << endl << "3. Tinh dien tich hinh tam giac";
	cout << endl << "4. Tinh dien tich hinh tron";
	cout << endl << "================================";
}
int ChonMenu(int SoMenu)
{
	int STT;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so de chon menu ( 0 <= stt <= " << SoMenu << " ) : stt = ";
		cin >> STT;
		if (0 <= STT && STT <= SoMenu)
			break;
	}
	return STT;
}
void XuLyMenu(int menu)
{
	double a, b, c, r, DienTich;
	switch (menu)
	{
	case 0:
		cout << endl << "0. Thoat khoi chuong trinh";
		break;
	case 1:
		cout << endl << "1. Tinh dien tich hinh vuong";
		cout << endl << "Nhap do dai canh hinh vuong : ";
		cin >> a;
		DienTich = DienTichHinhVuong(a);
		cout << endl << "Dien tich hinh vuong canh "
			<< a << " la " << DienTich;
		break;
	case 2:
		cout << endl << "2. Tinh dien tich hinh chu nhat";
		cout << endl << "Nhap chieu dai hinh CN : ";
		cin >> a;
		cout << endl << "Nhap chieu rong hinh CN : ";
		cin >> b;
		DienTich = DienTichHinhChuNhat(a, b);
		cout << endl << "Dien tich hinh chu nhat "
			<< " co chieu dai = " << a
			<< " chieu rong = " << b << " la " << DienTich;
		break;
	case 3:
		cout << endl << "3. Tinh dien tich hinh tam giac";
		cout << endl << "Nhap do dai canh a : ";
		cin >> a;
		cout << endl << "Nhap do dai canh b : ";
		cin >> b;
		cout << endl << "Nhap do dai canh c : ";
		cin >> c;
		DienTich = DienTichTamGiac(a, b, c);
		cout << endl << "Dien tich hinh tam giac "
			<< " co 3 canh a = " << a << ", b = " << b
			<< ", c = " << c << " la " << DienTich;
		break;
	case 4:
		cout << endl << "4. Tinh dien tich hinh tron";
		cout << endl << "Nhap do dai ban kinh : ";
		cin >> r;
		DienTich = DienTichHinhTron(r);
		cout << endl << "Dien tich hinh tron ban kinh "
			<< a << " la " << DienTich;
		break;
	}
	_getch();
}