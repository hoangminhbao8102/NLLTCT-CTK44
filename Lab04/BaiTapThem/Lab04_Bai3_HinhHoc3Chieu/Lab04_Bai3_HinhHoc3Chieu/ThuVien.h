#define PI 3.14

double TinhTheTichLapPhuong(double canh);
double TinhTheTichHopChuNhat(double chieuDai, double chieuRong, double chieuCao);
double TinhTheTichHinhCau(double banKinh);
double TinhTheTichHinhNon(double banKinhDay, double chieuCao);
double TinhTheTichHinhTruTron(double banKinhDay, double chieuCao);
double TinhTheTichHinhChop(double banKinhDay, double chieuCao);

double TinhTheTichLapPhuong(double canh) 
{
    return canh * canh * canh;
}

double TinhTheTichHopChuNhat(double chieuDai, double chieuRong, double chieuCao) {
    return chieuDai * chieuRong * chieuCao;
}

double TinhTheTichHinhCau(double banKinh) 
{
    return (4.0 / 3.0) * PI * banKinh * banKinh * banKinh;
}

double TinhTheTichHinhNon(double banKinhDay, double chieuCao) 
{
    return (1.0 / 3.0) * PI * banKinhDay * banKinhDay * chieuCao;
}

double TinhTheTichHinhTruTron(double banKinhDay, double chieuCao) 
{
    return PI * banKinhDay * banKinhDay * chieuCao;
}

double TinhTheTichHinhChop(double banKinhDay, double chieuCao) 
{
    return (1.0 / 3.0) * PI * banKinhDay * banKinhDay * chieuCao;
}