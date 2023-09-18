#define MAX 50
typedef char ChuoiSo[MAX];
int Chuyen_KySo_So(char x)
{
	return (int)(x - '0');
}
void ChuyenDoi(ChuoiSo a)
{
	int i, j, l = strlen(a);
	int t[MAX];
	if (a[0] < a[1])
		for (i = 0; i < l; i++)
			if (a[i] <= a[i - 1])
			{
				for (j = l - 1; j > i; j--)
					a[j - 1] = a[j];
				a[l - 1] = NULL;
			}
			else if (a[0] > a[1])
				for (i = 0; i < l; i++)
					if (a[i] >= a[i - 1])
					{
						for (j = l - 1; j > i; j--)
							a[j - 1] = a[j];
						a[l - 1] = NULL;
					}
	cout << a;
}