void XuatSo(int n);
int DemSoChiaHet(int n);
int DemSoLuong(int n);
int SoDaoNguoc(int n);
int TinhTongSo(int n);
int TimChuSoDauTien(int n);
int TimSoNguyenThoaDieuKien(int n);
void XuatSo(int n)
{
	for (int i = 1; i <= n; i++)
		cout << i << "\t";
}
int DemSoChiaHet(int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++)
		if (i % 3 == 0 && i % 4 != 0)
			count++;
	return count;
}
int DemSoLuong(int n)
{
	int count = 0;
	for (int i = 0; i <= n; i++)
	{
		if (n % 10 != 0)
			count++;
	}
	return count;
}
int SoDaoNguoc(int n)
{
	int KetQua = 0;
	int Xuly;
	while (n > 0)
	{
		Xuly = n % 10;
		KetQua = KetQua * 10 + Xuly;
		n /= 10;
	}
	return KetQua;
}
int TinhTongSo(int n)
{
	int sum = 0;
	do 
	{
		sum += n % 10;
		n = n / 10;
	} while (n > 0);
	return sum;
}
int TimChuSoDauTien(int n)
{
	int KetQua;
	do 
	{
		KetQua = n % 10;
		n /= 10;
	} while (n > 0);
	return KetQua;
}
int TimSoNguyenThoaDieuKien(int n)
{
	int m = 1;
	int KetQua = 0;
	while (KetQua + m <= n)
	{
		KetQua += m;
		m++;
	}
	m--;
	return m;
}