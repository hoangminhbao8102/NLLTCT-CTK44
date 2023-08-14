void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, double n);
void XuatMenu()
{
	cout << "\n======= CAC CHUC NANG CUA CHUONG TRINH =======";
	cout << "\n0. THOAT CHUONG TRINH";
	cout << "\n1. Tinh e(x)";
	cout << "\n2. Tinh sin(x)";
	cout << "\n3. Tinh cos(x)";
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
	double ketQua;
	switch (menu)
	{
	case 0:
		cout << "\nTHOAT KHOI CHUONG TRINH";
		break;
	case 1:
		cout << "\nTinh e(x)\n";
		ketQua = Tim_e_x(n);
		cout << "e^(" << n << ") = " << ketQua;
		break;
	case 2:
		cout << "\nTinh sin(x)\n";
		ketQua = TimSin_x(n);
		cout << "sin(" << n << ") = " << ketQua;
		break;
	case 3:
		cout << "\nTinh cos(x)\n";
		ketQua = TimCos_x(n);
		cout << "cos(" << n << ") = " << ketQua;
		break;
	}
	_getch();
}