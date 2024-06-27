enum LoaiTaiLieu { Sach, BaoKhoaHoc, TapChi, LuanVan };

struct TaiLieu
{
    char maTaiLieu[11];
    string tuaDe;
    LoaiTaiLieu loai;
    int namXuatBan;
    string tacGia;
    string nhaXuatBan;
    double gia;
};

void NhapTaiLieu(TaiLieu& tl);
void XuatTaiLieu(const TaiLieu& tl);
double TinhTongGiaTaiLieu(const TaiLieu* danhSach, int soLuong);
void TimTaiLieuTheoNhaXuatBanVaNam(const TaiLieu* danhSach, size_t soLuong, const string& nhaXuatBan, int nam);
void TimBaiBaoKhoaHocCuaTacGia(const TaiLieu* danhSach, size_t soLuong, const string& tacGia);
void ThongKeSoLuongTheoLoai(const TaiLieu* danhSach, size_t soLuong);
void XuatTaiLieuDatNhat(const TaiLieu* danhSach, size_t soLuong);
void LietKeTheoNamXuatBan(const TaiLieu* danhSach, size_t soLuong);
void TaiLieuNhieuTacGiaNhat(const TaiLieu* danhSach, size_t soLuong);
void XemTaiLieuTheoMa(const TaiLieu* danhSach, size_t soLuong, const char* maTaiLieu);
void SapXepTheoTuaDe(TaiLieu* danhSach, size_t soLuong);

void NhapTaiLieu(TaiLieu& tl) 
{
    cout << "Nhap ma tai lieu (toi da 10 ky tu): ";
    cin.getline(tl.maTaiLieu, 11); // Sử dụng đúng với char array
    cout << "Nhap tua de: ";
    getline(cin, tl.tuaDe); // Đảm bảo rằng tl.tuaDe là một std::string
    cout << "Nhap loai tai lieu (0: Sach, 1: Bao Khoa Hoc, 2: Tap Chi, 3: Luan Van): ";
    int loai;
    cin >> loai;
    cin.ignore(); // Gọi ignore ngay sau cin >> để xóa bộ nhớ đệm trước khi gọi getline
    tl.loai = static_cast<LoaiTaiLieu>(loai);
    if (tl.loai != LoaiTaiLieu::TapChi) // Sử dụng enum type để so sánh
    {
        cout << "Nhap tac gia: ";
        getline(cin, tl.tacGia);
    }
    if (tl.loai != LoaiTaiLieu::LuanVan) // Sử dụng enum type để so sánh
    {
        cout << "Nhap nha xuat ban: ";
        getline(cin, tl.nhaXuatBan);
    }
    cout << "Nhap gia: ";
    cin >> tl.gia;
    cin.ignore(); // Gọi ignore sau khi nhập giá để xóa bộ nhớ đệm
}

void XuatTaiLieu(const TaiLieu& tl) 
{
    cout << "Ma Tai Lieu: " << tl.maTaiLieu << endl
        << "Tua De: " << tl.tuaDe << endl
        << "Loai: " << tl.loai << endl
        << "Nam Xuat Ban: " << tl.namXuatBan << endl
        << "Tac Gia: " << tl.tacGia << endl
        << "Nha Xuat Ban: " << tl.nhaXuatBan << endl
        << "Gia: " << tl.gia << endl;
}

double TinhTongGiaTaiLieu(const TaiLieu* danhSach, int soLuong) 
{
    double tongGia = 0.0;
    for (int i = 0; i < soLuong; ++i) 
    {
        tongGia += danhSach[i].gia;
    }
    return tongGia;
}

void TimTaiLieuTheoNhaXuatBanVaNam(const TaiLieu* danhSach, size_t soLuong, const string& nhaXuatBan, int nam)
{
    bool found = false;
    for (int i = 0; i < soLuong; ++i) 
    {
        if (danhSach[i].nhaXuatBan == nhaXuatBan && danhSach[i].namXuatBan == nam) 
        {
            XuatTaiLieu(danhSach[i]);
            found = true;
        }
    }
    if (!found) 
    {
        cout << "Khong tim thay tai lieu nao duoc xuat ban boi " << nhaXuatBan << " trong nam " << nam << "." << endl;
    }
}

