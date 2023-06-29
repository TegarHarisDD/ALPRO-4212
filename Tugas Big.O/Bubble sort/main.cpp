#include <iostream>
#include <chrono>

using namespace std;

void bubbleSort(int arr[], int n) {
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }


    bubbleSort(arr, n - 1);
}
// Best Case (Jika array sudah terurut): O(n)
// Average dan worst Case: O(n^2)
// O(n^2) karena ada loop dalam loop pada fungsi
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Mengukur waktu eksekusi
    auto start = chrono::high_resolution_clock::now();

    bubbleSort(arr, n);

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
