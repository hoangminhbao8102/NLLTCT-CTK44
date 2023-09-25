void bubbleSort(int a[], int n);
void printSortedArray(int a[], int n);

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void printSortedArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Phan tu thu " << i + 1 << ": " << a[i] << std::endl;
    }
}