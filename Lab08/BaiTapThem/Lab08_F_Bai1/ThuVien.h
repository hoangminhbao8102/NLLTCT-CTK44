struct SoPhuc 
{
    double PhanThuc;
    double PhanAo;
};

SoPhuc NhapSoPhuc();
void XuatSoPhuc(SoPhuc& z);
bool SoPhucBangNhau(SoPhuc& z1, SoPhuc& z2);
double TinhDoLon(SoPhuc& z);
SoPhuc SoPhucLienHop(SoPhuc& z);
SoPhuc SoPhucDoi(SoPhuc& z);
SoPhuc SoPhucNghichDao(SoPhuc& z);
bool LaSoThuanAo(SoPhuc& z);
SoPhuc CongHaiSoPhuc(SoPhuc& z1, SoPhuc& z2);
SoPhuc TruHaiSoPhuc(SoPhuc& z1, SoPhuc& z2);
SoPhuc NhanSoThucVoiSoPhuc(double k, SoPhuc& z);
SoPhuc NhanHaiSoPhuc(SoPhuc& z1, SoPhuc& z2);
SoPhuc ChiaHaiSoPhuc(SoPhuc& z1, SoPhuc& z2);
double TinhArgument(SoPhuc& z);
void XuatSoPhucTrongLuongGiac(SoPhuc& z);

SoPhuc NhapSoPhuc() 
{
    SoPhuc z;
    cout << "Nhap phan thuc: ";
    cin >> z.PhanThuc;
    cout << "Nhap phan ao: ";
    cin >> z.PhanAo;
    return z;
}

void XuatSoPhuc(SoPhuc& z) 
{
    cout << z.PhanThuc << " + " << z.PhanAo << "i" << endl;
}

bool SoPhucBangNhau(SoPhuc& z1, SoPhuc& z2) 
{
    return z1.PhanThuc == z2.PhanThuc && z1.PhanAo == z2.PhanAo;
}

double TinhDoLon(SoPhuc& z) 
{
    return sqrt(z.PhanThuc * z.PhanThuc + z.PhanAo * z.PhanAo);
}

SoPhuc SoPhucLienHop(SoPhuc& z) 
{
    SoPhuc lh;
    lh.PhanThuc = z.PhanThuc;
    lh.PhanAo = -z.PhanAo;
    return lh;
}

SoPhuc SoPhucDoi(SoPhuc& z) 
{
    SoPhuc sd;
    sd.PhanThuc = -z.PhanThuc;
    sd.PhanAo = -z.PhanAo;
    return sd;
}

SoPhuc SoPhucNghichDao(SoPhuc& z) 
{
    double ms = z.PhanThuc * z.PhanThuc + z.PhanAo * z.PhanAo;
    SoPhuc nd;
    nd.PhanThuc = z.PhanThuc / ms;
    nd.PhanAo = -z.PhanAo / ms;
    return nd;
}

bool LaSoThuanAo(SoPhuc& z)
{
    return z.PhanThuc == 0 && z.PhanAo != 0;
}

SoPhuc CongHaiSoPhuc(SoPhuc& z1, SoPhuc& z2) 
{
    SoPhuc kq;
    kq.PhanThuc = z1.PhanThuc + z2.PhanThuc;
    kq.PhanAo = z1.PhanAo + z2.PhanAo;
    return kq;
}

SoPhuc TruHaiSoPhuc(SoPhuc& z1, SoPhuc& z2) 
{
    SoPhuc kq;
    kq.PhanThuc = z1.PhanThuc - z2.PhanThuc;
    kq.PhanAo = z1.PhanAo - z2.PhanAo;
    return kq;
}

SoPhuc NhanSoThucVoiSoPhuc(double k, SoPhuc& z) 
{
    SoPhuc kq;
    kq.PhanThuc = k * z.PhanThuc;
    kq.PhanAo = k * z.PhanAo;
    return kq;
}

SoPhuc NhanHaiSoPhuc(SoPhuc& z1, SoPhuc& z2) 
{
    SoPhuc kq;
    kq.PhanThuc = z1.PhanThuc * z2.PhanThuc - z1.PhanAo * z2.PhanAo;
    kq.PhanAo = z1.PhanThuc * z2.PhanAo + z1.PhanAo * z2.PhanThuc;
    return kq;
}

SoPhuc ChiaHaiSoPhuc(SoPhuc& z1, SoPhuc& z2) 
{
    double ms = z2.PhanThuc * z2.PhanThuc + z2.PhanAo * z2.PhanAo;
    SoPhuc kq;
    kq.PhanThuc = (z1.PhanThuc * z2.PhanThuc + z1.PhanAo * z2.PhanAo) / ms;
    kq.PhanAo = (z1.PhanAo * z2.PhanThuc - z1.PhanThuc * z2.PhanAo) / ms;
    return kq;
}

double TinhArgument(SoPhuc& z) 
{
    return atan2(z.PhanAo, z.PhanThuc);
}

void XuatSoPhucTrongLuongGiac(SoPhuc& z) 
{
    double r = TinhDoLon(z);
    double arg = TinhArgument(z);
    std::cout << "z = " << r << "(cos" << arg << " + i sin" << arg << ")" << std::endl;
}