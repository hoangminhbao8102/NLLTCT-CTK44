#define MAX 100//kich thuoc khai mang cau truc
#define NGANGDOI '='
#define NGANGDON '-'

typedef unsigned short int Byte;

//Kieu ngay thang nam sinh
struct NgayThangNam
{
	Byte NgaySinh;
	Byte ThangSinh;
	unsigned int NamSinh;
};

//Kieu nhan vien
struct NhanVien
{
	char MaNV[8];
	char HoLot[21];
	char Ten[8];
	NgayThangNam NTNS;
	char DiaChi[21];
	double Luong;
};

void Nhap_1NV(NhanVien& p);
void Nhap_1NV(NhanVien& p);
void XuatKeNgang();
void XuatTieuDe();
void Xuat_1NV(NhanVien p);
void Xuat_DSNV(NhanVien a[MAX], int n);
void ThemNhanVien_Cuoi(NhanVien a[MAX], int& n, NhanVien p);
void XoaNhanVien_MaNV(NhanVien a[MAX], int& n, char maNV[8]);
void SuaNhanVien_MaNV(NhanVien a[MAX], int& n, char maNV[8]);
int TimNhanVien_MaNV(NhanVien a[MAX], int n, char maNV[8]);
void TimNhanVien_Ten(NhanVien a[MAX], int n, char ten[7]);
void SapTang_MaNV(NhanVien a[MAX], int n);
void HoanVi(NhanVien& p, NhanVien& q);
void SapTang_Ten_Ho_Luong(NhanVien a[MAX], int n);
double TinhTongLuong(NhanVien a[MAX], int n);
void Xuat_DSNV_Luong_KhongNhoHon_x(NhanVien a[MAX], int n, double x);
void Xuat_DSNV_NamSinh_u_v(NhanVien a[MAX], int n, unsigned int u, unsigned int v);

void Nhap_1NV(NhanVien& p)
{
	cout << "\nMa Nhan Vien (dung 7 ky so) : ";
	_flushall();
	gets_s(p.MaNV, 8);
	cout << "\nHo va chu lot: ";
	_flushall();
	gets_s(p.HoLot, 21);
	cout << "\nTen nhan vien: ";
	_flushall();
	gets_s(p.Ten, 7);
	cout << "\nNgay sinh: ";
	_flushall();
	cin >> p.NTNS.NgaySinh;
	cout << "\nThang sinh: ";
	_flushall();
	cin >> p.NTNS.ThangSinh;
	cout << "\nNam sinh: ";
	_flushall();
	cin >> p.NTNS.NamSinh;
	cout << "\nNhap dia chi: ";
	_flushall();
	gets_s(p.DiaChi, 20);
	cout << "\nNhap luong: ";
	_flushall();
	cin >> p.Luong;
}

void Nhap_DSNV(NhanVien a[MAX], int& n)
{
	int i;
	cout << "\nNhap n = ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		system("CLS");
		cout << "\nNhap thong tin cho nhan vien thu " << i + 1 << ":";
		Nhap_1NV(a[i]);
	}
}

void XuatKeNgang()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left)
		<< ':';
	for (i = 1; i <= 76; i++)
		cout << NGANGDOI;
	cout << ':';
}

void XuatTieuDe()
{
	XuatKeNgang();
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << "Ma NV"
		<< ':'
		<< setw(16) << "Ho"
		<< setw(8) << "Ten"
		<< ':'
		<< setw(12) << "NTN sinh"
		<< ':'
		<< setw(16) << "Dia Chi"
		<< ':'
		<< setw(12) << "Luong"
		<< ':';
	XuatKeNgang();
}

void Xuat_1NV(NhanVien p)
{
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << p.MaNV
		<< ':'
		<< setw(16) << p.HoLot
		<< setw(8) << p.Ten
		<< ':'
		<< setw(2) << p.NTNS.NgaySinh
		<< '/'
		<< setw(2) << p.NTNS.ThangSinh
		<< '/'
		<< setw(6) << p.NTNS.NamSinh
		<< ':'
		<< setw(16) << p.DiaChi
		<< ':'
		<< setw(12) << setiosflags(ios::fixed) << setprecision(2) << p.Luong
		<< ':';
}

void Xuat_DSNV(NhanVien a[MAX], int n)
{
	int i;
	XuatTieuDe();
	for (i = 0; i < n; i++)
	{
		cout << endl;
		Xuat_1NV(a[i]);
	}
	XuatKeNgang();
}

void ThemNhanVien_Cuoi(NhanVien a[MAX], int& n, NhanVien p)
{
	a[n++] = p;
}

void XoaNhanVien_MaNV(NhanVien a[MAX], int& n, char maNV[8])
{
	int i, j;
	for (i = 0; i < n; i++)
		if (strcmp(a[i].MaNV, maNV) == 0)
			break;
	if (i == n)
	{
		cout << "\nKhong co nhan vien nao trong danh sach co ma so " << maNV;
		return;
	}
	for (j = i + 1; j < n; j++)
		a[j - 1] = a[j];
	n--;
}

