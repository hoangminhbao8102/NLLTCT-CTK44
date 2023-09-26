void taoBaiMin(int m, int n, int p);

void taoBaiMin(int m, int n, int p) 
{
    // Khởi tạo mảng hai chiều để lưu trữ bãi mìn
    char** baiMin = new char* [m];
    for (int i = 0; i < m; i++) 
    {
        baiMin[i] = new char[n];
    }

    // Khởi tạo giá trị ngẫu nhiên cho các ô trong lưới
    srand(time(NULL));
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            baiMin[i][j] = '.';
        }
    }
    for (int i = 0; i < p; i++) 
    {
        int x = rand() % m;
        int y = rand() % n;
        baiMin[x][y] = '*';
    }

    // Điền số quả mìn ở 8 ô xung quanh các ô không phải là quả mìn
    int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
    int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (baiMin[i][j] != '*') 
            {
                int count = 0;
                for (int k = 0; k < 8; k++) 
                {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if (ni >= 0 && ni < m && nj >= 0 && nj < n && baiMin[ni][nj] == '*') 
                    {
                        count++;
                    }
                }
                baiMin[i][j] = count + '0';
            }
        }
    }

    // Xuất ra màn hình bãi mìn đã tạo
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) {
            std::cout << baiMin[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Giải phóng bộ nhớ đã cấp phát cho mảng hai chiều
    for (int i = 0; i < m; i++) 
    {
        delete[] baiMin[i];
    }
    delete[] baiMin;
}