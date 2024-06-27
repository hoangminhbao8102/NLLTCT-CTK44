#define MAX 100//kich thuoc khai mang cau truc
#define NGANGDOI '=' //ke ngang doi khi xuat du lieu
#define NGANGDON '-' //Ke ngang don khi xuat du lieu

struct SinhVien
{
	char MaSV[8];
	char HoLot[15];
	char Ten[8];
	char GioiTinh[4];
	unsigned int NamSinh;
	char QueQuan[15];
	char Lop[6];
};

struct BangDiem_ChiTiet
{
	char MaSV[8];
	double DiemLab;
	double BaiKTGK;
	double BaiKTCK;
	double DiemTK;
};

void Chen_SV(const char maSV[8], const char hoLot[15], const char ten[7], const char gioiTinh[3], unsigned int namSinh, const char queQuan[15], const char lop[7], SinhVien a[MAX], int& n);
void TaoDanhSachSinhVien(SinhVien a[MAX], int& n);
void XuatKeNgangDoi();
void XuatKeNgangDon();
void XuatTieuDe();
void Xuat_1SV(SinhVien p);
void Xuat_DSSV(SinhVien a[MAX], int n);

void Chen_Diem(const char maSV[8], double diemLab, double baiKTGK, double baiKTCK, BangDiem_ChiTiet bd[MAX], int& n);
void TaoBangDiem_ChiTiet(BangDiem_ChiTiet bd[MAX], int& n);
void TinhDiemTongKet(BangDiem_ChiTiet bd[MAX], int& n);
void XuatTieuDe_bd();
void Xuat_Diem_1SV(BangDiem_ChiTiet p);
void Xuat_BangDiem_ChiTiet(BangDiem_ChiTiet bd[MAX], int n);

void XuatBangDiem_ChinhThuc(SinhVien a[MAX], BangDiem_ChiTiet bd[MAX], int n);

void Chen_SV(const char maSV[8], const char hoLot[15], const char ten[7], const char gioiTinh[3], unsigned int namSinh, const char queQuan[15], const char lop[7], SinhVien a[MAX], int& n)
{
	if (n < MAX)
	{
		strcpy_s(a[n].MaSV, 8, maSV);
		strcpy_s(a[n].HoLot, 15, hoLot);
		strcpy_s(a[n].Ten, 8, ten);
		strcpy_s(a[n].GioiTinh, 4, gioiTinh);
		a[n].NamSinh = namSinh;
		strcpy_s(a[n].QueQuan, 15, queQuan);
		strcpy_s(a[n].Lop, 6, lop);
		n++;
	}
}

void TaoDanhSachSinhVien(SinhVien a[MAX], int& n)
{
	n = 0;
	Chen_SV("1512967", "Trieu", "Minh", "Nu", 1997, "Ninh Thuan", "CTK39", a, n);
	Chen_SV("1510279", "Nguyen Van", "Tan", "Nam", 1997, "Da Lat", "CTK39", a, n);
	Chen_SV("1512555", "Tran Tuan", "Ngoc", "Nam", 1996, "Khanh Hoa", "CTK39", a, n);
	Chen_SV("1412120", "Vo Thi", "Hoa", "Nu", 1996, "Binh Dinh", "CTK38", a, n);
	Chen_SV("1313320", "Le Ngoc", "Minh", "Nam", 1995, "Can Tho", "CTK37", a, n);
	Chen_SV("1510214", "Dinh Thi", "Ngoc", "Nu", 1997, "Da Lat", "CTK39", a, n);
	Chen_SV("1512128", "Ta Van", "Ton", "Nam", 1997, "Binh Dinh", "CTK39", a, n);
	Chen_SV("1512868", "Doan", "Du", "Nam", 1996, "Da Lat", "CTK39", a, n);
	Chen_SV("1512887", "Vuong Ngoc", "Yen", "Nu", 1997, "Da Nang", "CTK39", a, n);
	Chen_SV("1514205", "Vuong Trung", "Duong", "Nam", 1995, "Phu Yen", "CTK39", a, n);
	Chen_SV("1510192", "Nhac Linh", "San", "Nu", 1997, "Da Lant", "CTK39", a, n);
	Chen_SV("1312890", "Hoang", "Dung", "Nu", 1995, "Da Nang", "CTK37", a, n);
	Chen_SV("1444405", "Truong Vo", "Ky", "Nam", 1996, "Binh Dinh", "CTK38", a, n);
	Chen_SV("1512988", "Vi Tieu", "Bao", "Nam", 1996, "Da Lat", "CTK39", a, n);
}

void XuatKeNgangDoi()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left)
		<< ':';
	for (i = 1; i <= 66; i++)
		cout << NGANGDOI;
	cout << ':';
}

void XuatKeNgangDon()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left)
		<< ':';
	for (i = 1; i <= 66; i++)
		cout << NGANGDON;
	cout << ':';
}

void XuatTieuDe()
{
	XuatKeNgangDoi();
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << "Ma NV"
		<< ':'
		<< setw(15) << "Ho"
		<< setw(7) << "Ten"
		<< ':'
		<< setw(5) << "GT"
		<< ':'
		<< setw(5) << "NS"
		<< ':'
		<< setw(15) << "Que quan"
		<< ':'
		<< setw(6) << "Lop"
		<< ':';
	XuatKeNgangDoi();
}

