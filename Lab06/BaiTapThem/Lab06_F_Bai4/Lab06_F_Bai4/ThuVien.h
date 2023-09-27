bool KiemTraHang(int matrix[][9], int row, int num);
bool KiemTraCot(int matrix[][9], int col, int num);
bool KiemTraVung(int matrix[][9], int row, int col, int num);
bool KiemTraHopLe(int matrix[][9], int row, int col, int num);
bool TimViTriTrong(int matrix[][9], int& row, int& col);
bool GiaiSudoku(int matrix[][9]);
void NhapMaTran(int matrix[][9]);
void InMaTran(int matrix[][9]);

bool KiemTraHang(int matrix[][9], int row, int num) 
{
    for (int col = 0; col < 9; col++) 
    {
        if (matrix[row][col] == num) 
        {
            return true;
        }
    }
    return false;
}

bool KiemTraCot(int matrix[][9], int col, int num) 
{
    for (int row = 0; row < 9; row++) 
    {
        if (matrix[row][col] == num) 
        {
            return true;
        }
    }
    return false;
}

bool KiemTraVung(int matrix[][9], int row, int col, int num) 
{
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (matrix[i + startRow][j + startCol] == num) 
            {
                return true;
            }
        }
    }
    return false;
}

bool KiemTraHopLe(int matrix[][9], int row, int col, int num) 
{
    return !KiemTraHang(matrix, row, num) &&
        !KiemTraCot(matrix, col, num) &&
        !KiemTraVung(matrix, row, col, num);
}

bool TimViTriTrong(int matrix[][9], int& row, int& col) 
{
    for (row = 0; row < 9; row++) 
    {
        for (col = 0; col < 9; col++) 
        {
            if (matrix[row][col] == 0) 
            {
                return true;
            }
        }
    }
    return false;
}

bool GiaiSudoku(int matrix[][9]) 
{
    int row, col;
    if (!TimViTriTrong(matrix, row, col)) 
    {
        return true; // Tìm thấy lời giải
    }
    for (int num = 1; num <= 9; num++) 
    {
        if (KiemTraHopLe(matrix, row, col, num)) 
        {
            matrix[row][col] = num;
            if (GiaiSudoku(matrix)) 
            {
                return true; // Tìm thấy lời giải
            }
            matrix[row][col] = 0; // Quay lui nếu không tìm thấy lời giải
        }
    }
    return false; // Không tìm thấy lời giải
}

void NhapMaTran(int matrix[][9]) 
{
    cout << "Nhap ma tran Sudoku (0 - ung dung, cac so tu 1 den 9 - cac so da duoc dien):" << endl;
    for (int row = 0; row < 9; row++) 
    {
        for (int col = 0; col < 9; col++) 
        {
            cin >> matrix[row][col];
        }
    }
}

void InMaTran(int matrix[][9]) 
{
    cout << "Ma tran Sudoku:" << endl;
    for (int row = 0; row < 9; row++) 
    {
        for (int col = 0; col < 9; col++) 
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

void ChoiSudoku() 
{
    int matrix[9][9];

    NhapMaTran(matrix);
    InMaTran(matrix);

    if (GiaiSudoku(matrix)) 
    {
        cout << "Da tim thay loi giai:" << endl;
        InMaTran(matrix);
    }
    else 
    {
        cout << "Khong tim thay loi giai." << endl;
    }
}