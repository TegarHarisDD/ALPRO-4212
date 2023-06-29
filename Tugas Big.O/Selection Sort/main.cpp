#include <iostream>
#include <chrono>

using namespace std;

void selectionSort(int arr[], int n, int index = 0) {
    if (index >= n - 1)
        return;

    int minIndex = index;

    for (int i = index + 1; i < n; i++) {
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }

    swap(arr[index], arr[minIndex]);

    selectionSort(arr, n, index + 1);
}
//Best, average dan worst Case: O(n^2)
// O(n^2) karena ada loop dalam loop pada fungsi

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Mengukur waktu eksekusi
    auto start = chrono::high_resolution_clock::now();

    selectionSort(arr, n);

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
