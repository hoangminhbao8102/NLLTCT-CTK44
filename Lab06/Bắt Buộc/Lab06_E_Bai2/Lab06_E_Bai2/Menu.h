void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, MaTranVuong a, int& n);
void XuatMenu()
{
	cout << endl << "================= CHON MENU =================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran";
	cout << endl << "2. Xem ma tran";
	cout << endl << "3. Kiem tra ma tran co phai la ma tran doi xung";
	cout << endl << "4. Kiem tra ma tran co phai la ma tran tam giac tren";
	cout << endl << "5. Kiem tra ma tran co phai la ma tran tam giac duoi";
	cout << endl << "6. Kiem tra ma tran co phai la ma tran cheo";
	cout << endl << "7. Kiem tra ma tran co phai la ma tran don vi";
	cout << endl << "=============================================";
}
int ChonMenu(int SoMenu)
{
	int STT;
	for (;;)
	{
		system("CLS");
		cout << "\nNhap 1 so khong khoang [0,..," << SoMenu << "] de chon chuc nang, stt = ";
		cin >> STT;
		if (0 <= STT && STT <= SoMenu)
			break;
	}
	return STT;
}
void XuLyMenu(int menu, MaTranVuong a, int& n)
{
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0.Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Nhap ma tran";
		cout << "\nNhap cap ma tran vuong : n = ";
		cin >> n;
		cout << "\nNhap ma tran : ";
		NhapMaTran(a, n);
		system("CLS");
		cout << "\nXem lai ma tran vua nhap : ";
		XuatMaTran(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Xem ma tran";
		XuatMaTran(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Kiem tra ma tran co phai la ma tran doi xung";
		cout << "\nMa tran : ";
		XuatMaTran(a, n);
		if (MaTranDoiXung(a, n))
			cout << "\nDay la ma tran doi xung!";
		else cout << "\nDay khong phai la ma tran doi xung!";
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Kiem tra ma tran co phai la ma tran tam giac tren";
		cout << "\nMa tran : ";
		XuatMaTran(a, n);
		if (MaTranTamGiacTren(a, n))
			cout << "\nDay la ma tran tam giac tren!";
		else cout << "\nDay khong phai la ma tran tam giac tren!";
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Kiem tra ma tran co phai la ma tran tam giac duoi";
		cout << "\nMa tran : ";
		XuatMaTran(a, n);
		if (MaTranTamGiacDuoi(a, n))
			cout << "\nDay la ma tran tam giac duoi!";
		else cout << "\nDay khong phai la ma tran tam giac duoi!";
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Kiem tra ma tran co phai la ma tran cheo";
		cout << "\nMa tran : ";
		XuatMaTran(a, n);
		if (MaTranCheo(a, n))
			cout << "\nDay la ma tran cheo!";
		else cout << "\nDay khong phai la ma tran cheo!";
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Kiem tra ma tran co phai la ma tran don vi";
		cout << "\nMa tran : ";
		XuatMaTran(a, n);
		if (MaTranDonVi(a, n))
			cout << "\nDay la ma tran don vi!";
		else cout << "\nDay khong phai la ma tran don vi!";
		break;
	}
	_getch();
}