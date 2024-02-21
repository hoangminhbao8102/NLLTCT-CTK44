int DemSoLanXuatHien(int arr[], int size, int x, int index = 0);
bool KiemTraSoNguyenTo(int n, int divisor = 2);
int DemSoNguyenTo(int arr[], int size, int index = 0);

int DemSoLanXuatHien(int arr[], int size, int x, int index = 0) 
{
    if (index == size) 
    {
        return 0;
    }
    return (arr[index] == x) + DemSoLanXuatHien(arr, size, x, index + 1);
}

bool KiemTraSoNguyenTo(int n, int divisor = 2) 
{
    if (n <= 2) 
    {
        return (n == 2);
    }
    if (n % divisor == 0) 
    {
        return false;
    }
    if (divisor * divisor > n) 
    {
        return true;
    }
    return KiemTraSoNguyenTo(n, divisor + 1);
}

int DemSoNguyenTo(int arr[], int size, int index = 0) 
{
    if (index == size) 
    {
        return 0;
    }
    return KiemTraSoNguyenTo(arr[index]) + DemSoNguyenTo(arr, size, index + 1);
}