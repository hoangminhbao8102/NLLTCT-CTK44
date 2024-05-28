int** createSpiralMatrix(int n);
double averageMatrix(int** matrix, int n);
int sumOfSquares(int** matrix, int n);
int maxDifferenceConsecutive(int** matrix, int n);
int maxSumOfKConsecutive(int** matrix, int n, int k);
void findMostFrequent(int** matrix, int n);
void findMaxNegative(int** matrix, int n);
void countAndPrintElementsAtLeastKTimes(int** matrix, int n, int k);
int countOccurrencesFrom(int** matrix, int n, int x, int vt);
void shuffleMatrix(int** matrix, int n);
bool isPrime(int num);
void sortPrimesFirst(int** matrix, int n);

// Hàm để tạo ma trận xoắn ốc
int** createSpiralMatrix(int n) 
{
    int** matrix = new int* [n];
    for (int i = 0; i < n; ++i) 
    {
        matrix[i] = new int[n];
    }

    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (value <= n * n) 
    {
        for (int i = left; i <= right; ++i) matrix[top][i] = value++;
        top++;
        for (int i = top; i <= bottom; ++i) matrix[i][right] = value++;
        right--;
        if (top <= bottom) 
        {
            for (int i = right; i >= left; --i) matrix[bottom][i] = value++;
            bottom--;
        }
        if (left <= right) 
        {
            for (int i = bottom; i >= top; --i) matrix[i][left] = value++;
            left++;
        }
    }
    return matrix;
}

// Hàm tính trung bình cộng của các phần tử trong ma trận
double averageMatrix(int** matrix, int n) 
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            sum += matrix[i][j];
            count++;
        }
    }
    return static_cast<double>(sum) / count;
}

//Tính tổng bình phương của các phần tử trong mảng
int sumOfSquares(int** matrix, int n) 
{
    int total = 0;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            total += matrix[i][j] * matrix[i][j];
        }
    }
    return total;
}

//Tính độ lệch lớn nhất giữa 2 phần tử nằm liên tiếp nhau
int maxDifferenceConsecutive(int** matrix, int n) 
{
    int maxDiff = 0;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n - 1; ++j) 
        {
            maxDiff = max(maxDiff, abs(matrix[i][j] - matrix[i][j + 1]));
            if (i < n - 1) 
            {
                maxDiff = max(maxDiff, abs(matrix[i][j] - matrix[i + 1][j]));
            }
        }
    }
    return maxDiff;
}

//Tính tổng lớn nhất của k phần tử liên tiếp
int maxSumOfKConsecutive(int** matrix, int n, int k) 
{
    int* flat = new int[n * n];
    int idx = 0;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            flat[idx++] = matrix[i][j];
        }
    }

    int maxSum = 0, currentSum = 0;
    for (int i = 0; i < k; ++i) 
    {
        currentSum += flat[i];
    }
    maxSum = currentSum;

    for (int i = k; i < k + n * n; ++i) 
    {
        currentSum = currentSum - flat[(i - k) % (n * n)] + flat[i % (n * n)];
        maxSum = max(maxSum, currentSum);
    }

    delete[] flat;
    return maxSum;
}

//Tìm phần tử xuất hiện nhiều nhất và số lần xuất hiện của nó
void findMostFrequent(int** matrix, int n) 
{
    int size = n * n;
    int* count = new int[size + 1](); // Khởi tạo mảng đếm

    // Đếm số lần xuất hiện của mỗi số
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            count[matrix[i][j]]++;
        }
    }

    // Tìm số xuất hiện nhiều nhất
    int mostFrequent = 0;
    int frequency = 0;
    for (int i = 1; i <= size; ++i) 
    {
        if (count[i] > frequency) {
            frequency = count[i];
            mostFrequent = i;
        }
    }

    cout << "Phan tu xuat hien nhieu nhat: " << mostFrequent << " (" << frequency << " lan)\n";
    delete[] count;
}

//Tìm số âm lớn nhất và vị trí của nó
void findMaxNegative(int** matrix, int n) 
{
    int maxNegative = INT_MIN;
    int posX = -1, posY = -1;

    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            if (matrix[i][j] < 0 && matrix[i][j] > maxNegative) 
            {
                maxNegative = matrix[i][j];
                posX = i;
                posY = j;
            }
        }
    }

    if (posX == -1) 
    {
        cout << "Khong co so am trong ma tran.\n";
    }
    else 
    {
        cout << "So am lon nhat: " << maxNegative << " tai vi tri (" << posX << ", " << posY << ")\n";
    }
}

//Đếm và xuất các phần tử xuất hiện ít nhất k lần với k cho trước
void countAndPrintElementsAtLeastKTimes(int** matrix, int n, int k) 
{
    int size = n * n;
    int* count = new int[size + 1](); // Mảng để đếm số lần xuất hiện, khởi tạo tất cả giá trị là 0

    // Đếm số lần xuất hiện của mỗi phần tử
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            count[matrix[i][j]]++;
        }
    }

    // Xuất các phần tử xuất hiện ít nhất k lần
    cout << "Cac phan tu xuat hien it nhat " << k << " lan:\n";
    bool found = false;
    for (int i = 1; i <= size; ++i) 
    {
        if (count[i] >= k) 
        {
            cout << "Phan tu " << i << " xuat hien " << count[i] << " lan.\n";
            found = true;
        }
    }

    if (!found) 
    {
        cout << "Khong co phan tu nao xuat hien it nhat " << k << " lan.\n";
    }

    delete[] count; // Giải phóng bộ nhớ đã cấp phát
}

//Đếm số lần xuất hiện của phần tử x kể từ vị trí vt cho trước
int countOccurrencesFrom(int** matrix, int n, int x, int vt) 
{
    int count = 0;
    bool startCounting = false;
    int index = 0;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            if (index++ >= vt && matrix[i][j] == x) 
            {
                count++;
            }
        }
    }
    return count;
}

//Xáo trộn các phần tử trong mảng một cách ngẫu nhiên
void shuffleMatrix(int** matrix, int n) 
{
    int size = n * n;
    int* flat = new int[size];
    int idx = 0;

    // Phẳng hóa ma trận
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            flat[idx++] = matrix[i][j];
        }
    }

    // Xáo trộn
    random_device rd;
    mt19937 g(rd());
    for (int i = size - 1; i > 0; --i) 
    {
        int j = g() % (i + 1);
        swap(flat[i], flat[j]);
    }

    // Đưa trở lại ma trận
    idx = 0;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            matrix[i][j] = flat[idx++];
        }
    }

    delete[] flat;
}

//Sắp các số nguyên tố nằm đầu mảng và tăng, các số còn lại nằm ở cuối và giảm dần
bool isPrime(int num) 
{
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

void sortPrimesFirst(int** matrix, int n) 
{
    int size = n * n;
    int* flat = new int[size];
    int idx = 0;

    // Phẳng hóa ma trận
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            flat[idx++] = matrix[i][j];
        }
    }

    // Phân loại và sắp xếp
    sort(flat, flat + size, [](int a, int b) 
        {
        bool aIsPrime = isPrime(a);
        bool bIsPrime = isPrime(b);
        if (aIsPrime && bIsPrime) return a < b;
        if (!aIsPrime && !bIsPrime) return a > b;
        return aIsPrime > bIsPrime;
        }
    );

    // Đưa trở lại ma trận
    idx = 0;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            matrix[i][j] = flat[idx++];
        }
    }

    delete[] flat;
}