void SuaNhanVien_MaNV(NhanVien a[MAX], int& n, char maNV[8])
{
	int i;
	char tl;
	for (i = 0; i < n; i++)
		if (strcmp(a[i].MaNV, maNV) == 0)
			break;
	if (i == n)
	{
		cout << "\nKhong co nhan vien nao trong danh sach co ma so " << maNV;
		return;
	}
	cout << "\nSua thong tin nhan vien co ma so : " << maNV;
	cout << "\nCo sua ma nhan vien khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nMa Nhan Vien : ";
		_flushall();
		gets_s(a[i].MaNV, 8);
	}
	cout << "\nCo sua ho va chu lot khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nHo va chu lot: ";
		_flushall();
		gets_s(a[i].HoLot, 21);
	}
	cout << "\nCo sua ten khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nTen nhan vien: ";
		_flushall();
		gets_s(a[i].Ten, 8);
	}
	cout << "\nCo sua ngay sinh khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nNgay sinh: ";
		_flushall();
		cin >> a[i].NTNS.NgaySinh;
	}
	cout << "\nCo sua thang sinh khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nThang sinh: ";
		_flushall();
		cin >> a[i].NTNS.ThangSinh;
	}
	cout << "\nCo sua nam sinh khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nNam sinh: ";
		_flushall();
		cin >> a[i].NTNS.NamSinh;
	}
	cout << "\nCo sua dia chi khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nNhap dia chi: ";
		_flushall();
		gets_s(a[i].DiaChi, 20);
	}
	cout << "\nCo sua luong khong ? nhan k neu khong: ";
	tl = _getch();
	if (tl != 'k' && tl != 'K')
	{
		cout << "\nNhap luong: ";
		_flushall();
		cin >> a[i].Luong;
	}
}

int TimNhanVien_MaNV(NhanVien a[MAX], int n, char maNV[8])
{
	int i, kq = -1;
	for (i = 0; i < n; i++)
		if (strcmp(a[i].MaNV, maNV) == 0)
		{
			kq = i;
			break;
		}
	return kq;
}

void TimNhanVien_Ten(NhanVien a[MAX], int n, char ten[7])
{
	int i,
		dem = 0; //luu tru co bao nhieu nhan vien co ten nhu vay
	for (i = 0; i < n; i++)
		if (_strcmpi(a[i].Ten, ten) == 0)
			dem++;
	if (!dem)
	{
		cout << "\nTrong danh sach khong co nhan vien nao co ten la " << ten;
	}
	else
	{
		cout << "\nCo " << dem << " nhan vien ten " << ten
			<< ", voi thong tin chi tiet nhu sau :\n";
		XuatTieuDe();
		for (i = 0; i < n; i++)
			if (_strcmpi(a[i].Ten, ten) == 0)
			{
				cout << endl;
				Xuat_1NV(a[i]);
			}
		XuatKeNgang();
	}
}

void SapTang_MaNV(NhanVien a[MAX], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (_strcmpi(a[i].MaNV, a[j].MaNV) > 0)
				HoanVi(a[i], a[j]);
}

void HoanVi(NhanVien& p, NhanVien& q)
{
	NhanVien t;
	t = p;
	p = q;
	q = t;
}

void SapTang_Ten_Ho_Luong(NhanVien a[MAX], int n)
{
	int i, j;
	//Tang theo ten
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (_strcmpi(a[i].Ten, a[j].Ten) > 0)
				HoanVi(a[i], a[j]);
	//Ten trung, tang theo ho
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (_strcmpi(a[i].Ten, a[j].Ten) == 0)
				if (_strcmpi(a[i].HoLot, a[j].HoLot) > 0)
					HoanVi(a[i], a[j]);
	//Ten va ho trung, tang theo luong
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (_strcmpi(a[i].Ten, a[j].Ten) == 0 && _strcmpi(a[i].HoLot, a[j].HoLot) == 0)
				if (a[i].Luong > a[j].Luong)
					HoanVi(a[i], a[j]);
}

double TinhTongLuong(NhanVien a[MAX], int n)
{
	int i;
	double tong = 0;
	for (i = 0; i < n; i++)
		tong += a[i].Luong;
	return tong;
}

void Xuat_DSNV_Luong_KhongNhoHon_x(NhanVien a[MAX], int n, double x)
{
	int i, kq = 0;
	for (i = 0; i < n; i++)
		if (a[i].Luong >= x)
			kq++;
	if (!kq)
	{
		cout << "\nKhong co nhan vien nao co luong >= " << x;
	}
	else
	{
		cout << "\n\nCo " << kq << " nhan vien co luong >= " << x
			<< ", voi thong tin chi tiet nhu sau:";
		XuatTieuDe();
		for (i = 0; i < n; i++)
		{
			if (a[i].Luong >= x)
			{
				cout << endl;
				Xuat_1NV(a[i]);
			}
		}
		XuatKeNgang();
	}
}

void Xuat_DSNV_NamSinh_u_v(NhanVien a[MAX], int n, unsigned int u, unsigned int v)
{
	int i, kq = 0;
	for (i = 0; i < n; i++)
		if (u <= a[i].NTNS.NamSinh && a[i].NTNS.NamSinh <= v)
			kq++;
	if (!kq)
		cout << "\nKhong co nhan vien nao co nam sinh trong khoang [" << u << ", " << v << "]";
	else
	{
		cout << "\n\nCo " << kq << " nhan vien co nam sinh trong khoang [" << u
			<< ",..," << v << "] : ";
		XuatTieuDe();
		for (i = 0; i < n; i++)
		{
			if (u <= a[i].NTNS.NamSinh && a[i].NTNS.NamSinh <= v)
			{
				cout << endl;
				Xuat_1NV(a[i]);
			}
		}
		XuatKeNgang();
	}
}