// ==================================================
// Khai bao nguyen mau cac ham trong he thong menu
// ==================================================
void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu);

// ==================================================
// Dinh nghia cac ham trong he thong menu
// ==================================================
// Ham XuatMenu : Xuat danh sach cac chuc nang ra man hinh:
// Gia su co 4 chuc nang
// Input : Khong co
// Output : Khong co
void XuatMenu()
{
	cout << "\n====== HE THONG CHUC NANG ========";
	cout << "\n0. THOAT KHOI CHUONG TRINH";
	cout << "\n1. Chuc nang 1";
	cout << "\n2. Chuc nang 2";
	cout << "\n3. Chuc nang 3";
	cout << "\n4. Chuc nang 4";
	cout << "\n==================================";
}

// Ham ChonMenu : Chon mot chuc nang trong danh sach
// Input : SoMenu = So chuc nang
// Output: STT == Thu tu chuc nang duoc chon
int ChonMenu(int SoMenu)
{
	int STT;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so STT (1 <= STT <= " << SoMenu 
			<< ") de chon menu : STT = ";
		cin >> STT;
		if (0 <= STT && STT <= SoMenu) break;
	}
	return STT;
}

// Ham XuLyMenu : Xu ly chuc nang duoc chon
// Input : menu = So thu tu menu da chon
// Output : Khong co
void XuLyMenu(int menu)
{
	switch (menu)
	{
	case 0:
		cout << "\n0. THOAT KHOI CHUONG TRINH.\n";
		break;
	case 1:
		cout << "\n1. Ban da chon chuc nang 1";
		//Xu ly chuc nang 1
		break;
	case 2:
		cout << "\n2. Ban da chon chuc nang 2";
		//Xu ly chuc nang 2
		break;
	case 3:
		cout << "\n3. Ban da chon chuc nang 3";
		//Xu ly chuc nang 3
		break;
	case 4:
		cout << "\n4. Ban da chon chuc nang 4";
		//Xu ly chuc nang 4
		break;
	}

	_getch();
}