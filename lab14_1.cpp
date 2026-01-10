template <typename T>
void insertionSort(T d[], int N) {
    for (int i = 1; i < N; i++) {
        T key = d[i];
        int j = i - 1;

        while (j >= 0 && d[j] < key) {
            d[j + 1] = d[j];
            j = j - 1;
        }
        d[j + 1] = key;

        cout << "Pass " << i << ":";
        for (int k = 0; k < N; k++) {
            if (k > 0) cout << " " ; 
            cout << d[k];
        }
        cout << endl;
    }
}
