#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; // Basis: elemen tidak ditemukan
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid; // Basis: elemen ditemukan
    }

    if (arr[mid] > target) {
        return binarySearchRecursive(arr, left, mid - 1, target); // Rekursif: mencari di setengah kiri
    }

    return binarySearchRecursive(arr, mid + 1, right, target); // Rekursif: mencari di setengah kanan
}
//Best, average dan worst Case: O(log n)

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    // Mengukur waktu eksekusi algoritma binary search
    auto start = high_resolution_clock::now();

    int index = binarySearchRecursive(arr, 0, n - 1, target);

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
