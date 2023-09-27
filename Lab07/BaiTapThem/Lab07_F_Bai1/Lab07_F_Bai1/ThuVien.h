void LietKeKyTuXuatHien(string s, string t);
void LietKeTuXuatHien(string s, string t);
void TimVaLietKeTuDaiNhat(string s);

// Hàm liệt kê các ký tự xuất hiện trong cả hai xâu s và t
void LietKeKyTuXuatHien(string s, string t) 
{
    cout << "Cac ky tu xuat hien trong ca hai xau s va t la: ";
    vector<char> kyTuXuatHien;
    for (int i = 0; i < s.length(); i++) 
    {
        if (t.find(s[i]) != string::npos && find(kyTuXuatHien.begin(), kyTuXuatHien.end(), s[i]) == kyTuXuatHien.end()) {
            kyTuXuatHien.push_back(s[i]);
            cout << s[i] << " ";
        }
    }
    cout << endl;
}

// Hàm liệt kê các từ xuất hiện trong cả hai xâu s và t
void LietKeTuXuatHien(string s, string t) 
{
    cout << "Cac tu xuat hien trong ca hai xau s va t la: ";
    vector<string> tuXuatHien;
    char* cstr = new char[s.length() + 1];
    strcpy(cstr, s.c_str());
    char* p = strtok(cstr, " ");
    while (p != NULL) 
    {
        if (t.find(p) != string::npos && find(tuXuatHien.begin(), tuXuatHien.end(), p) == tuXuatHien.end()) 
        {
            tuXuatHien.push_back(p);
            cout << p << " ";
        }
        p = strtok(NULL, " ");
    }
    delete[] cstr;
    cout << endl;
}

// Hàm tìm và liệt kê từ dài nhất trong xâu s
void TimVaLietKeTuDaiNhat(string s) 
{
    cout << "Tu dai nhat trong xau s la: ";
    char* cstr = new char[s.length() + 1];
    strcpy(cstr, s.c_str());
    char* p = strtok(cstr, " ");
    string tuDaiNhat = "";
    while (p != NULL) 
    {
        if (strlen(p) > tuDaiNhat.length()) 
        {
            tuDaiNhat = p;
        }
        p = strtok(NULL, " ");
    }
    delete[] cstr;
    cout << tuDaiNhat << endl;
}