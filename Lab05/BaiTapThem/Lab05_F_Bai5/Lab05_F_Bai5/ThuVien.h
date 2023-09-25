bool checkDuplicate(int a[], int n);

bool checkDuplicate(int a[], int n) 
{
    int countArr[n] = { 0 }; // Khởi tạo mảng countArr với giá trị ban đầu là 0

    // Duyệt qua mảng a và tăng giá trị tương ứng trong mảng countArr
    for (int i = 0; i < n; i++) {
        countArr[a[i] - 1]++;
    }

    // Duyệt qua mảng countArr để kiểm tra nếu có phần tử xuất hiện ít nhất 2 lần
    for (int i = 0; i < n; i++) {
        if (countArr[i] >= 2) {
            return true; // Mảng có chứa ít nhất 2 phần tử trùng nhau
        }
    }

    return false; // Mảng không có phần tử trùng nhau
}