vector<string> TachXau(string s);
bool KiemTraChuaSo(string s);
vector<int> TachSo(string s);
string DaoNguocTu(string s);

vector<string> TachXau(string s) 
{
    vector<string> mangTu;
    char* cstr = new char[s.length() + 1];
    strcpy(cstr, s.c_str());
    char* p = strtok(cstr, " ");
    while (p != NULL) 
    {
        mangTu.push_back(p);
        p = strtok(NULL, " ");
    }
    delete[] cstr;
    return mangTu;
}

// Hàm kiểm tra xâu s có chứa ký tự số hay không
bool KiemTraChuaSo(string s) 
{
    for (int i = 0; i < s.length(); i++) 
    {
        if (isdigit(s[i])) 
        {
            return true;
        }
    }
    return false;
}

// Hàm tách các số trong xâu s thành một mảng số riêng
vector<int> TachSo(string s) 
{
    vector<int> mangSo;
    string so = "";
    for (int i = 0; i < s.length(); i++) 
    {
        if (isdigit(s[i])) 
        {
            so += s[i];
        }
        else {
            if (!so.empty()) {
                mangSo.push_back(std::stoi(so));
                so = "";
            }
        }
    }
    if (!so.empty()) 
    {
        mangSo.push_back(stoi(so));
    }
    return mangSo;
}

// Hàm đảo ngược thứ tự các từ trong xâu s
string DaoNguocTu(string s) 
{
    vector<string> mangTu = TachXau(s);
    string ketQua = "";
    for (int i = mangTu.size() - 1; i >= 0; i--) {
        ketQua += mangTu[i];
        if (i > 0) 
        {
            ketQua += " ";
        }
    }
    return ketQua;
}