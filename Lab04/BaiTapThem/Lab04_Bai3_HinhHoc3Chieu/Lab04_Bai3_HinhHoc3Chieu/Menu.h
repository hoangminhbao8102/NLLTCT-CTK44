void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
    cout << endl << "=========== CHON CHUC NANG ==========";
    cout << endl << "0. Thoat khoi chuong trinh";
    cout << endl << "1. Tinh the tich hinh lap phuong";
    cout << endl << "2. Tinh the tich hinh hop chu nhat";
    cout << endl << "3. Tinh the tich hinh cau";
    cout << endl << "4. Tinh the tich hinh non";
    cout << endl << "5. Tinh the tich hinh tru tron";
    cout << endl << "6. Tinh the tich hinh chop";
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
    double canh, chieuDai, chieuRong, chieuCao, banKinhDay;
    switch (menu)
    {
    case 0:
        cout << endl << "0. Thoat khoi chuong trinh";
        break;
    case 1:
        cout << endl << "1. Tinh the tich hinh lap phuong";
        cout << "Nhap canh cua hinh lap phuong: ";
        cin >> canh;
        cout << "The tich hinh lap phuong: " << TinhTheTichLapPhuong(canh) << endl;
        break;
    case 2:
        cout << endl << "2. Tinh the tich hinh hop chu nhat";
        cout << "Nhap chieu dai cua hinh hop chu nhat: ";
        cin >> chieuDai;
        cout << "Nhap chieu rong cua hinh hop chu nhat: ";
        cin >> chieuRong;
        cout << "Nhap chieu cao cua hinh hop chu nhat: ";
        cin >> chieuCao;
        cout << "The tich hinh hop chu nhat: " << TinhTheTichHopChuNhat(chieuDai, chieuRong, chieuCao) << endl;
        break;
    case 3:
        cout << endl << "3. Tinh the tich hinh cau";
        cout << "Nhap ban kinh cua hinh cau: ";
        cin >> banKinhDay;
        cout << "The tich hinh cau: " << TinhTheTichHinhCau(banKinhDay) << endl;
        break;
    case 4:
        cout << endl << "4. Tinh the tich hinh non";
        cout << "Nhap ban kinh day cua hinh non: ";
        cin >> banKinhDay;
        cout << "Nhap chieu cao cua hinh non: ";
        cin >> chieuCao;
        cout << "The tich hinh non: " << TinhTheTichHinhNon(banKinhDay, chieuCao) << endl;
        break;
    case 5:
        cout << endl << "5. Tinh the tich hinh tru tron";
        cout << "Nhap ban kinh day cua hinh tru tron: ";
        cin >> banKinhDay;
        cout << "Nhap chieu cao cua hinh tru tron: ";
        cin >> chieuCao;
        cout << "The tich hinh tru tron: " << TinhTheTichHinhTruTron(banKinhDay, chieuCao) << endl;
        break;
    case 6:
        cout << endl << "6. Tinh the tich hinh chop";
        cout << "Nhap ban kinh day cua hinh chop: ";
        cin >> banKinhDay;
        cout << "Nhap chieu cao cua hinh chop: ";
        cin >> chieuCao;
        cout << "The tich hinh chop: " << TinhTheTichHinhChop(banKinhDay, chieuCao) << endl;
        break;
    default:
        cout << endl << "Lua chon khong hop le. Vui long nhap lai";
        break;
    }
}