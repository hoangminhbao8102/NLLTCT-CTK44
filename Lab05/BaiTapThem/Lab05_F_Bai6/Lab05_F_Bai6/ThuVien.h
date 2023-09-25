void insertArray(float a[], int& sizeA, float b[], int sizeB);
void insertSorted(float a[], int& sizeA, float b[], int sizeB);

void insertArray(float a[], int& sizeA, float b[], int sizeB) 
{
    for (int i = 0; i < sizeB; i++) 
    {
        a[sizeA] = b[i];
        sizeA++;
    }
}

// Định nghĩa hàm chèn các phần tử của b vào a sao cho vẫn được thứ tự tăng
void insertSorted(float a[], int& sizeA, float b[], int sizeB) 
{
    int indexA = sizeA - 1; // Chỉ số cuối cùng của mảng a
    int indexB = sizeB - 1; // Chỉ số cuối cùng của mảng b
    int indexMerged = sizeA + sizeB - 1; // Chỉ số cuối cùng của mảng kết hợp

    // Chèn các phần tử của mảng b vào mảng a từ cuối lên đầu
    while (indexA >= 0 && indexB >= 0) 
    {
        if (a[indexA] > b[indexB]) 
        {
            a[indexMerged] = a[indexA];
            indexA--;
        }
        else 
        {
            a[indexMerged] = b[indexB];
            indexB--;
        }
        indexMerged--;
    }

    // Chèn các phần tử còn lại của mảng b vào mảng a (nếu có)
    while (indexB >= 0) 
    {
        a[indexMerged] = b[indexB];
        indexB--;
        indexMerged--;
    }

    sizeA += sizeB; // Cập nhật lại kích thước của mảng a
}