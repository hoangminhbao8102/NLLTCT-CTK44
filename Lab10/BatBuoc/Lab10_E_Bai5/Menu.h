void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, int arr[], int size);

void XuatMenu()
{
	cout << "======== HE THONG CHUC NANG ========";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Dem so lan xuat hien cua mot so trong day.";
	cout << "\n2. Dem so cac so nguyen to trong day.";
	cout << "\n===================================";
}

int ChonMenu(int SoMenu)
{
	int STT;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so stt (1 <= stt <= " << SoMenu << ") de chon menu, stt = ";
		cin >> STT;
		if (0 <= STT && STT <= SoMenu)
			break;
	}
	return STT;
}

void XuLyMenu(int menu, int arr[], int size)
{
	system("CLS");
	int x, dem;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		cout << "\n1. Dem so lan xuat hien cua mot so trong day.";
		cout << "Nhập số cần tìm số lần xuất hiện trong dãy: ";
		cin >> x;
		dem = DemSoLanXuatHien(arr, size, x);
		cout << "Số lần xuất hiện của " << x << " trong dãy là: " << dem << endl;
		break;
	case 2:
		cout << "\n2. Dem so cac so nguyen to trong day.";
		dem = DemSoNguyenTo(arr, size);
		cout << "Số lượng số nguyên tố trong dãy là: " << dem << endl;
		break;
	default:
		cout << "\nLựa chọn không hợp lệ.";
		break;
	}
	_getch();
}