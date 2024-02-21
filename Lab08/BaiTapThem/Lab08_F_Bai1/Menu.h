void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, SoPhuc& z1, SoPhuc& z2);

void XuatMenu()
{
	cout << "\n======================HE THONG CHUC NANG======================";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap so phuc";
	cout << "\n2. Xuat so phuc";
	cout << "\n3. Kiem tra so phuc bang nhau";
	cout << "\n4. Tinh do lon (magnitude) cua so phuc";
	cout << "\n5. Tim so phuc lien hop";
	cout << "\n6. Tim so phuc doi";
	cout << "\n7. Tim so phuc nghich dao";
	cout << "\n8. Kiem tra so phuc la so thuan ao";
	cout << "\n9. Cong hai so phuc";
	cout << "\n10. Tru hai so phuc";
	cout << "\n11. Nhan mot so thuc voi so phuc";
	cout << "\n12. Nhan hai so phuc";
	cout << "\n13. Chia hai so phuc";
	cout << "\n14. Tim Argument cua so phuc";
	cout << "\n15. Xuat so phuc trong luong giac";
	cout << "\n==============================================================";
}

int ChonMenu(int SoMenu)
{
	int STT;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0,...," << SoMenu << "] de chon chuc nang, stt = ";
		cin >> STT;
		if (0 <= STT && STT <= SoMenu)
			break;
	}
	return STT;
}

void XuLyMenu(int menu, SoPhuc& z1, SoPhuc& z2)
{
	SoPhuc lh1, lh2, sd1, sd2, nd1, nd2, kq, kq1, kq2;
	double k;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\nThoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap so phuc";
		cout << "\nNhap so phuc thu nhat:";
		z1 = NhapSoPhuc();
		cout << "\nNhap so phuc thu hai:";
		z2 = NhapSoPhuc();
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xuat so phuc";
		cout << "\nSo phuc vua nhap:";
		XuatSoPhuc(z1);
		XuatSoPhuc(z2);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Kiem tra so phuc bang nhau";
		if (SoPhucBangNhau(z1, z2))
			cout << "Hai so phuc bang nhau.\n";
		else
			cout << "Hai so phuc khong bang nhau.\n";
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tinh do lon (magnitude) cua so phuc";
		cout << "Do lon (magnitude) cua so phuc thu nhat: " << TinhDoLon(z1) << endl;
		cout << "Do lon (magnitude) cua so phuc thu hai: " << TinhDoLon(z2) << endl;
		break;
	case 5:
		system("CLS");
		cout << "\n5. Tim so phuc lien hop";
		lh1 = SoPhucLienHop(z1);
		lh2 = SoPhucLienHop(z2);
		cout << "So phuc lien hop thu nhat: ";
		XuatSoPhuc(lh1);
		cout << "So phuc lien hop thu hai: ";
		XuatSoPhuc(lh2);
		break;
	case 6:
		system("CLS");
		cout << "\n6. Tim so phuc doi";
		sd1 = SoPhucDoi(z1);
		sd2 = SoPhucDoi(z2);
		cout << "So phuc doi thu nhat: ";
		XuatSoPhuc(sd1);
		cout << "So phuc doi thu hai: ";
		XuatSoPhuc(sd2);
		break;
	case 7:
		system("CLS");
		cout << "\n7. Tim so phuc nghich dao";
		nd1 = SoPhucNghichDao(z1);
		nd2 = SoPhucNghichDao(z2);
		cout << "So phuc nghich dao thu nhat: ";
		XuatSoPhuc(nd1);
		cout << "So phuc nghich dao thu hai: ";
		XuatSoPhuc(nd2);
		break;
	case 8:
		system("CLS");
		cout << "\n8. Kiem tra so phuc la so thuan ao";
		if (LaSoThuanAo(z1))
			cout << "So phuc thu nhat la so thuan ao.\n";
		else
			cout << "So phuc thu nhat khong la so thuan ao.\n";
		if (LaSoThuanAo(z2))
			cout << "So phuc thu hai la so thuan ao.\n";
		else
			cout << "So phuc thu hai khong la so thuan ao.\n";
		break;
	case 9:
		system("CLS");
		cout << "\n9. Cong hai so phuc";
		kq = CongHaiSoPhuc(z1, z2);
		cout << "Tong hai so phuc: ";
		XuatSoPhuc(kq);
		break;
	case 10:
		system("CLS");
		cout << "\n10. Tru hai so phuc";
		kq = TruHaiSoPhuc(z1, z2);
		cout << "Tong hai so phuc: ";
		XuatSoPhuc(kq);
		break;
	case 11:
		system("CLS");
		cout << "\n11. Nhan mot so thuc voi so phuc";
		cout << "Nhap mot so thuc: ";
		cin >> k;
		kq1 = NhanSoThucVoiSoPhuc(k, z1);
		cout << "Tich so phuc thu nhat voi so thuc: ";
		XuatSoPhuc(kq1);
		kq2 = NhanSoThucVoiSoPhuc(k, z2);
		cout << "Tich so phuc thu hai voi so thuc: ";
		XuatSoPhuc(kq2);
		break;
	case 12:
		system("CLS");
		cout << "\n12. Nhan hai so phuc";
		kq = NhanHaiSoPhuc(z1, z2);
		cout << "Tich hai so phuc: ";
		XuatSoPhuc(kq);
		break;
	case 13:
		system("CLS");
		cout << "\n13. Chia hai so phuc";
		kq = ChiaHaiSoPhuc(z1, z2);
		cout << "Thuong hai so phuc: ";
		XuatSoPhuc(kq);
		break;
	case 14:
		system("CLS");
		cout << "\n14. Tim Argument cua so phuc";
		cout << "Argument cua so phuc thu nhat: " << TinhArgument(z1) << endl;
		cout << "Argument cua so phuc thu hai: " << TinhArgument(z2) << endl;
		break;
	case 15:
		system("CLS");
		cout << "\n15. Xuat so phuc trong luong giac";
		cout << "So phuc trong luong giac thu nhat:\n";
		XuatSoPhucTrongLuongGiac(z1);
		cout << "So phuc trong luong giac thu hai:\n";
		XuatSoPhucTrongLuongGiac(z2);
		break;
	}
	_getch();
}