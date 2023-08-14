#define MAX 100
#define TAB '\t'
typedef int DaySo[MAX];
void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);
void SapCacSoDuongTangDanCacSoKhacGiuNguyenThuTu(int a[MAX], int n);
void SapCacPhanTuSaoChoSo0NamOCuoiMangCacSoKhac0DauMangVaTangDan(int a[MAX], int n);
void SapCacPhanTuSaoChoSo0ODauMangSoAm0GiuaVaGiamDanSoDuong0CuoiVaTang(int a[MAX], int n);
void SapCacSoLe0DauMangVaTangDanCacSoChan0CuoiCungMangVaGiamDan(int a[MAX], int n);
int KiemTra_NT(int x);
void SapCacSoNguyenTo0DauMangVaTangCacSoConLai0CuoiMangVaGiamDan(int a[MAX], int n);
void NhapMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void XuatMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << TAB;
}
void SapCacSoDuongTangDanCacSoKhacGiuNguyenThuTu(int a[MAX], int n)
{
	int temp, b[MAX];
	cout << endl << "Day truoc khi sap xep : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
	for (int i = 0; i < n; i++)
		b[i] = a[i];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (b[i] > 0 && b[j] > 0 && b[i] > a[j])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
	}
	cout << endl << "Day sau khi sap xep : " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << TAB;
	}
}
void SapCacPhanTuSaoChoSo0NamOCuoiMangCacSoKhac0DauMangVaTangDan(int a[MAX], int n)
{
	int temp, b[MAX];
	cout << endl << "Day truoc khi sap xep :" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
	for (int i = 0; i < n; i++)
		b[i] = a[i];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (b[i] == 0 && b[j] != 0 ||
				b[i] < 0 && b[j] < 0 && b[i] > b[j] ||
				b[i] > 0 && b[j] > 0 && b[i] > b[j] ||
				b[i] > 0 && b[j] < 0)
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
	cout << endl << "Day sau khi sap xep :" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << TAB;
	}
}
void SapCacPhanTuSaoChoSo0ODauMangSoAm0GiuaVaGiamDanSoDuong0CuoiVaTang(int a[MAX], int n)
{
	int temp, b[MAX];
	cout << endl << "Dau truoc khi sap xep :" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
	for (int i = 0; i < n; i++)
		b[i] = a[i];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (b[i]<0 && b[j] < 0 && b[i] < b[j] ||
				b[i]>0 && b[j]>0 && b[i]>b[j] ||
				b[i] != 0 && b[j] == 0 ||
				b[i] > 0 && b[j] < 0)
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
	}
	cout << endl << "Day sau khi sap xep :" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << TAB;
	}
}
void SapCacSoLe0DauMangVaTangDanCacSoChan0CuoiCungMangVaGiamDan(int a[MAX], int n)
{
	int temp, b[MAX];
	cout << endl << "Day truoc khi sap xep :" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
	for (int i = 0; i < n; i++)
		b[i] = a[i];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (b[i] % 2 == 0 && b[j] % 2 != 0 ||
				b[i] % 2 != 0 && b[j] % 2 != 0 && b[i] > b[j] ||
				b[i] % 2 == 0 && b[j] % 2 == 0 && b[i] < b[j])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
	cout << endl << "Day sau khi sap xep :" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << TAB;
	}
}
int KiemTra_NT(int x)
{
	int m, kq;
	kq = 1;
	if (x < 2)
		kq = 0;
	else
	{
		m = (int)sqrt((double)x);
		for (int i = 2; i <= m; i++)
			if (x % i == 0)
			{
				kq = 0;
				break;
			}
	}
	return kq;
}
void SapCacSoNguyenTo0DauMangVaTangCacSoConLai0CuoiMangVaGiamDan(int a[MAX], int n)
{
	int temp, b[MAX];
	cout << endl << "Day truoc khi sap xep :" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
	for (int i = 0; i < n; i++)
		b[i] = a[i];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (KiemTra_NT(b[i]) == 0 && KiemTra_NT(b[j]) ||
				KiemTra_NT(b[i]) && KiemTra_NT(b[j]) && b[i] > b[j] ||
				KiemTra_NT(b[i]) == 0 && KiemTra_NT(b[j]) == 0 && b[i] < b[j])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
	cout << endl << "Day sau khi sap xep :" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << TAB;
	}
}