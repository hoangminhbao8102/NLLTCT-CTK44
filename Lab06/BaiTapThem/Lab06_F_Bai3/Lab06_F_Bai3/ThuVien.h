const int MAX_SIZE = 100; // giới hạn kích thước của ma trận
const char EMPTY = ' '; // ký tự đại diện cho ô trống

// Hàm tìm dãy liên tiếp các ô chứa giá trị X dài nhất trong ma trận vuông cấp n
int TimDayLienTiepX(char matrix[MAX_SIZE][MAX_SIZE], int n);

int TimDayLienTiepX(char matrix[MAX_SIZE][MAX_SIZE], int n)
{
    int maxLen = 0; // độ dài dãy liên tiếp lớn nhất
    int currentLen; // độ dài dãy liên tiếp hiện tại

    // Kiểm tra dãy liên tiếp theo chiều ngang
    for (int i = 0; i < n; i++)
    {
        currentLen = 0;
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 'X')
            {
                currentLen++;
                if (currentLen > maxLen)
                {
                    maxLen = currentLen;
                }
            }
            else
            {
                currentLen = 0;
            }
        }
    }

    // Kiểm tra dãy liên tiếp theo chiều dọc
    for (int j = 0; j < n; j++)
    {
        currentLen = 0;
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] == 'X')
            {
                currentLen++;
                if (currentLen > maxLen)
                {
                    maxLen = currentLen;
                }
            }
            else
            {
                currentLen = 0;
            }
        }
    }

    // Kiểm tra dãy liên tiếp theo đường chéo chính
    for (int i = 0; i < n; i++)
    {
        currentLen = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (matrix[i + j][j] == 'X')
            {
                currentLen++;
                if (currentLen > maxLen)
                {
                    maxLen = currentLen;
                }
            }
            else
            {
                currentLen = 0;
            }
        }
    }

    // Kiểm tra dãy liên tiếp theo đường chéo phụ
    for (int i = 0; i < n; i++)
    {
        currentLen = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (matrix[j][i + j] == 'X')
            {
                currentLen++;
                if (currentLen > maxLen)
                {
                    maxLen = currentLen;
                }
            }
            else
            {
                currentLen = 0;
            }
        }
    }

    return maxLen;
}