void Xuat_1SV(SinhVien p)
{
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << p.MaSV
		<< ':'
		<< setw(15) << p.HoLot
		<< setw(7) << p.Ten
		<< ':'
		<< setw(5) << p.GioiTinh
		<< ':'
		<< setw(5) << p.NamSinh
		<< ':'
		<< setw(15) << p.QueQuan
		<< ':'
		<< setw(6) << p.Lop
		<< ':';
}

void Xuat_DSSV(SinhVien a[MAX], int n)
{
	int i;
	XuatTieuDe();
	for (i = 0; i < n; i++)
	{
		cout << endl;
		Xuat_1SV(a[i]);
		if ((i + 1) % 5 == 0)
			XuatKeNgangDon();
	}
	XuatKeNgangDoi();
}

void Chen_Diem(const char maSV[8], double diemLab, double baiKTGK, double baiKTCK, BangDiem_ChiTiet bd[MAX], int& n)
{
	if (n < MAX)
	{
		strcpy_s(bd[n].MaSV, 8, maSV);
		bd[n].DiemLab = diemLab;
		bd[n].BaiKTGK = baiKTGK;
		bd[n].BaiKTCK = baiKTCK;
		bd[n].DiemTK = 0;
		n++;
	}
}

void TaoBangDiem_ChiTiet(BangDiem_ChiTiet bd[MAX], int& n)
{
	n = 0;
	Chen_Diem("1512967", 9, 8, 6, bd, n);
	Chen_Diem("1510279", 10, 6, 5, bd, n);
	Chen_Diem("1512555", 8, 5, 7, bd, n);
	Chen_Diem("1412120", 9.5, 9, 8, bd, n);
	Chen_Diem("1313320", 8, 8, 4, bd, n);
	Chen_Diem("1510214", 8.5, 8, 6, bd, n);
	Chen_Diem("1512128", 9, 9, 9, bd, n);
	Chen_Diem("1512868", 10, 8.5, 8.5, bd, n);
	Chen_Diem("1512887", 7, 7, 7, bd, n);
	Chen_Diem("1514205", 8, 8, 8.5, bd, n);
	Chen_Diem("1510192", 10, 9, 9, bd, n);
	Chen_Diem("1312890", 9, 9, 8, bd, n);
	Chen_Diem("1444405", 7, 5, 5, bd, n);
	Chen_Diem("1512988", 8.5, 8, 8, bd, n);
}

void TinhDiemTongKet(BangDiem_ChiTiet bd[MAX], int& n)
{
	int i;
	double tam;
	for (i = 0; i < n; i++)
	{
		tam = bd[i].DiemLab * 0.2 + bd[i].BaiKTGK * 0.2 + bd[i].BaiKTCK * 0.6;
		bd[i].DiemTK = tam;
	}
}

void XuatTieuDe_bd()
{
	XuatKeNgangDoi();
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << "Ma NV"
		<< ':'
		<< setw(13) << "Diem Lab"
		<< ':'
		<< setw(13) << "Diem KTGK"
		<< ':'
		<< setw(13) << "Diem Cuoi Ky"
		<< ':'
		<< setw(15) << "Diem TK"
		<< ':';
	XuatKeNgangDoi();
}

void Xuat_Diem_1SV(BangDiem_ChiTiet p)
{
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << p.MaSV
		<< ':'
		<< setw(13) << setiosflags(ios::fixed) << setprecision(1) << p.DiemLab
		<< ':'
		<< setw(13) << setiosflags(ios::fixed) << setprecision(1) << p.BaiKTGK
		<< ':'
		<< setw(13) << setiosflags(ios::fixed) << setprecision(1) << p.BaiKTCK
		<< ':'
		<< setw(15) << setiosflags(ios::fixed) << setprecision(1) << p.DiemTK
		<< ':';
}

void Xuat_BangDiem_ChiTiet(BangDiem_ChiTiet bd[MAX], int n)
{
	int i;
	XuatTieuDe_bd();
	for (i = 0; i < n; i++)
	{
		cout << endl;
		Xuat_Diem_1SV(bd[i]);
		if ((i + 1) % 5 == 0)
			XuatKeNgangDon();
	}
	XuatKeNgangDoi();
}

void XuatBangDiem_ChinhThuc(SinhVien a[MAX], BangDiem_ChiTiet bd[MAX], int n)
{
	//xuat tieu de
	cout << endl << ":===========================================================================:\n";
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << "Ma SV"
		<< ':'
		<< setw(15) << "Ho"
		<< setw(7) << "Ten"
		<< ':'
		<< setw(5) << "GT"
		<< ':'
		<< setw(5) << "NS"
		<< ':'
		<< setw(15) << "Que quan"
		<< ':'
		<< setw(6) << "Lop"
		<< ':'
		<< setw(8) << "Diem TK"
		<< ':';
	cout << endl << ":===========================================================================:";
	int i;
	for (i = 0; i < n; i++)
	{
		cout << endl;
		cout << setiosflags(ios::left)
			<< ':'
			<< setw(8) << a[i].MaSV
			<< ':'
			<< setw(15) << a[i].HoLot
			<< setw(7) << a[i].Ten
			<< ':'
			<< setw(5) << a[i].GioiTinh
			<< ':'
			<< setw(5) << a[i].NamSinh
			<< ':'
			<< setw(15) << a[i].QueQuan
			<< ':'
			<< setw(6) << a[i].Lop
			<< ':'
			<< setw(8) << setiosflags(ios::fixed) << setprecision(1) << bd[i].DiemTK
			<< ':';
		if ((i + 1) % 5 == 0)
			cout << endl << ":---------------------------------------------------------------------------:";
	}
	cout << endl << ":===========================================================================:";
}
