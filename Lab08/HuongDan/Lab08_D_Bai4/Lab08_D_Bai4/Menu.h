void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaThuc a, int& m, DaThuc b, int& n);
void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, DaThuc A, int& m, DaThuc B, int& n);

void XuatMenu()
{
	cout << "\n==============He thong chuc nang=========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap da thuc";
	cout << "\n2. Xuat da thuc";
	cout << "\n3. Cong 2 da thuc";
	cout << "\n4. Tru 2 da thuc";
	cout << "\n5. Nhan 2 da thuc";
	cout << "\n6. Tinh gia tri cua da thuc tai x";
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

void XuLyMenu(int menu, DaThuc A, int& m, DaThuc B, int& n)
{
	DaThuc C;
	int k;
	double x;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap da thuc";
		cout << "Nhap da thuc A: " << endl;
		NhapDaThuc(A, m, 'A');
		cout << "Nhap da thuc B: " << endl;
		NhapDaThuc(B, n, 'B');
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xuat da thuc";
		cout << "Da thuc A: ";
		XuatDaThuc(A, m);
		cout << "Da thuc B: ";
		XuatDaThuc(B, n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Cong 2 da thuc";
		Tong2DaThuc(A, m, B, n, C, k);
		cout << "Tong 2 da thuc: ";
		XuatDaThuc(C, k);
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tru 2 da thuc";
		Hieu2DaThuc(A, m, B, n, C, k);
		cout << "Hieu 2 da thuc: ";
		XuatDaThuc(C, k);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Nhan 2 da thuc";
		NhanDaThuc(A, m, B, n, C, k);
		cout << "Tich 2 da thuc: ";
		XuatDaThuc(C, k);
		break;
	case 6:
		system("CLS");
		cout << "\n6. Tinh gia tri cua da thuc tai x";
		cout << "Nhap gia tri x: ";
		cin >> x;
		cout << "Gia tri da thuc A tai x = " << x << " la: " << A_x(A, m, x) << endl;
		cout << "Gia tri da thuc B tai x = " << x << " la: " << A_x(B, n, x) << endl;
		break;
	}
	_getch();
}