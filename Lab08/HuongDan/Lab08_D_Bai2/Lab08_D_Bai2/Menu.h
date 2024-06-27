void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, PhanSo a, PhanSo b, int& n);

void XuatMenu()
{
	cout << "\n==============He thong chuc nang=========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap phan so";
	cout << "\n2. Xem phan so";
	cout << "\n3. Rut gon phan so";
	cout << "\n4. Cong 2 phan so";
	cout << "\n5. Tru 2 phan so";
	cout << "\n6. Nhan 2 phan so";
	cout << "\n7. Chia 2 phan so";
	cout << "\n8. So sanh 2 phan so";
	cout << "\n=========================================================";
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

void XuLyMenu(int menu, PhanSo a, PhanSo b, int& n)
{
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap phan so";
		cout << "Nhap phan so 1: ";
		a = Nhap_PS();
		cout << "Nhap phan so 2: ";
		b = Nhap_PS();
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem phan so";
		cout << "Phan so 1: ";
		XuatPS(a);
		cout << "Phan so 2: ";
		XuatPS(b);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Rut gon phan so";
		cout << "Rut gon phan so 1: ";
		RutGon(a);
		cout << "Rut gon phan so 2: ";
		RutGon(b);
		break;
	case 4:
		system("CLS");
		cout << "\n4. Cong 2 phan so";
		cout << "Tong 2 phan so: ";
		XuatPS(CongPhanSo(a, b));
		break;
	case 5:
		system("CLS");
		cout << "\n5. Tru 2 phan so";
		cout << "Hieu 2 phan so: ";
		XuatPS(TruPhanSo(a, b));
		break;
	case 6:
		system("CLS");
		cout << "\n6. Nhan 2 phan so";
		cout << "Tich 2 phan so: ";
		XuatPS(NhanPhanSo(a, b));
		break;
	case 7:
		system("CLS");
		cout << "\n7. Chia 2 phan so";
		cout << "Thuong 2 phan so: ";
		XuatPS(ChiaPhanSo(a, b));
		break;
	case 8:
		system("CLS");
		cout << "\n8. So sanh 2 phan so";
		if (SoSanhPhanSo(a, b) == 1)
		{
			cout << "Phan so 1 lon hon phan so 2" << endl;
		}
		else if (SoSanhPhanSo(a, b) == -1)
		{
			cout << "Phan so 1 nho hon phan so 2" << endl;
		}
		else
		{
			cout << "Hai phan so bang nhau" << endl;
		}
		break;
	}
}