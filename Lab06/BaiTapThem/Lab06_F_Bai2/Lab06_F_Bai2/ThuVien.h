void taoBaiMin(int m, int n, int p, int k);

void taoBaiMin(int m, int n, int p, int k) 
{
    // Khởi tạo mảng hai chiều để lưu trữ bãi mìn và trạng thái của các ô
    char** baiMin = new char* [m];
    bool** danhDau = new bool* [m];
    for (int i = 0; i < m; i++) 
    {
        baiMin[i] = new char[n];
        danhDau[i] = new bool[n];
    }

    // Khởi tạo giá trị ngẫu nhiên cho các ô trong lưới
    srand(time(NULL));
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            baiMin[i][j] = '.';
            danhDau[i][j] = false;
        }
    }
    for (int i = 0; i < p; i++) 
    {
        int x = rand() % m;
        int y = rand() % n;
        baiMin[x][y] = '*';
    }

    // Hiển thị bãi mìn ban đầu
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << baiMin[i][j] << " ";
        }
        cout << endl;
    }

    // Người chơi dò mìn
    int count = 0;
    while (k > 0 && count < m * n - p) 
    {
        int x, y;
        cout << "Nhap vi tri muon do min (hang, cot): ";
        cin >> x >> y;

        if (x < 0 || x >= m || y < 0 || y >= n) 
        {
            cout << "Vi tri khong hop le!" << endl;
            continue;
        }

        if (danhDau[x][y]) 
        {
            cout << "Vi tri da duoc do truoc do!" << endl;
            continue;
        }

        if (baiMin[x][y] == '*') 
        {
            cout << "Ban da trung min! Game over!" << endl;
            break;
        }

        int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
        int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
        int countMin = 0;
        for (int i = 0; i < 8; i++) 
        {
            int ni = x + dx[i];
            int nj = y + dy[i];
            if (ni >= 0 && ni < m && nj >= 0 && nj < n && baiMin[ni][nj] == '*') 
            {
                countMin++;
            }
        }
        danhDau[x][y] = true;
        cout << "So qua min xung quanh: " << countMin << endl;

        count++;
        k--;
    }

    // Kiểm tra kết quả
    if (count == m * n - p) 
    {
        cout << "Chuc mung! Ban da mo het cac o khong chua min!" << endl;
    }

    // Giải phóng bộ nhớ đã cấp phát cho mảng hai chiều
    for (int i = 0; i < m; i++) 
    {
        delete[] baiMin[i];
        delete[] danhDau[i];
    }
    delete[] baiMin;
    delete[] danhDau;
}