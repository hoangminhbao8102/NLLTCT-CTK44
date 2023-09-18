void XuatMenu(unsigned int n);
int ChonMenu(int SoMenu, unsigned int n);
void XuLyMenu(int SoMenu, unsigned int n);
void XuatMenu(unsigned int n)
{
	cout << "\n============ BANG CHON CHUC NANG ===============\n";
	cout << "\n0. Thoat chuong trinh.";
	cout << "\n1. Xuat cac so tu 1..." << n;
	cout << "\n2. So chia het cho 3 - khong chia het cho 4 trong doan 1.." << n;
	cout << "\n3. Dem so luong chu so cua " << n;
	cout << "\n4. Dao nguoc so " << n;
	cout << "\n5. Tinh tong cac chu so trong " << n;
	cout << "\n6. Cho biet chu so dau tien cua " << n;
	cout << "\n7. Tim so nguyen m de tong 1+2+...+m <= " << n;
	cout << "\n================================================";
}
int ChonMenu(int SoMenu, unsigned int n)
{
	int STT;
	for (;;)
	{
		system("CLS");
		XuatMenu(n);
		cout << "\nNhap 1 so de chon menu (0 <= STT <= " << SoMenu << ") : STT = ";
		cin >> STT;
		if (0 <= STT && STT < SoMenu) break;
	}
	return STT;
}
void XuLyMenu(int SoMenu, unsigned int n)
{
	int Dem;
	switch (SoMenu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Xuat cac so tu 1... " << n << ": " << endl;
		XuatSo(n);
		break;
	case 2:
		cout << "\n2. So chia het cho 3 - khong chia het cho 4 trong doan 1.." << n;
		Dem = DemSoChiaHet(n);
		cout << "\nSo luong so trong doan 1.." << n
			<< " chia het cho 3 nhung khong chia het cho 4 la " << Dem;
		break;
	case 3:
		cout << "\n3. Dem so luong chu so cua " << n;
		Dem = DemSoLuong(n);
		cout << "\nSo " << n << " co " << Dem << " chu so.";
		break;
	case 4:
		cout << "\n4. Dao nguoc so " << n << endl;
		Dem = SoDaoNguoc(n);
		cout << "\nSo dao nguoc cua " << n << " la: " << Dem;
		break;
	case 5:
		cout << "\n5. Tinh tong cac chu so trong " << n;
		Dem = TinhTongSo(n);
		cout << "\nTong cac chu so cua " << n << " la : " << Dem;
		break;
	case 6:
		cout << "\n6. Cho biet chu so dau tien cua " << n;
		Dem = TimChuSoDauTien(n);
		cout << "\nChu so dau tien cua " << n << " la : " << Dem;
		break;
	case 7:
		cout << "\n8. Tim so nguyen m de tong 1+2+...+m <= " << n;
		Dem = TimSoNguyenThoaDieuKien(n);
		cout << "\n1 + 2 + ... + " << Dem << " <= " << n;
		break;
	}
	_getch();
}