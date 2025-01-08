#include <iostream>
#include <unordered_map>
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

void findPairsWithSum(const vector<int>& arr1, const vector<int>& arr2, int K) {
    unordered_map<int, int> hashMap; // Untuk menyimpan elemen-elemen dari arr1

    // Masukkan elemen dari arr1 ke dalam hash map
    for (int num : arr1) {
        hashMap[num]++;
    }

    cout << "Pasangan yang jumlahnya sama dengan " << K << ":\n";

    // Cari pasangan di arr2
    for (int num : arr2) {
        int complement = K - num;
        if (hashMap.find(complement) != hashMap.end()) {
            cout << "(" << complement << ", " << num << ")\n";
        }
    }
}

int main() {
    profilediri();
    int n1, n2, K;

    cout << "Masukkan ukuran array pertama: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Masukkan elemen-elemen array pertama:\n";
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }

    cout << "Masukkan ukuran array kedua: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Masukkan elemen-elemen array kedua:\n";
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }

    cout << "Masukkan nilai K: ";
    cin >> K;

    findPairsWithSum(arr1, arr2, K);

    return 0;
}
