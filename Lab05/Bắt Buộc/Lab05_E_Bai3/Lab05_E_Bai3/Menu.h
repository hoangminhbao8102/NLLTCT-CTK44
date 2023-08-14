void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, DaySo a, int n);
void XuatMenu()
{
	cout << endl << "================== CHON CHUC NANG =================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Xuat mang";
	cout << endl << "2. Sap cac so duong tang dan, cac so khac giu nguyen thu tu";
	cout << endl << "3. Sap cac phan tu sao cho so 0 nam o cuoi mang, cac so khac o dau mang va tang dan";
	cout << endl << "4. Sap cac phan tu sao cho so 0 o dau mang, so am o giua va giam dan, so duong o cuoi va tang";
	cout << endl << "5. Sap cac so le nam dau mang va tang dan, cac so chan nam cuoi mang va giam dan";
	cout << endl << "6. Sap cac so nguyen to nam dau mang va tang, cac so con lai nam o cuoi va giam dan";
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
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Xuat mang";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Sap cac so duong tang dan, cac so khac giu nguyen thu tu";
		SapCacSoDuongTangDanCacSoKhacGiuNguyenThuTu(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Sap cac phan tu sao cho so 0 nam o cuoi mang, cac so khac o dau mang va tang dan";
		SapCacPhanTuSaoChoSo0NamOCuoiMangCacSoKhac0DauMangVaTangDan(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Sap cac phan tu sao cho so 0 o dau mang, so am o giua va giam dan, so duong o cuoi va tang";
		SapCacPhanTuSaoChoSo0ODauMangSoAm0GiuaVaGiamDanSoDuong0CuoiVaTang(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Sap cac so le nam dau mang va tang dan, cac so chan nam cuoi mang va giam dan";
		SapCacSoLe0DauMangVaTangDanCacSoChan0CuoiCungMangVaGiamDan(a, n);
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Sap cac so nguyen to nam dau mang va tang, cac so con lai nam o cuoi va giam dan";
		SapCacSoNguyenTo0DauMangVaTangCacSoConLai0CuoiMangVaGiamDan(a, n);
		break;
	}
	_getch();
}