string ChuyenDoiNamAmLich(int namDuongLich);

string ChuyenDoiNamAmLich(int namDuongLich) 
{
    string can[10] = { "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky", "Canh", "Tan", "Nham" };
    string chi[12] = { "Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui" };
    string namAmLich = can[(namDuongLich + 6) % 10] + " " + chi[(namDuongLich + 8) % 12];
    return namAmLich;
}