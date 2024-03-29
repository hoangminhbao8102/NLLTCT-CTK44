void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, DayDong a, int& n);

void XuatMenu()
{
	cout << "\n===========================HE THONG CHUC NANG===========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap tu dong mang";
	cout << "\n2. Xem mang da nhap";
	cout << "\n3. Tinh gia tri lon nhat";
	cout << "\n4. Tinh tong cac phan tu cua mang";
	cout << "\n5. Dem so luong cac duong chay trong day";
	cout << "\n6. Dem so lan xuat hien cua x trong day";
	cout << "\n7. Dem so duong xuat hien trong day";
	cout << "\n========================================================================";
}

int ChonMenu(int SoMenu)
{
	int STT;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang tu [0,...," << SoMenu << "] de chon chuc nang, stt = ";
		cin >> STT;
		if (0 <= STT && STT <= SoMenu)
			break;
	}
	return STT;
}

void XuLyMenu(int menu, DayDong a, int& n)
{
	int kq, x;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		delete[]a;
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap tu dong mang\n";
		cout << "\nNhap kich thuoc mang : ";
		cin >> n;
		NhapTuDong(a, n);
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem mang\n";
		XuatMang(a, n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tinh gia tri lon nhat\n";
		kq = TimMax(a, n);
		cout << "\nXem lai day : \n";
		XuatMang(a, n);
		cout << "\nGia tri lon nhat cua day la : " << kq;
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tinh tong cac phan tu cua mang\n";
		cout << "\nXem lai day : \n";
		XuatMang(a, n);
		kq = TinhTong(a, n);
		cout << "\nTong cac phan tu cua day tren la : " << kq;
		break;
	case 5:
		system("CLS");
		cout << "\n5. Dem so duong chay trong day\n";
		cout << "\nXem lai day : \n";
		XuatMang(a, n);
		kq = TinhSoDC(a, n);
		cout << "\nSo duong chay trong day tren la : " << kq;
		break;
	case 6:
		char thoat;
		do
		{
			system("CLS");
			cout << "\n6. Dem so lan xuat hien cua x trong day\n";
			cout << "\nXem lai day : \n";
			XuatMang(a, n);
			cout << "\nNhap gia tri can tim x = ";
			cin >> x;
			kq = DemX(a, x, n);
			if (kq == 0)
				cout << "\nKhong co x = " << x << " trong day";
			else
				cout << "\nx = " << x << " xuat hien " << kq << " lan";
			cout << "\n\nNhap nua khong, nhan ESC neu muon thoat khoi menu 6!";
			thoat = _getch();
		} while (thoat != 27);
		break;
	case 7:
		system("CLS");
		cout << "\n7. 7. Dem so duong xuat hien trong day\n";
		cout << "\nXem lai day : \n";
		XuatMang(a, n);
		kq = DemSoDuong(a, n);
		cout << "\nSo luong so duong trong day tren la : " << kq;
		break;
	}
	_getch();
}