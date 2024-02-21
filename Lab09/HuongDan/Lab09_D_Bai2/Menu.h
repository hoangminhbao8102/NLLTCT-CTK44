void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, MaTranVuong a, MaTranVuong b, int& n);

void XuatMenu()
{
	cout << "\n===========================HE THONG CHUC NANG===========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap tu dong ma tran";
	cout << "\n2. Xem ma tran";
	cout << "\n3. Cong ma tran";
	cout << "\n4. Tru ma tran";
	cout << "\n5. Nhan ma tran";
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

void XuLyMenu(int menu, MaTranVuong a, MaTranVuong b, int& n)
{
	MaTranVuong c;
	c = new int[n];
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		delete[]a;
		delete[]b;
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap tu dong ma tran\n";
		cout << "\nNhap cap ma tran : ";
		cin >> n;
		cout << "\nMa tran da nhap : \n";
		cout << "\nMa tran dau tien : ";
		NhapMaTran(a, n);
		XuatMaTran(a, n);
		_getch();
		cout << "\nMa tran thu hai : ";
		NhapMaTran(b, n);
		XuatMaTran(b, n);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem ma tran\n";
		cout << "\nMa tran dau tien : ";
		XuatMaTran(a, n);
		cout << "\nMa tran thu hai : ";
		XuatMaTran(b, n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Cong ma tran\n";
		c = TinhTong_2_MaTran(a, b, n);
		cout << "\nMa tran dau tien : ";
		XuatMaTran(a, n);
		cout << "\nMa tran thu hai : ";
		XuatMaTran(b, n);
		cout << "\nTong hai ma tran tren la : ";
		XuatMaTran(c, n);
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tru ma tran\n";
		c = TinhHieu_2_MaTran(a, b, n);
		cout << "\nMa tran dau tien : ";
		XuatMaTran(a, n);
		cout << "\nMa tran thu hai : ";
		XuatMaTran(b, n);
		cout << "\nHieu hai ma tran tren la : ";
		XuatMaTran(c, n);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Nhan ma tran\n";
		c = TinhTich_2_MaTran(a, b, n);
		cout << "\nMa tran dau tien : ";
		XuatMaTran(a, n);
		cout << "\nMa tran thu hai : ";
		XuatMaTran(b, n);
		cout << "\nTich hai ma tran tren la : ";
		XuatMaTran(c, n);
		break;
	}
	_getch();
}