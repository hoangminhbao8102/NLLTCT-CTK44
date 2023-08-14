void Xuat(int So);
unsigned int TimLuyThua(unsigned int n, unsigned int b);
void DoiCoSo(unsigned int n, unsigned int b);
void Xuat(int So)
{
	if (So < 10)
		cout << So;
	else
	{
		switch (So)
		{
		case 10:
			cout << "A";
			break;
		case 11:
			cout << "B";
			break;
		case 12:
			cout << "C";
			break;
		case 13:
			cout << "D";
			break;
		case 14:
			cout << "E";
			break;
		case 15:
			cout << "F";
			break;
		}
	}
}
unsigned int TimLuyThua(unsigned int n, unsigned int b)
{
	int ketQua = 1;
	while (pow(b, ketQua) <= n)
	{
		ketQua++;
	}
	ketQua--;
	return pow(b, ketQua);
}
void DoiCoSo(unsigned int n, unsigned int b)
{
	int So;
	int v = TimLuyThua(n, b);
	while (v > 0)
	{
		if (n < v)
			Xuat(0);
		else
		{
			So = n / v;
			Xuat(So);
			n = n - So * v;
		}
		v = v / b;
	}
}