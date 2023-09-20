void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << endl << "=========== CHON CHUC NANG ==========";
	cout << endl << "0. Thoat khoi chuong trinh";
    cout << endl << "1. Giai phuong trinh bac nhat 1 an";
    cout << endl << "2. Giai phuong trinh bac hai 1 an";
    cout << endl << "3. Giai phuong trinh bac ba 1 an";
    cout << endl << "4. Giai phuong trinh trung phuong";
    cout << endl << "5. Giai he phuong trinh bac nhat 1 an";
    cout << endl << "6. Giai he phuong trinh bac nhat 2 an";
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
    float a, b, c, d, a1, b1, c1, d1, a2, b2, c2, d2;
    switch (menu)
    {
    case 0:
        cout << endl << "0. Thoat khoi chuong trinh";
        break;
    case 1:
        cout << endl << "1. Giai phuong trinh bac nhat 1 an";
        cout << "Nhap he so a: ";
        cin >> a;
        cout << "Nhap he so b: ";
        cin >> b;
        GiaiPTBacNhat(a, b);
        break;
    case 2:
        cout << endl << "2. Giai phuong trinh bac hai 1 an";
        cout << "Nhap he so a: ";
        cin >> a;
        cout << "Nhap he so b: ";
        cin >> b;
        cout << "Nhap he so c: ";
        cin >> c;
        GiaiPTBacHai(a, b, c);
        break;
    case 3:
        cout << endl << "3. Giai phuong trinh bac ba 1 an";
        cout << "Nhap he so a: ";
        cin >> a;
        cout << "Nhap he so b: ";
        cin >> b;
        cout << "Nhap he so c: ";
        cin >> c;
        cout << "Nhap he so d: ";
        cin >> d;
        GiaiPTBacBa(a, b, c, d);
        break;
    case 4:
        cout << endl << "4. Giai phuong trinh trung phuong";
        cout << "Nhap he so a: ";
        cin >> a;
        cout << "Nhap he so b: ";
        cin >> b;
        cout << "Nhap he so c: ";
        cin >> c;
        GiaiPTTrungPhuong(a, b, c);
        break;
    case 5:
        cout << endl << "5. Giai he phuong trinh bac nhat 1 an";
        cout << "Nhap he so a1: ";
        cin >> a1;
        cout << "Nhap he so b1: ";
        cin >> b1;
        cout << "Nhap he so c1: ";
        cin >> c1;
        cout << "Nhap he so a2: ";
        cin >> a2;
        cout << "Nhap he so b2: ";
        cin >> b2;
        cout << "Nhap he so c2: ";
        cin >> c2;
        GiaiHePTBacNhat(a1, b1, c1, a2, b2, c2);
        break;
    case 6:
        cout << endl << "6. Giai he phuong trinh bac nhat 2 an";
        cout << "Nhap he so a1: ";
        cin >> a1;
        cout << "Nhap he so b1: ";
        cin >> b1;
        cout << "Nhap he so c1: ";
        cin >> c1;
        cout << "Nhap he so d1: ";
        cin >> d1;
        cout << "Nhap he so a2: ";
        cin >> a2;
        cout << "Nhap he so b2: ";
        cin >> b2;
        cout << "Nhap he so c2: ";
        cin >> c2;
        cout << "Nhap he so d2: ";
        cin >> d2;
        GiaiHePTBacHai(a1, b1, c1, a2, b2, c2, d1, d2);
        break;
    default:
        cout << "Lua chon khong hop le. Vui long nhap lai" << endl;
        break;
    }
}