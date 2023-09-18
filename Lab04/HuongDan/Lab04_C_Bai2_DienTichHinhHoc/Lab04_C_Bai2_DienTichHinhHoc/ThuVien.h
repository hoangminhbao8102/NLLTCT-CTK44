#define PI 3.1415926
double DienTichHinhVuong(double canh);
double DienTichHinhChuNhat(double dai, double rong);
double DienTichTamGiac(double a, double b, double c);
double DienTichHinhTron(double BanKinh);
double DienTichHinhVuong(double canh)
{
	return canh * canh;
}
double DienTichHinhChuNhat(double dai, double rong)
{
	return dai * rong;
}
double DienTichTamGiac(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
double DienTichHinhTron(double BanKinh)
{
	return PI * BanKinh * BanKinh;
}