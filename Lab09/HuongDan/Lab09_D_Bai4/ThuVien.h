#define MAX 100
#define NGANGDOI '='
#define NGANGDON '-'

struct SinhVien
{
	char MaSV[8];
	char HoLot[14];
	char Ten[7];
	char GioiTinh[4];
	unsigned int NamSinh;
	char QueQuan[14];
	char Lop[7];
	double Diem;
};

void Chen_SV(const char* maSV, const char* hoLot, const char* ten, const char* gioiTinh, unsigned namSinh, const char* queQuan, const char* lop, double diem, SinhVien* a, int& n);
void TaoDanhSachSinhVien(SinhVien* a, int& n);
void XuatKeNgangDoi();
void XuatKeNgangDon();
void XuatTieuDe();
void Xuat_1SV(SinhVien p);
void Xuat_DSSV(SinhVien* a, int n);
void Sap_DSSV_GiamDiem(SinhVien* a, int n);
void DSSV_Lop(SinhVien* a, int n, const char lop[7], SinhVien* dsLop, int& h);
void Xuat_DSSV_Lop(SinhVien* a, int n, const char lop[7]);
void Sap_DSSV_Lop_GiamDiem(SinhVien* a, int n, const char lop[7], SinhVien* dsLop, int& h);
void Xuat_DSSV_Lop_Giam_Diem(SinhVien* a, int n, const char lop[7]);
void ThongKe_ChatLuong(SinhVien* a, int n, const char lop[7]);

void Chen_SV(const char* maSV, const char* hoLot, const char* ten, const char* gioiTinh, unsigned namSinh, const char* queQuan, const char* lop, double diem, SinhVien* a, int& n)
{
	if (n < MAX)
	{
		strcpy_s((a + n)->MaSV, 8, maSV);
		strcpy_s((a + n)->HoLot, 14, hoLot);
		strcpy_s((a + n)->Ten, 7, ten);
		strcpy_s((a + n)->GioiTinh, 4, gioiTinh);
		(a + n)->NamSinh = namSinh;
		strcpy_s((a + n)->QueQuan, 15, queQuan);
		strcpy_s((a + n)->Lop, 6, lop);
		(a + n)->Diem = diem;
		n++;
	}
}

void TaoDanhSachSinhVien(SinhVien* a, int& n)
{
	Chen_SV("1512967", "Trieu", "Minh", "Nu", 1997, "Ninh Thuan", "CTK39", 5.5, a, n);
	Chen_SV("1410279", "Hoang Duoc", "Su", "Nam", 1995, "Da Lat", "CTK38", 6, a, n);
	Chen_SV("1512555", "Au Duong", "Phong", "Nam", 1996, "Khanh Hoa", "CTK39", 7.5, a, n);
	Chen_SV("1412120", "Vo Thi", "Yen", "Nu", 1996, "Binh Dinh", "CTK38", 3, a, n);
	Chen_SV("1313320", "Le Ngoc", "Minh", "Nam", 1995, "Can Tho", "CTK37", 2.5, a, n);
	Chen_SV("1510214", "Dinh Thi", "Yen", "Nu", 1997, "Da Lat", "CTK39", 9, a, n);
	Chen_SV("1512887", "Vuong Ngoc", "Yen", "Nu", 1997, "Da Nang", "CTK39", 6, a, n);
	Chen_SV("1414245", "Vuong Trung", "Duong", "Nam", 1996, "Phu Yen", "CTK38", 7, a, n);
	Chen_SV("1510192", "Nhac Linh", "San", "Nu", 1997, "Da Lat", "CTK39", 3.2, a, n);
	Chen_SV("1312890", "Hoang", "Dung", "Nu", 1995, "Da Nang", "CTK37", 8, a, n);
	Chen_SV("1510192", "Cao Vien", "Vien", "Nu", 1997, "Da Lat", "CTK39", 9.6, a, n);
	Chen_SV("1444405", "Truong Vo", "Ky", "Nam", 1996, "Binh Dinh", "CTK38", 7, a, n);
	Chen_SV("1412988", "Vi Tieu", "Bao", "Nam", 1996, "Da Nang", "CTK38", 8.5, a, n);
	Chen_SV("1312990", "Duong", "Qua", "Nam", 1995, "Da Lat", "CTK37", 3.5, a, n);
	Chen_SV("1333993", "Chau Ba", "Thong", "Nam", 1994, "Quang Ngai", "CTK37", 9.1, a, n);
	Chen_SV("1512128", "Ta Van", "Ton", "Nam", 1997, "Binh Dinh", "CTK39", 9.3, a, n);
	Chen_SV("1400128", "Vien Thua", "Chi", "Nam", 1997, "Binh Thuan", "CTK38", 5.3, a, n);
	Chen_SV("1512868", "Doan", "Du", "Nam", 1996, "Da Lat", "CTK39", 8.5, a, n);
}

