#define MAX 1000
int ChonMucDoan();
int SinhSoNgauNhien();
int XuLyTroChoi(int k, int SoDe);
void ThongBaoKetQua(int kq, int SoDe);
int ChonMucDoan()
{
	int k;
	do
	{
		cout << "\nChon so lan doan toi da (3,5,7) : k = ";
		cin >> k;
	} while (k != 3 && k != 5 && k != 7);
	return k;
}
int SinhSoNgauNhien()
{
	int SoDe;
	srand((unsigned int)time(0));
	SoDe = rand() % MAX;
	return SoDe;
}
int XuLyTroChoi(int k, int SoDe)
{
	int i,
		SoDoan,
		kq = 0;
	for (i = 1; i <= k; i++)
	{
		cout << "\nDoan lan " << i << ", so doan = ";
		cin >> SoDoan;
		if (SoDoan == SoDe)
		{
			kq = 1;
			break;
		}
		else
			if (SoDoan > SoDe)
				cout << "\nSo doan lon hon";
			else
				cout << "\nSo doan nho hon";
	}
	return kq;
}
void ThongBaoKetQua(int kq, int SoDe)
{
	system("CLS");
	cout << "\nKET QUA TRO CHOI : ";
	if (kq)
		cout << "\nNguoi choi thang";
	else
		cout << "\nNguoi choi thua";
	cout << "\nDe cho so : " << SoDe;
}