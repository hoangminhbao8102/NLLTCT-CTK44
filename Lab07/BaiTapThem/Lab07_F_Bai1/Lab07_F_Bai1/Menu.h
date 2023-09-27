void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, string s, string t);

void XuatMenu()
{
	cout << "\n=================== Bang Menu ===================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Liet ke cac ky tu xuat hien trong ca hai xau s va t";
	cout << "\n2. Liet ke cac tu xuat hien trong ca hai xau s va t";
	cout << "\n3. Tim va liet ke tu dai nhat trong xau s";
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

void XuLyMenu(int menu, string s, string t)
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
		cout << "\n1. Liet ke cac ky tu xuat hien trong ca hai xau s va t";
		LietKeKyTuXuatHien(s, t);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Liet ke cac tu xuat hien trong ca hai xau s va t";
		LietKeTuXuatHien(s, t);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tim va liet ke tu dai nhat trong xau s";
		TimVaLietKeTuDaiNhat(s);
		break;
	default:
		cout << "Lua chon khong hop le. Vui long chon lai!" << endl;
		break;
	}
	_getch();
}