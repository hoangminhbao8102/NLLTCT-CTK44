void GiaiThapHaNoi(int n, char Nguon, char Dich, char TrungGian);

void GiaiThapHaNoi(int n, char Nguon, char Dich, char TrungGian)
{
    if (n == 1) 
    {
        cout << "Chuyen dia 1 tu " << Nguon << " sang " << Dich << endl;
        return;
    }

    GiaiThapHaNoi(n - 1, Nguon, TrungGian, Dich);
    cout << "Chuyen dia " << n << " tu " << Nguon << " sang " << Dich << endl;
    GiaiThapHaNoi(n - 1, TrungGian, Dich, Nguon);
}