#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
#define TAB '\t'
int KiemTra_NT(int n);
void LietKeSoNT(unsigned int n);
int main()
{
	unsigned int n;
	cout << endl << "Nhap so luong so NT can tim : ";
	cin >> n;
	LietKeSoNT(n);
	_getch();
	return 1;
}
int KiemTra_NT(int n)
{
	int kq, m, i;
	if (n < 2)
		kq = 0;
	else
	{
		m = (int)sqrt((float)n);
		i = 2;
		kq = 1;
		while (i <= m && kq)
		{
			if (n % i == 0)
				kq = 0;
			i++;
		}
	}
	return kq;
}
void LietKeSoNT(unsigned int n)
{
	int Dem = 0, So = 2;
	while (Dem < n)
	{
		if (KiemTra_NT(So))
		{
			cout << So << TAB;
			Dem++;
		}
		So++;
	}
}