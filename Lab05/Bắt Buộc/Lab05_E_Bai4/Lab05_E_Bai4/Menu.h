void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int n);
void XuatMenu()
{
	cout << endl << "================== CHON CHUC NANG =================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Xuat mang";
	cout << endl << "2. Chen phan tu x vao mang a tai vi tri vt cho truoc";
	cout << endl << "3. Chen phan tu x vao sau phan tu lon nhat trong mang";
	cout << endl << "4. Chen phan tu x vao truoc so nguyen to dau tien trong mang";
	cout << endl << "5. Chen phan tu x vao sau moi phan tu y cho truoc";
	cout << endl << "6. Thay the gia tri nho nhat bang gia tri x cho truoc";
	cout << endl << "===================================================";
}
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so khong khoang [0,..," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}
void XuLyMenu(int menu, DaySo a, int n)
{
	int vt, x, t;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trình";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Xuat mang";
		cout << "\nDay hien hanh : \n";
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Chen phan tu x vao mang a tai vi tri vt cho truoc";
		cout << endl << "Chon vi tri muon chen vao [0,...," << n - 1 << "] : ";
		cin >> vt;
		cout << endl << "Phan tu can chen vao la : ";
		cin >> x;
		cout << endl << "Mang truoc : \n";
		XuatMang(a, n);
		cout << endl << "Mang sau khi chen : \n";
		ChenBatKy(a, n, x, vt);
		XuatMang(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Chen phan tu x vao sau phan tu lon nhat trong mang";
		cout << endl << "Phan tu can chen vao la : ";
		cin >> x;
		t = PhanTuLonNhat(a, n);
		vt = PhanTuDauTien(a, n, t);
		cout << endl << "Mang truoc : \n";
		XuatMang(a, n);
		cout << endl << "Mang sau khi chen : \n";
		ChenBatKy(a, n, x, vt + 1);
		XuatMang(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Chen phan tu x vao truoc so nguyen to dau tien trong mang";
		for (int i = 1; i < n; i++)
			if (KiemTraNT(a[i]))
			{
				vt = i;
				break;
			}
		cout << endl << "Phan tu can chen vao la : ";
		cin >> x;
		cout << endl << "Mang truoc : \n";
		XuatMang(a, n);
		cout << endl << "Mang sau khi chen : \n";
		ChenBatKy(a, n, x, vt);
		XuatMang(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Chen phan tu x vao sau moi phan tu y cho truoc";
		int y;
		cout << endl << "Nhap phan tu y : ";
		cin >> y;
		cout << endl << "Phan tu can chen vao la : ";
		cin >> x;
		cout << endl << "Mang truoc : \n";
		XuatMang(a, n);
		cout << endl << "Mang sau khi chen : \n";
		ChenXTruocY(a, n, y, x);
		XuatMang(a, n);
		break;
	case 6:
		cout << endl << "6. Thay the gia tri nho nhat bang gia tri x cho truoc";
		cout << endl << "Phan tu can thay the vao la : ";
		cin >> x;
		cout << endl << "Mang truoc : \n";
		XuatMang(a, n);
		cout << endl << "Mang sau khi chen : \n";
		ThayX(a, n, x);
		XuatMang(a, n);
		break;
	}
	_getch();
}