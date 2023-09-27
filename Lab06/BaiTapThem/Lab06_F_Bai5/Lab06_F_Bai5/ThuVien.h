void TaoMaPhuong(int** matrix, int n);
void XuatMaPhuong(int** matrix, int n);
void GiaiMaPhuongLe();

void TaoMaPhuong(int** matrix, int n) 
{
    int row = 0;
    int col = n / 2;
    int num = 1;

    while (num <= n * n) 
    {
        matrix[row][col] = num;

        int newRow = (row - 1 + n) % n;
        int newCol = (col + 1) % n;

        if (matrix[newRow][newCol] != 0) 
        {
            row = (row + 1) % n;
        }
        else 
        {
            row = newRow;
            col = newCol;
        }

        num++;
    }
}

void XuatMaPhuong(int** matrix, int n) 
{
    cout << "Ma phuong " << n << "x" << n << ":" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void GiaiMaPhuongLe() 
{
    int n;

    cout << "Nhap bac n (n le): ";
    cin >> n;

    if (n % 2 == 0) 
    {
        cout << "Bac n khong hop le." << endl;
        return;
    }

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) 
    {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) 
        {
            matrix[i][j] = 0;
        }
    }

    TaoMaPhuong(matrix, n);
    XuatMaPhuong(matrix, n);

    for (int i = 0; i < n; i++) 
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}