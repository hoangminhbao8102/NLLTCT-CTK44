void XuatPhanTuPhanBiet(int a[], int n);

void XuatPhanTuPhanBiet(int a[], int n)
{
    // Sắp xếp mảng a để các phần tử giống nhau nằm cạnh nhau
    std::sort(a, a + n);

    // Khởi tạo mảng phụ và mảng đếm
    int b[10001] = { 0 };
    int count = 0;

    // Duyệt qua mảng a để tìm các phần tử phân biệt và số lần xuất hiện
    for (int i = 0; i < n; i++) {
        if (i == 0 || a[i] != a[i - 1]) {
            b[count] = a[i];
            count++;
        }
    }

    // Xuất kết quả
    std::cout << "Cac phan tu phan biet cua mang a va so lan xuat hien cua chung la:\n";
    for (int i = 0; i < count; i++) {
        int dem = std::count(a, a + n, b[i]);
        std::cout << "Phan tu " << b[i] << " xuat hien " << dem << " lan\n";
    }
}