void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, MatHang& mh);

extern MatHang* danhSach; // Giả sử biến này đã được khai báo ở nơi khác
extern int soLuongMatHang;
extern tm ngayHienTai; // Giả sử ngày hiện tại đã được cập nhật đúng

void XuatMenu()
{
	cout << "\n======================HE THONG CHUC NANG======================";
	cout << "\n0. Thoat chuong trinh.";
	cout << "\n1. Nhap mot danh sach mat hang";
	cout << "\n2. Xuat cac mat hang ra man hinh theo thu tu ABC cua ten mat hang.";
	cout << "\n3. Tinh tong gia tri cua tat ca cac mat hang.";
	cout << "\n4. Cho biet cac mat hang co gia tri lon nhat trong cua hang.";
	cout << "\n5. Xuat ra nhung mat hang da het han su dung.";
	cout << "\n6. Sap xep va xuat cac mat hang theo tung loai.";
	cout << "\n7. Tim nhung mat hang con han su dung khong qua 30 ngay.";
	cout << "\n8. Liet ke nhung mat hang da ban het (so luong ton bang 0).";
	cout << "\n9. Tinh so luong mat hang banh va keo.";
	cout << "\n10. Tim mat hang bia co gia re nhat.";
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

void XuLyMenu(int menu, MatHang& mh) 
{
    switch (menu) 
    {
    case 0:
        system("CLS");
        cout << "\nThoat khoi chuong trinh\n";
        break;
    case 1:
        system("CLS");
        cout << "\n1. Nhap mot danh sach mat hang";
        nhapDanhSach(danhSach, soLuongMatHang);
        break;
    case 2:
        system("CLS");
        cout << "\n2. Xuat cac mat hang ra man hinh theo thu tu ABC cua ten mat hang.";
        sapXepVaXuatTheoLoai(danhSach, soLuongMatHang); // Sử dụng sap xep theo loai để minh hoa, nên thực ra phải là theo tên
        break;
    case 3:
        system("CLS");
        cout << "\n3. Tinh tong gia tri cua tat ca cac mat hang.";
        cout << "Tong gia tri: " << tinhTongGiaTri(danhSach, soLuongMatHang);
        break;
    case 4:
        system("CLS");
        cout << "\n4. Cho biet cac mat hang co gia tri lon nhat trong cua hang.";
        timMatHangGiaCaoNhat(danhSach, soLuongMatHang);
        break;
    case 5:
        system("CLS");
        cout << "\n5. Xuat ra nhung mat hang da het han su dung.";
        xuatMatHangHetHan(danhSach, soLuongMatHang, ngayHienTai);
        break;
    case 6:
        system("CLS");
        cout << "\n6. Sap xep va xuat cac mat hang theo tung loai.";
        sapXepVaXuatTheoLoai(danhSach, soLuongMatHang);
        break;
    case 7:
        system("CLS");
        cout << "\n7. Tim nhung mat hang con han su dung khong qua 30 ngay.";
        timMatHangSapHetHan(danhSach, soLuongMatHang, ngayHienTai);
        break;
    case 8:
        system("CLS");
        cout << "\n8. Liet ke nhung mat hang da ban het (so luong ton bang 0).";
        lietKeMatHangBanHet(danhSach, soLuongMatHang);
        break;
    case 9:
        system("CLS");
        cout << "\n9. Tinh so luong mat hang banh va keo.";
        cout << "So luong banh va keo: " << demSoLuongBanKeo(danhSach, soLuongMatHang);
        break;
    case 10:
        system("CLS");
        cout << "\n10. Tim mat hang bia co gia re nhat.";
        MatHang biaReNhat = timBiaGiaReNhat(danhSach, soLuongMatHang);
        cout << "Bia re nhat: " << biaReNhat.ten << " - Gia: " << biaReNhat.donGia;
        break;
    }
    _getch(); // Dừng màn hình cho đến khi nhấn một phím
}