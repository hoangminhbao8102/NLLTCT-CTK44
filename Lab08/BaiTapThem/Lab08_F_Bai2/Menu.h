void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu, TaiLieu& tl);

extern vector<TaiLieu> danhSach; // Giả sử bạn lưu danh sách tài liệu trong một vector

void XuatMenu()
{
	cout << "\n======================HE THONG CHUC NANG======================";
	cout << "\n0. Thoat chuong trinh.";
	cout << "\n1. Nhap mot danh sach tai lieu.";
	cout << "\n2. Xuat danh sach tai lieu ra man hinh.";
	cout << "\n3. Tim danh muc sach duoc xuat ban boi nhaXb vao namXb cho truoc.";
	cout << "\n4. Tim nhung bai bao khoa hoc co su tham gia cua tac gia tacGia cho truoc.";
	cout << "\n5. Thong ke so luong tai lieu theo moi loai.";
	cout << "\n6. Xem thong tin nhung tai lieu co gia dat nhat.";
	cout << "\n7. Liet ke cac tai lieu theo tung nam xuat ban.";
	cout << "\n8. Tim tai lieu co nhieu tac gia nhat.";
	cout << "\n9. Xem thong tin tai lieu theo ma so tai lieu (maTl) cho truoc.";
	cout << "\n10. Sap xep cac tai lieu tang dan theo tua de.";
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

void XuLyMenu(int menu, TaiLieu& tl)
{
	string nhaXuatBan, tacGia, maTaiLieu;
	int namXuatBan;

	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\nThoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap mot danh sach tai lieu.";
		NhapTaiLieu(tl);
		danhSach.push_back(tl); // Thêm tài liệu vào danh sách
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xuat danh sach tai lieu ra man hinh.";
		for (const auto& item : danhSach) 
		{
			XuatTaiLieu(item);
		}
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tim danh muc sach duoc xuat ban boi nhaXb vao namXb cho truoc.";
		cout << "\nNhap nha xuat ban: ";
		getline(cin, nhaXuatBan);
		cout << "\nNhap nam xuat ban: ";
		cin >> namXuatBan;
		cin.ignore();
		TimTaiLieuTheoNhaXuatBanVaNam(danhSach.data(), danhSach.size(), nhaXuatBan, namXuatBan);
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tim nhung bai bao khoa hoc co su tham gia cua tac gia tacGia cho truoc.";
		cout << "\nNhap ten tac gia: ";
		getline(cin, tacGia);
		TimBaiBaoKhoaHocCuaTacGia(danhSach.data(), danhSach.size(), tacGia);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Thong ke so luong tai lieu theo moi loai.";
		ThongKeSoLuongTheoLoai(danhSach.data(), danhSach.size());
		break;
	case 6:
		system("CLS");
		cout << "\n6. Xem thong tin nhung tai lieu co gia dat nhat";
		XuatTaiLieuDatNhat(danhSach.data(), danhSach.size());
		break;
	case 7:
		system("CLS");
		cout << "\n7. Liet ke cac tai lieu theo tung nam xuat ban.";
		LietKeTheoNamXuatBan(danhSach.data(), danhSach.size());
		break;
	case 8:
		system("CLS");
		cout << "\n8. Tim tai lieu co nhieu tac gia nhat.";
		TaiLieuNhieuTacGiaNhat(danhSach.data(), danhSach.size());
		break;
	case 9:
		system("CLS");
		cout << "\n9. Xem thong tin tai lieu theo ma so tai lieu (maTl) cho truoc.";
		cout << "\nNhap ma tai lieu: ";
		getline(cin, maTaiLieu);
		XemTaiLieuTheoMa(danhSach.data(), danhSach.size(), maTaiLieu.c_str());
		break;
	case 10:
		system("CLS");
		cout << "\n10. Sap xep cac tai lieu tang dan theo tua de.";
		SapXepTheoTuaDe(danhSach.data(), danhSach.size());
		break;
	}
	_getch();
}