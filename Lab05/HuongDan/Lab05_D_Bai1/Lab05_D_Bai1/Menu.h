void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, DaySo a, int n);
void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Kiem tra x nam trong mang a";
	cout << endl << "2. Tim vi tri dau tien x xuat hien trong a";
	cout << endl << "3. Kiem tra mang a la day tang";
	cout << endl << "4. Tim phan tu lon nhat";
	cout << endl << "5. Tim vi tri cuoi cung gia tri lon nhat xuat hien";
	cout << endl << "6. Neu a chua x thi cung chua -x";
	cout << endl << "7. Xem du lieu day so";
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
void XuLyMenu(int menu, DaySo a, int n)
{
	int x, kq;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Kiem tra x nam trong mang a";
		cout << endl << "Nhap gia tri x : ";
		cin >> x;
		kq = ChuaX(a, n, x);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (kq)
			cout << endl << "Mang co chua " << x;
		else
			cout << endl << "Mang khong chua " << x;
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Tim vi tri dau tien x xuat hien trong a";
		cout << endl << "Nhap gia tri x : ";
		cin >> x;
		kq = Tim_VTDT_X(a, n, x);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (kq == -1)
			cout << endl << "Mang khong chua " << x;
		else
			cout << "\nVi tri dau tien " << x << " xuat hien trong a la : " << kq;
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Kiem tra mang a la day tang";
		kq = KiemTraMangTang(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (kq)
			cout << endl << "a la mang tang.";
		else
			cout << endl << "a khong phai mang tang.";
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tim phan tu lon nhat";
		kq = TinhMax(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		cout << "\nMax[0,..," << n << "] = " << kq;
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Tim vi tri phan tu lon nhat";
		kq = TimViTriMax_CuoiCung(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		cout << endl << "Vi tri xuat hien cuoi cung cua gia tri lon nhat la " << kq;
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Neu a chua x thi cung chua -x";
		kq = ChuaXChuaTruX(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (kq)
			cout << endl << "Phat bieu dung ";
		else
			cout << endl << "Phat bieu sai ";
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Xem du lieu day so";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	}
	_getch();
}