void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, double n);
void XuatMenu()
{
	cout << "\n======= CAC CHUC NANG CUA CHUONG TRINH =======";
	cout << "\n0. THOAT CHUONG TRINH";
	cout << "\n1. Xuat so fibonacci thu n";
	cout << "\n2. Liet ke so fibonacci nho hon hoac bang n";
	cout << "\n3. Liet ke n so fibonacci dau tien";
	cout << "\n==============================================";
}
int ChonMenu(int SoMenu)
{
	int STT;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap so thu tu menu : ";
		cin >> STT;
		if (0 <= STT && STT <= SoMenu)
			break;
	}
	return STT;
}
void XuLyMenu(int menu, double n)
{
	double KetQua;
	switch (menu)
	{
	case 0:
		cout << "\nTHOAT KHOI CHUONG TRINH";
		break;
	case 1:
		cout << "\nXuat so fibonacci thu " << n << "\n";
		KetQua = TimVaXuatSoFibo(n - 1);
		cout << "So fibonacci thu " << n << " la : " << KetQua;
		break;
	case 2:
		cout << "\nLiet ke so fibonacci nho hon hoac bang " << n << "\n";
		LietKeSoFiboNhoHonHoacBangN(n);
		break;
	case 3:
		cout << "\nLiet ke " << n << " so fibonacci dau tien\n";
		LietKeSoFiboDauTien(n - 1);
		break;
	}
	_getch();
}