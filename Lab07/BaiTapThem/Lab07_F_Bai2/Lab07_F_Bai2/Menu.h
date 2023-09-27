void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, string s);

void XuatMenu()
{
	cout << "\n=================== Bang Menu ===================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Tach xau thanh mang cac tu";
	cout << "\n2. Kiem tra xau co chua so hay khong";
	cout << "\n3. Tach cac so trong xau thanh mang rieng";
	cout << "\n4. Dao nguoc thu tu cac tu trong xau";
	cout << "\n=================================================";
}

int ChonMenu(int SoMenu)
{
	int STT;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\n\nNhap 1 so khong khoang [0,..," << SoMenu << "] de chon chuc nang, stt = ";
		cin >> STT;
		if (0 <= STT && STT <= SoMenu)
			break;
	}
	return STT;
}

void XuLyMenu(int menu, string s)
{
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		cout << "\nNhan phim bat ky de THOAT";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Tach xau thanh mang cac tu";
		{
			vector<string> mangTu = TachXau(s);
			cout << "Cac tu trong xau la: ";
			for (int i = 0; i < mangTu.size(); i++) 
			{
				cout << mangTu[i] << " ";
			}
			cout << endl;
		}
		break;
	case 2:
		system("CLS");
		cout << "\n2. Kiem tra xau co chua so hay khong";
		{
			bool chuaSo = KiemTraChuaSo(s);
			if (chuaSo) 
			{
				cout << "Xau chua ky tu so" << endl;
			}
			else 
			{
				cout << "Xau khong chua ky tu so" << endl;
			}
		}
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tach cac so trong xau thanh mang rieng";
		{
			vector<int> mangSo = TachSo(s);
			cout << "Cac so trong xau la: ";
			for (int i = 0; i < mangSo.size(); i++) 
			{
				cout << mangSo[i] << " ";
			}
			cout << endl;
		}
		break;
	case 4:
		system("CLS");
		cout << "\n4. Dao nguoc thu tu cac tu trong xau";
		{
			string xauDaoNguoc = DaoNguocTu(s);
			cout << "Xau sau khi dao nguoc thu tu cac tu la: " << xauDaoNguoc << endl;
		}
		break;
	default:
		cout << "Lua chon khong hop le. Vui long chon lai!" << endl;
		break;
	}
	_getch();
}