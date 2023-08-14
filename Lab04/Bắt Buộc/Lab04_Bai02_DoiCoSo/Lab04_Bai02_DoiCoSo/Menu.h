#define		BIN			2
#define		OCT			8
#define		HEX			16
#define		SEV			7
void XuatMenu();
int ChonMenu(int SoMenu, int n);
void XuLyMenu(int menu, unsigned int n);
void XuatMenu()
{
	cout << "\n =========== CHUONG TRINH DOI CO SO ============\n";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Doi sang he nhi phan (b = 2)";
	cout << "\n2. Doi sang he bat phan (b = 8)";
	cout << "\n3. Doi sang he thap luc phan (b = 16)";
	cout << "\n4. Doi sang he co so (b = 7)";
	cout << "\n================================================\n";
}
int ChonMenu(int SoMenu, int n)
{
	int STT;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so khong khoang [0,..," << SoMenu << "] de doi co so, STT = ";
		cin >> STT;
		if (0 <= STT && STT <= SoMenu)break;
	}
	return STT;
}
void XuLyMenu(int menu, unsigned int n)
{
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";
		break;
	case 1:
		cout << "\n1. Doi sang he nhi phan (b = 2)";
		cout << endl << n << "_10  =  ";
		DoiCoSo(n, BIN);
		cout << "_2";
		break;
	case 2:
		cout << "\n2. Doi sang he bat phan (b = 8)";
		cout << endl << n << "_10  =  ";
		DoiCoSo(n, OCT);
		cout << "_8";
		break;
	case 3:
		cout << "\n3. Doi sang he thap luc phan (b = 16)";
		cout << endl << n << "_10  =  ";
		DoiCoSo(n, HEX);
		cout << "_16";
		break;
	case 4:
		cout << "\n4. Doi sang he co so (b = 7)";
		cout << endl << n << "_10  =  ";
		DoiCoSo(n, SEV);
		cout << "_7";
		break;
	}
	_getch();
}