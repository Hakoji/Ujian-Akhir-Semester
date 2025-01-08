#include <iostream>
#include <vector>
using namespace std;

void profilediri() {
    cout << endl;
    cout << "-----------------------" << endl;
    cout << "Nama  : Ranggi Febrian" << endl; 
    cout << "NIM   : 231011402451" << endl;
    cout << "Kelas : 03TPLP029" << endl;
    cout << "-----------------------" << endl << endl;
}

// Fungsi untuk menghitung segitiga Pascal
void generatePascalTriangle(vector<vector<int>>& triangle, int rows) {
    for (int i = 0; i < rows; ++i) {
        triangle[i][0] = 1; // Kolom pertama selalu 1
        for (int j = 1; j <= i; ++j) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
}

void displayPascalPattern(const vector<vector<int>>& triangle, int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rows - i - 1; ++j) cout << " "; // Spasi untuk keseimbangan
        for (int j = 0; j <= i; ++j) {
            if (triangle[i][j] % 2 == 1) // Tampilkan '*' untuk angka ganjil
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main() {
    profilediri();
    int rows = 10; // Jumlah baris segitiga Pascal

    // Inisialisasi segitiga Pascal
    vector<vector<int>> triangle(rows, vector<int>(rows, 0));
    generatePascalTriangle(triangle, rows);

    // Tampilkan pola segitiga Pascal
    displayPascalPattern(triangle, rows);

    return 0;
}
