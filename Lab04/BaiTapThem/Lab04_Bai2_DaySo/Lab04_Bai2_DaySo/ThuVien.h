float TinhTongHn_Harmonic(int n);
float TinhTongSn(int n);
float TinhTongTn(int n);
float TinhTongUn(int n);
int TinhTongFn(int n);

// Hàm tính tổng số Harmonic Hn
float TinhTongHn_Harmonic(int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    return sum;
}

// Hàm tính tổng Sn
float TinhTongSn(int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (i + 1.0) / (i * i);
    }
    return sum;
}

// Hàm tính tổng Tn
float TinhTongTn(int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(-1, i) * i / (i + 1.0);
    }
    return sum;
}

// Hàm tính tổng Un
float TinhTongUn(int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / (i * (i + 1));
    }
    return sum;
}

// Hàm tính tổng Fn
int TinhTongFn(int n)
{
    int sum = 0;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sum += factorial;
    }
    return sum;
}