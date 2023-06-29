#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int linearSearchRecursive(int arr[], int n, int target) {
    if (n < 0) {
        return -1; // Basis: elemen tidak ditemukan
    }

    if (arr[n] == target) {
        return n; // Basis: elemen ditemukan
    }

    return linearSearchRecursive(arr, n - 1, target);
}
//Best Case: O(1)
//Average dan worst Case: O(n)
int main() {
    int arr[] = {5, 3, 8, 2, 1, 9, 4, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    // Mengukur waktu eksekusi algoritma linear search
    auto start = high_resolution_clock::now();
    int index = linearSearchRecursive(arr, n - 1, target);
    auto stop = high_resolution_clock::now();

    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    // Menghitung waktu eksekusi dalam mikrodetik
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Execution time: " << duration.count() << " microseconds" << endl;

    return 0;
}
