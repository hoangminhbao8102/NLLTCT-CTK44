struct MatHang 
{
    string ten;
    double donGia;
    int soLuong;
    string donViTinh;
    tm hanSuDung;
    string loai;
};

void nhapDanhSach(MatHang*& danhSach, int& soLuongMatHang);
void xuatDanhSach(const MatHang* danhSach, int soLuongMatHang);
double tinhTongGiaTri(const MatHang* danhSach, int soLuongMatHang);
void timMatHangGiaCaoNhat(const MatHang* danhSach, int soLuongMatHang);
void xuatMatHangHetHan(const MatHang* danhSach, int soLuongMatHang, const tm& ngayHienTai);
bool compareLoai(const MatHang& a, const MatHang& b);
void sapXepVaXuatTheoLoai(MatHang* danhSach, int soLuongMatHang);
void timMatHangSapHetHan(const MatHang* danhSach, int soLuongMatHang, const tm& ngayHienTai);
void lietKeMatHangBanHet(const MatHang* danhSach, int soLuongMatHang);
int demSoLuongBanKeo(const MatHang* danhSach, int soLuongMatHang);
MatHang timBiaGiaReNhat(const MatHang* danhSach, int soLuongMatHang);

void nhapDanhSach(MatHang*& danhSach, int& soLuongMatHang) 
{
    cout << "Nhap so luong mat hang: ";
    cin >> soLuongMatHang;
    danhSach = new MatHang[soLuongMatHang];

    for (int i = 0; i < soLuongMatHang; i++) 
    {
        cout << "Nhap ten mat hang: ";
        cin >> danhSach[i].ten;
        cout << "Nhap don gia: ";
        cin >> danhSach[i].donGia;
        cout << "Nhap so luong: ";
        cin >> danhSach[i].soLuong;
        cout << "Nhap don vi tinh: ";
        cin >> danhSach[i].donViTinh;
        // Nhap han su dung, loai tuong tu
    }
}

void xuatDanhSach(const MatHang* danhSach, int soLuongMatHang) 
{
    for (int i = 0; i < soLuongMatHang; i++) 
    {
        cout << "Ten mat hang: " << danhSach[i].ten << ", Don gia: " << danhSach[i].donGia << ", So luong: " << danhSach[i].soLuong << ", Don vi tinh: " << danhSach[i].donViTinh << endl;
    }
}

double tinhTongGiaTri(const MatHang* danhSach, int soLuongMatHang) 
{
    double tongGiaTri = 0.0;
    for (int i = 0; i < soLuongMatHang; i++) 
    {
        tongGiaTri += danhSach[i].donGia * danhSach[i].soLuong;
    }
    return tongGiaTri;
}

void timMatHangGiaCaoNhat(const MatHang* danhSach, int soLuongMatHang) 
{
    double giaMax = 0;
    for (int i = 0; i < soLuongMatHang; i++) 
    {
        if (danhSach[i].donGia > giaMax) 
        {
            giaMax = danhSach[i].donGia;
        }
    }
    cout << "Mat hang co gia cao nhat:" << endl;
    for (int i = 0; i < soLuongMatHang; i++) 
    {
        if (danhSach[i].donGia == giaMax) 
        {
            cout << danhSach[i].ten << " - " << danhSach[i].donGia << " VND" << endl;
        }
    }
}

void xuatMatHangHetHan(const MatHang* danhSach, int soLuongMatHang, const tm& ngayHienTai) 
{
    cout << "Mat hang het han su dung:" << endl;
    // Tạo một bản sao của ngayHienTai để dùng cho mktime
    tm ngayHienTaiCopy = ngayHienTai;

    for (int i = 0; i < soLuongMatHang; i++) 
    {
        // Bạn cũng cần một bản sao để không thay đổi giá trị gốc của hanSuDung trong danhSach[i]
        tm hanSuDungCopy = danhSach[i].hanSuDung;
        if (mktime(&hanSuDungCopy) < mktime(&ngayHienTaiCopy)) 
        {
            cout << danhSach[i].ten << endl;
        }
    }
}

bool compareLoai(const MatHang& a, const MatHang& b) 
{
    return a.loai < b.loai;
}

void sapXepVaXuatTheoLoai(MatHang* danhSach, int soLuongMatHang) 
{
    sort(danhSach, danhSach + soLuongMatHang, compareLoai);
    xuatDanhSach(danhSach, soLuongMatHang);
}

void timMatHangSapHetHan(const MatHang* danhSach, int soLuongMatHang, const tm& ngayHienTai) 
{
    cout << "Mat hang sap het han su dung trong 30 ngay toi:" << endl;
    // Tạo bản sao tạm thời của ngayHienTai để tránh sửa đổi
    tm ngayHienTaiCopy = ngayHienTai;

    for (int i = 0; i < soLuongMatHang; i++) 
    {
        // Tạo bản sao tạm thời của hanSuDung để tránh sửa đổi
        tm hanSuDungCopy = danhSach[i].hanSuDung;
        if (difftime(mktime(&hanSuDungCopy), mktime(&ngayHienTaiCopy)) <= 30 * 86400) 
        {
            cout << danhSach[i].ten << endl;
        }
    }
}

void lietKeMatHangBanHet(const MatHang* danhSach, int soLuongMatHang) 
{
    cout << "Mat hang da ban het:" << endl;
    for (int i = 0; i < soLuongMatHang; i++) 
    {
        if (danhSach[i].soLuong == 0) 
        {
            cout << danhSach[i].ten << endl;
        }
    }
}

int demSoLuongBanKeo(const MatHang* danhSach, int soLuongMatHang) 
{
    int dem = 0;
    for (int i = 0; i < soLuongMatHang; i++) 
    {
        if (danhSach[i].loai == "banh" || danhSach[i].loai == "keo") 
        {
            dem++;
        }
    }
    return dem;
}

MatHang timBiaGiaReNhat(const MatHang* danhSach, int soLuongMatHang) 
{
    MatHang biaReNhat;
    double giaMin = numeric_limits<double>::max();

    for (int i = 0; i < soLuongMatHang; i++) {
        if (danhSach[i].loai == "bia" && danhSach[i].donGia < giaMin) 
        {
            giaMin = danhSach[i].donGia;
            biaReNhat = danhSach[i];
        }
    }
    return biaReNhat;
}
