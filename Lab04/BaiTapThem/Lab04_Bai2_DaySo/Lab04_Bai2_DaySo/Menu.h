void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
    cout << endl << "=========== CHON CHUC NANG ==========";
    cout << endl << "0. Thoat khoi chuong trinh";
    cout << endl << "1. Tinh tong Hn_Harmonic";
    cout << endl << "2. Tinh tong Sn";
    cout << endl << "3. Tinh tong Tn";
    cout << endl << "4. Tinh tong Un";
    cout << endl << "5. Tinh tong Fn";
    cout << endl << "=====================================";
}

int ChonMenu(int SoMenu)
{
    int STT;
    for (;;)
    {
        system("CLS");
        XuatMenu();
        cout << "\nNhap 1 so de chon menu ( 0 <= stt <= " << SoMenu << " ) : stt = ";
        cin >> STT;
        if (0 <= STT && STT <= SoMenu)
            break;
    }
    return STT;
}

void XuLyMenu(int menu)
{
    int n;
    switch (menu)
    {
    case 0:
        cout << endl << "0. Thoat khoi chuong trinh";
        break;
    case 1:
        cout << endl << "1. Tinh tong Hn_Harmonic";
        cout << "Nhap n: ";
        cin >> n;
        cout << "Tong H(" << n << ") = " << TinhTongHn_Harmonic(n) << endl;
        break;
    case 2:
        cout << endl << "2. Tinh tong Sn";
        cout << "Nhap n: ";
        cin >> n;
        cout << "Tong S(" << n << ") = " << TinhTongSn(n) << endl;
        break;
    case 3:
        cout << endl << "3. Tinh tong Tn";
        cout << "Nhap n: ";
        cin >> n;
        cout << "Tong T(" << n << ") = " << TinhTongTn(n) << endl;
        break;
    case 4:
        cout << endl << "4. Tinh tong Un";
        cout << "Nhap n: ";
        cin >> n;
        cout << "Tong U(" << n << ") = " << TinhTongUn(n) << endl;
        break;
    case 5:
        cout << endl << "5. Tinh tong Fn";
        cout << "Nhap n: ";
        cin >> n;
        cout << "Tong F(" << n << ") = " << TinhTongFn(n) << endl;
        break;
    default:
        cout << "Lua chon khong hop le. Vui long nhap lai" << endl;
        break;
    }
}