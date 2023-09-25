int getRandomNumber(int min, int max);
bool hasDuplicate(int a[], int n);
double calculateProbability(int N, int M);

int getRandomNumber(int min, int max) 
{
    return min + rand() % (max - min + 1);
}

bool hasDuplicate(int a[], int n) {
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            return true;
        }
    }
    return false;
}

double calculateProbability(int N, int M) {
    int F = 0;
    for (int i = 0; i < M; i++) {
        int* a = new int[N];
        for (int j = 0; j < N; j++) {
            a[j] = j + 1;
        }
        std::random_shuffle(a, a + N);
        if (hasDuplicate(a, N)) {
            F++;
        }
        delete[] a;
    }
    return static_cast<double>(F) / M;
}