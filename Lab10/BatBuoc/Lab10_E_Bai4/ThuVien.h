string DaoNguocXau(string& str);

string DaoNguocXau(string& str) 
{
    if (str.empty())
        return "";
    else
        return DaoNguocXau(str.substr(1)) + str[0];
}