#include <iostream>
#include <vector>
using namespace std;

void profilediri() {
    cout << endl;
    cout << "=======================" << endl;
    cout << "Nama  : Ranggi Febrian" << endl; 
    cout << "NIM   : 231011402451" << endl;
    cout << "Kelas : 03TPLP029" << endl;
    cout << "=======================" << endl << endl;
}

// Fungsi untuk memisahkan elemen yang lebih kecil atau lebih besar dari pivot
vector<int> filter(const vector<int>& arr, int pivot, bool lessThan) {
    vector<int> result;
    for (int num : arr) {
        if (lessThan) {
            if (num < pivot) result.push_back(num);
        } else {
            if (num > pivot) result.push_back(num);
        }
    }
    return result;
}

// Implementasi quick sort gaya fungsional
vector<int> quickSort(const vector<int>& arr) {
    if (arr.size() <= 1) return arr; // Basis rekursi

    int pivot = arr[0]; // Pilih elemen pertama sebagai pivot

    // Pisahkan elemen ke dalam dua grup
    vector<int> left = filter(arr, pivot, true);
    vector<int> right = filter(arr, pivot, false);

    // Rekursif untuk bagian kiri dan kanan, lalu gabungkan hasilnya
    vector<int> sortedLeft = quickSort(left);
    vector<int> sortedRight = quickSort(right);

    // Gabungkan hasil
    sortedLeft.push_back(pivot);
    sortedLeft.insert(sortedLeft.end(), sortedRight.begin(), sortedRight.end());

    return sortedLeft;
}

int main() {
    profilediri();
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    cout << "Array sebelum sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    vector<int> sortedArr = quickSort(arr);

    cout << "Array setelah sorting: ";
    for (int num : sortedArr) cout << num << " ";
    cout << endl;

    return 0;
}