void XuatKeNgangDoi()
{
	int i;
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':';
	for (i = 1; i <= 68; i++)
		cout << NGANGDOI;
	cout << ':';
}

void XuatKeNgangDon()
{
	int i;
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':';
	for (i = 1; i <= 68; i++)
		cout << NGANGDON;
	cout << ':';
}

void XuatTieuDe()
{
	XuatKeNgangDoi();
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(7) << "Ma SV"
		<< ':'
		<< setw(15) << "Ho"
		<< setw(7) << "Ten"
		<< ':'
		<< setw(4) << "GT"
		<< ':'
		<< setw(4) << "NS"
		<< ':'
		<< setw(14) << "Que quan"
		<< ':'
		<< setw(6) << "Lop"
		<< ':'
		<< setw(5) << "Diem"
		<< ':';
	XuatKeNgangDoi();
}

void Xuat_1SV(SinhVien p)
{
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(7) << p.MaSV
		<< ':'
		<< setw(15) << p.HoLot
		<< setw(7) << p.Ten
		<< ':'
		<< setw(4) << p.GioiTinh
		<< ':'
		<< setw(4) << p.NamSinh
		<< ':'
		<< setw(14) << p.QueQuan
		<< ':'
		<< setw(6) << p.Lop
		<< ':'
		<< setw(5) << setiosflags(ios::fixed) << setprecision(1) << p.Diem
		<< ':';
}

void Xuat_DSSV(SinhVien* a, int n)
{
	int i;
	XuatTieuDe();
	for (i = 0; i < n; i++)
	{
		cout << endl;
		Xuat_1SV(*(a + i));
		if ((i + 1) % 5 == 0)
			XuatKeNgangDon();
	}
	XuatKeNgangDoi();
}

void Sap_DSSV_GiamDiem(SinhVien* a, int n)
{
	SinhVien t;
	int i, j;
	if (n == 0)
	{
		cout << "\nDS rong!";
		return;
	}
	else
	{
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
				if ((a + i)->Diem < (a + j)->Diem)
				{
					t = *(a + i);
					*(a + i) = *(a + j);
					*(a + j) = t;
				}
	}
}

void DSSV_Lop(SinhVien* a, int n, const char lop[7], SinhVien* dsLop, int& h)
{
	int kq = n;
	int i;
	for (i = 0; i < n; i++)
		if (_strcmpi((a + i)->Lop, lop) == 0)
		{
			kq = i;
			break;
		}
	if (kq == n)
		h = 0;
	else
	{
		h = 0;
		for (i = kq; i < n; i++)
			if (_strcmpi((a + i)->Lop, lop) == 0)
			{
				*(dsLop + h) = *(a + i);
				h++;
			}
	}
}

void Xuat_DSSV_Lop(SinhVien* a, int n, const char lop[7])
{
	SinhVien* dsLop;
	int i, h;
	dsLop = new SinhVien[MAX];
	DSSV_Lop(a, n, lop, dsLop, h);
	if (h == 0)
		cout << "\nKhong co lop " << lop << " trong DSSV";
	else
	{
		cout << "\n\nDanh sach sinh vien thuoc lop " << lop << " : \n";
		XuatTieuDe();
		for (i = 0; i < h; i++)
		{
			cout << endl;
			Xuat_1SV(*(dsLop + i));
		}
		XuatKeNgangDoi();
		cout << "\nCo " << h << " sinh vien thuoc lop " << lop;
	}
	delete[]dsLop;
}

