#define MAX 10
void XuatMaTran(int a[MAX][MAX], int n);
void Tao_MaTran_XoanOc(int a[MAX][MAX], int n);
void XuatMaTran(int a[MAX][MAX], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << "\n\n\n";
		for (j = 0; j < n; j++)
			cout << setw(5) << a[i][j];
	}
}
void Tao_MaTran_XoanOc(int a[MAX][MAX], int n)
{
	int value, HangTren, HangDuoi, CotTrai, CotPhai;
	int i, j;
	HangTren = 0;
	CotPhai = n - 1;
	HangDuoi = n - 1;
	CotTrai = 0;
	value = 1;
	while (value <= n * n)
	{
		for (j = CotTrai; (j <= CotPhai) && (value <= n * n); j++)
		{
			a[HangTren][j] = value;
			value++;
		}
		if (value > n * n)
			break;
		HangTren++;
		for (i = HangTren; (i <= HangDuoi) && (value <= n * n); i++)
		{
			a[i][CotPhai] = value;
			value++;
		}
		if (value > n * n)
			break;
		CotPhai--;
		for (j = CotPhai; (j >= CotTrai) && (value <= n * n); j--)
		{
			a[HangDuoi][j] = value;
			value++;
		}
		if (value > n * n)
			break;
		HangDuoi--;
		for (i = HangDuoi; (i >= HangTren) && (value <= n * n); i--)
		{
			a[i][CotTrai] = value;
			value++;
		}
		if (value > n * n)
			break;
		CotTrai++;
	}
}