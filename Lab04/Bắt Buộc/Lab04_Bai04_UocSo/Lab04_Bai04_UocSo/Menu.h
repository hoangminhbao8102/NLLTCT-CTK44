void XuatMenu(unsigned int n);
int ChonMenu(int SoMenu, unsigned int n);
void XuLyMenu(int menu, unsigned int n);
void XuatMenu(unsigned int n)
{
	cout << "\n=========== CHUONG TRINH UOC SO ============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Xuat tat ca cac uoc so cua " << n;
	cout << "\n2. Dem so luong cac uoc so cua " << n;
	cout << "\n3. Tinh tong cac uoc so cua " << n;
	cout << "\n4. Tim so lon nhat nho hon hoac bang " << n << " ma la luy thua cua 2";
	cout << "\n5. Kiem tra so hoan hao";
	cout << "\n============================================\n";
}
int ChonMenu(int SoMenu, unsigned int n)
{
	int STT = -2;
	while (STT < 0 || STT > SoMenu)
	{
		system("CLS");
		XuatMenu(n);
		cout << "\nChon chuc nang tuong ung : ";
		cin >> STT;
	}
	return STT;
}
void XuLyMenu(int menu, unsigned int n)
{
	int x;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Xuat tat ca cac uoc so cua " << n << endl;
		XuatUocSo(n);
		break;
	case 2:
		cout << "\n2. Dem so luong cac uoc so cua " << n;
		x = DemUocSo(n);
		cout << "\nSo luong uoc so cua " << n << " la " << x;
		break;
	case 3:
		cout << "\n3. Tinh tong cac uoc so cua " << n;
		x = TongUocSo(n);
		cout << "\nTong cac uoc so cua " << n << " la : " << x;
		break;
	case 4:
		cout << "\n4. Tim so lon nhat nho hon hoac bang " << n << " ma la luy thua cua 2";
		x = TimSoLonNhat(n);
		cout << "\nSo lon nhat thoa dieu kien la " << x;
		break;
	case 5:
		cout << "\n5. Kiem tra so hoan hao";
		if (LaSoHoanHao(n))
			cout << "\n" << n << " la so hoan hao";
		else
			cout << "\n" << n << " khong phai la so hoan hao";
		break;
	}
	_getch();
}