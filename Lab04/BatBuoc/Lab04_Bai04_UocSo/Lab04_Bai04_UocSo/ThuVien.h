void XuatUocSo(unsigned int n);
int DemUocSo(unsigned int n);
int TongUocSo(unsigned int n);
int TimSoLonNhat(unsigned int n);
bool LaSoHoanHao(unsigned int n);
void XuatUocSo(unsigned int n)
{
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			cout << i << " ";
}
int DemUocSo(unsigned int n)
{
	int KetQua = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			KetQua++;
	return KetQua;
}
int TongUocSo(unsigned int n)
{
	int KetQua = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			KetQua += i;
	return KetQua;
}
int TimSoLonNhat(unsigned int n)
{
	int SoMu = 0;
	while (pow(2, SoMu) <= n)
	{
		SoMu++;
	}
	SoMu--;
	return pow(2, SoMu);
}
bool LaSoHoanHao(unsigned int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			sum += i;
	return sum == n;
}