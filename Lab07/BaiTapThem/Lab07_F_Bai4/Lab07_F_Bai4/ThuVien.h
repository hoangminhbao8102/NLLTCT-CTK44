string nenXau(const string& s);
string giaiNenXau(const string& s);

// Hàm nén xâu ký tự
string nenXau(const string& s) 
{
    string compressedString = ""; // Xâu kết quả sau khi nén
    int count = 1; // Số lần xuất hiện của ký tự hiện tại

    // Duyệt qua từng ký tự trong xâu
    for (int i = 0; i < s.length(); i++) 
    {
        // Nếu ký tự hiện tại giống ký tự tiếp theo
        if (s[i] == s[i + 1]) 
        {
            count++; // Tăng số lần xuất hiện
        }
        else 
        {
            // Nếu ký tự chỉ xuất hiện 1 lần, không cần nén
            if (count == 1) 
            {
                compressedString += s[i]; // Thêm ký tự vào xâu kết quả
            }
            else 
            {
                compressedString += to_string(count) + s[i]; // Thêm số lần xuất hiện và ký tự vào xâu kết quả
                count = 1; // Reset số lần xuất hiện
            }
        }
    }

    return compressedString;
}

// Hàm giải nén xâu ký tự
string giaiNenXau(const string& s) 
{
    string decompressedString = ""; // Xâu kết quả sau khi giải nén

    // Duyệt qua từng ký tự trong xâu
    for (int i = 0; i < s.length(); i++) 
    {
        // Nếu ký tự là số
        if (isdigit(s[i])) 
        {
            int count = s[i] - '0'; // Số lần xuất hiện của ký tự
            char character = s[i + 1]; // Ký tự

            // Thêm ký tự vào xâu kết quả count lần
            for (int j = 0; j < count; j++) 
            {
                decompressedString += character;
            }

            i++; // Bỏ qua ký tự số đã xử lý
        }
        else 
        {
            decompressedString += s[i]; // Thêm ký tự vào xâu kết quả
        }
    }

    return decompressedString;
}