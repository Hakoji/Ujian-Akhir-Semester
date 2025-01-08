#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
void profilediri() {
    cout << endl;
    cout << "=======================" << endl;
    cout << "Nama  : Ranggi Febrian" << endl; 
    cout << "NIM   : 231011402451" << endl;
    cout << "Kelas : 03TPLP029" << endl;
    cout << "=======================" << endl << endl;
}
// Radix Sort Helper Function: Counting Sort
void countingSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n);
    int count[10] = {0};

    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Radix Sort Function
void radixSort(vector<int>& arr) {
    int maxElement = *max_element(arr.begin(), arr.end());
    for (int exp = 1; maxElement / exp > 0; exp *= 10)
        countingSort(arr, exp);
}

// Quick Sort Function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);

        int pi = i + 1;
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Merge Sort Helper Function
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

// Merge Sort Function
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    profilediri();
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    cout << "Original Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    vector<int> radixArr = arr;
    vector<int> quickArr = arr;
    vector<int> mergeArr = arr;

    // Radix Sort
    radixSort(radixArr);
    cout << "After Radix Sort: ";
    for (int num : radixArr) cout << num << " ";
    cout << endl;

    // Quick Sort
    quickSort(quickArr, 0, quickArr.size() - 1);
    cout << "After Quick Sort: ";
    for (int num : quickArr) cout << num << " ";
    cout << endl;

    // Merge Sort
    mergeSort(mergeArr, 0, mergeArr.size() - 1);
    cout << "After Merge Sort: ";
    for (int num : mergeArr) cout << num << " ";
    cout << endl;

    return 0;
}