void TimBaiBaoKhoaHocCuaTacGia(const TaiLieu* danhSach, size_t soLuong, const string& tacGia)
{
    for (int i = 0; i < soLuong; ++i) 
    {
        if (danhSach[i].loai == BaoKhoaHoc && danhSach[i].tacGia.find(tacGia) != string::npos) 
        {
            XuatTaiLieu(danhSach[i]);
        }
    }
}

void ThongKeSoLuongTheoLoai(const TaiLieu* danhSach, size_t soLuong)
{
    int sach = 0, bao = 0, tapChi = 0, luanVan = 0;
    for (int i = 0; i < soLuong; ++i) {
        switch (danhSach[i].loai) 
        {
        case Sach: sach++; break;
        case BaoKhoaHoc: bao++; break;
        case TapChi: tapChi++; break;
        case LuanVan: luanVan++; break;
        }
    }
    cout << "Sach: " << sach << ", Bao Khoa Hoc: " << bao << ", Tap Chi: " << tapChi << ", Luan Van: " << luanVan << endl;
}

void XuatTaiLieuDatNhat(const TaiLieu* danhSach, size_t soLuong)
{
    double giaCaoNhat = 0;
    for (int i = 0; i < soLuong; ++i) 
    {
        if (danhSach[i].gia > giaCaoNhat) 
        {
            giaCaoNhat = danhSach[i].gia;
        }
    }
    for (int i = 0; i < soLuong; ++i) 
    {
        if (danhSach[i].gia == giaCaoNhat) 
        {
            XuatTaiLieu(danhSach[i]);
        }
    }
}

void LietKeTheoNamXuatBan(const TaiLieu* danhSach, size_t soLuong)
{
    int namMin = danhSach[0].namXuatBan, namMax = danhSach[0].namXuatBan;
    for (int i = 1; i < soLuong; ++i) 
    {
        if (danhSach[i].namXuatBan < namMin) namMin = danhSach[i].namXuatBan;
        if (danhSach[i].namXuatBan > namMax) namMax = danhSach[i].namXuatBan;
    }

    for (int nam = namMin; nam <= namMax; ++nam) 
    {
        bool found = false;
        for (int i = 0; i < soLuong; ++i) 
        {
            if (danhSach[i].namXuatBan == nam) 
            {
                if (!found) 
                {
                    cout << "Nam " << nam << ":" << endl;
                    found = true;
                }
                XuatTaiLieu(danhSach[i]);
            }
        }
    }
}

void TaiLieuNhieuTacGiaNhat(const TaiLieu* danhSach, size_t soLuong)
{
    int maxCount = 0;
    const TaiLieu* result = nullptr;
    for (int i = 0; i < soLuong; ++i) 
    {
        int count = 1;
        for (size_t pos = 0; pos < danhSach[i].tacGia.length(); ++pos) 
        {
            if (danhSach[i].tacGia[pos] == ',') count++;
        }
        if (count > maxCount) 
        {
            maxCount = count;
            result = &danhSach[i];
        }
    }
    if (result != nullptr) {
        XuatTaiLieu(*result);
    }
}

void XemTaiLieuTheoMa(const TaiLieu* danhSach, size_t soLuong, const char* maTaiLieu)
{
    for (int i = 0; i < soLuong; ++i) 
    {
        if (strcmp(danhSach[i].maTaiLieu, maTaiLieu) == 0) 
        {
            XuatTaiLieu(danhSach[i]);
            return;
        }
    }
    cout << "Khong tim thay tai lieu voi ma: " << maTaiLieu << endl;
}

void SapXepTheoTuaDe(TaiLieu* danhSach, size_t soLuong)
{
    sort(danhSach, danhSach + soLuong, [](const TaiLieu& a, const TaiLieu& b) 
        {
        return a.tuaDe < b.tuaDe;
        });
}