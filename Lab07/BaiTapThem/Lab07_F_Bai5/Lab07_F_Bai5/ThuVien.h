string maHoa(const string& s);
string giaiMa(const string& s);

// Hàm mã hóa chuỗi ký tự bằng cách đảo bit hoặc đảo ngược thứ tự các bit
string maHoa(const string& s) 
{
    string encodedString = ""; // Xâu kết quả sau khi mã hóa

    // Duyệt qua từng ký tự trong xâu
    for (int i = 0; i < s.length(); i++) 
    {
        char encodedChar = s[i] ^ 255; // Đảo tất cả các bit của ký tự

        encodedString += encodedChar; // Thêm ký tự vào xâu kết quả
    }

    return encodedString;
}

// Hàm giải mã chuỗi ký tự bằng cách đảo bit hoặc đảo ngược thứ tự các bit
string giaiMa(const string& s) 
{
    string decodedString = ""; // Xâu kết quả sau khi giải mã

    // Duyệt qua từng ký tự trong xâu
    for (int i = 0; i < s.length(); i++) 
    {
        char decodedChar = s[i] ^ 255; // Đảo tất cả các bit của ký tự

        decodedString += decodedChar; // Thêm ký tự vào xâu kết quả
    }

    return decodedString;
}