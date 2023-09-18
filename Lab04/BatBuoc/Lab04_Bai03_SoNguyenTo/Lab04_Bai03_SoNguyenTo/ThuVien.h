int KiemTraNguyenTo(unsigned int n);
void XuatSoNguyenTo(unsigned int n);
int DemSoNguyenTo(unsigned int n);
int TinhTongUocSNT(unsigned int n);
void PhanTichThuaSo(unsigned int n);
int KiemTraNguyenTo(unsigned int n)
{
	if (n < 2)
		return false;
	bool KetQua = true;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
		{
			KetQua = false;
			break;
		}
	return KetQua;
}
void XuatSoNguyenTo(unsigned int n)
{
	int KetQua = 0;
	for (int i = 1; i <= n; i++)
		if (KiemTraNguyenTo(i))
		{
			KetQua++;
			cout << i << "\t";
			if (KetQua % 5 == 0)
				cout << endl;
		}
}
int DemSoNguyenTo(unsigned int n)
{
	int KetQua = 0;
	for (int i = 1; i <= n; i++)
		if (KiemTraNguyenTo(i))
		{
			KetQua++;
		}
	return KetQua;
}
int TinhTongUocSNT(unsigned int n)
{
	int KetQua = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
		{
			KetQua += i;
		}
	return KetQua;
}
void PhanTichThuaSo(unsigned int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (KiemTraNguyenTo(i))
		{
			if (n % i == 0)
			{
				cout << i << ".";
				n /= i;
			}
		}
	}
}