#include <iostream>
#include <chrono>

using namespace std;

void insertionSort(int arr[], int n) {
    if (n <= 1)
        return;

    insertionSort(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}
//Average dan worst Case: O(n^2)
// O(n^2) karena ada loop dalam loop pada fungsi
// Best Case (Jika array sudah terurut): O(n)
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Mengukur waktu eksekusi
    auto start = chrono::high_resolution_clock::now();

    insertionSort(arr, n);

    // Mengukur waktu eksekusi selesai
    auto end = chrono::high_resolution_clock::now();

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Menghitung durasi eksekusi dalam milidetik (ms)
    double duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

    cout << "Waktu eksekusi: " << duration << " ms" << endl;

    return 0;
}
