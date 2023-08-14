#define	MAX	100
#define	TAB	'\t'
typedef	int	DaySo[MAX];
void NhapTuDong(DaySo a, int& n);
void XuatMang(DaySo a, int n);
void XoaPhanTu(DaySo a, int& n, int x);
int La_X_DauTien(DaySo a, int n, int x);
void XoaX_DauTien(DaySo a, int& n, int x);
int La_X(DaySo a, int n, int x);
void XoaX_TrongMang(DaySo a, int& n, int x);
void XoaCacPhanTuTrungNhau(DaySo a, int& n);
void NhapTuDong(DaySo a, int& n)
{
	int i;
	cout << "\nNhap kich thuoc n: ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 6;
}
void XuatMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << TAB;
}
void XoaPhanTu(DaySo a, int& n, int x)
{
	for (int i = x; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
int La_X_DauTien(DaySo a, int n, int x)
{
	int KetQua;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			KetQua = i;
		break;
	}
	return KetQua;
}
void XoaX_DauTien(DaySo a, int& n, int x)
{
	int ViTri = La_X_DauTien(a, n, x);
	if (ViTri == -1)
	{
		cout << "\nKhong tim thay phan tu muon xoa trong mang: " << x;
	}
	else
	{
		for (int i = ViTri; i < n - 1; i++)
		{
			a[ViTri] = a[ViTri + 1];
		}
		n--;
	}
}
int La_X(DaySo a, int n, int x)
{
	int KetQua;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			KetQua = i;
	}
	return KetQua;
}
void XoaX_TrongMang(DaySo a, int& n, int x)
{
	int i, j;
	int Dem = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			for (j = i; j < n - 1; j++)
			{
				a[j] = a[j + 1];
			}
			n--;
			Dem++;
		}
	}
	if (Dem == 0)
		cout << "\nKhong tim thay x trong mang:";
}
void XoaCacPhanTuTrungNhau(DaySo a, int& n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] == a[i])
			{
				XoaPhanTu(a, n, i);
				j--;
			}
		}
	}
}