void Sap_DSSV_Lop_GiamDiem(SinhVien* a, int n, const char lop[7], SinhVien* dsLop, int& h)
{
	SinhVien t;
	int i, j;
	DSSV_Lop(a, n, lop, dsLop, h);
	if (h == 0)
		return;
	else
	{
		for (i = 0; i < h - 1; i++)
			for (j = i + 1; j < h; j++)
				if ((dsLop + i)->Diem < (dsLop + j)->Diem)
				{
					t = *(dsLop + i);
					*(dsLop + i) = *(dsLop + j);
					*(dsLop + j) = t;
				}
	}
}

void Xuat_DSSV_Lop_Giam_Diem(SinhVien* a, int n, const char lop[7])
{
	SinhVien* dsLop;
	int i, h;
	dsLop = new SinhVien[MAX];
	Sap_DSSV_Lop_GiamDiem(a, n, lop, dsLop, h);
	if (h == 0)
		cout << "\nKhong co lop " << lop << " trong DSSV";
	else
	{
		cout << "\n\nDanh sach sinh vien thuoc lop " << lop << " giam dan theo diem : \n";
		XuatTieuDe();
		for (i = 0; i < h; i++)
		{
			cout << endl;
			Xuat_1SV(*(dsLop + i));
		}
		XuatKeNgangDoi();
		cout << "\nCo " << h << " sinh vien thuoc lop " << lop;
	}
	delete[]dsLop;
}

void ThongKe_ChatLuong(SinhVien* a, int n, const char lop[7])
{
	SinhVien* dsLop;
	int h = 0;
	dsLop = new SinhVien[MAX];
	DSSV_Lop(a, n, lop, dsLop, h);
	int i;
	int kem = 0,
		yeu = 0,
		trungBinh = 0,
		kha = 0,
		gioi = 0;
	if (h == 0)
	{
		cout << "\nDanh sach " << lop << " rong!";
		_getch();
	}
	else
	{
		for (i = 0; i < h; i++)
		{
			if ((dsLop + i)->Diem >= 8.5)
				gioi++;
			else
				if (7 <= (dsLop + i)->Diem && (dsLop + i)->Diem < 8.5)
					kha++;
				else
					if (5.5 <= (dsLop + i)->Diem && (dsLop + i)->Diem < 7)
						trungBinh++;
					else
						if (4 <= (dsLop + i)->Diem && (dsLop + i)->Diem < 5.5)
							yeu++;
						else
							if (0 <= (dsLop + i)->Diem && (dsLop + i)->Diem < 4)
								kem++;
		}
		Xuat_DSSV_Lop(a, n, lop);
		cout << "\nThong ke chat luong lop " << lop << " :\n";
		cout << "\nSo sinh vien gioi : Gioi = " << gioi << ", ti le (%): ti le = "
			<< setiosflags(ios::fixed) << setprecision(1) << (double)gioi / h;
		cout << "\nSo sinh vien kha : Kha = " << kha << ", ti le (%): ti le = "
			<< setiosflags(ios::fixed) << setprecision(1) << (double)kha / h;
		cout << "\nSo sinh vien TB : TB = " << trungBinh << ", ti le (%): ti le = "
			<< setiosflags(ios::fixed) << setprecision(1) << (double)trungBinh / h;
		cout << "\nSo sinh vien yeu : Yeu = " << yeu << ", ti le (%): ti le = "
			<< setiosflags(ios::fixed) << setprecision(1) << (double)yeu / h;
		cout << "\nSo sinh vien kem : kem = " << kem << ", ti le (%): ti le = "
			<< setiosflags(ios::fixed) << setprecision(1) << (double)kem / h;
	}
}