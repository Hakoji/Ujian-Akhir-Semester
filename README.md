# Ujian-Akhir-Semester

Soal  
**[Soal_UAS_Algoritma_II.pdf](./Soal%20UAS_Algoritma_II.pdf)**


## Dibuat Oleh
- Nama : Ranggi Febrian  
- NIM  : 231011402451  
- Kelas: 03TPLP029  

## Deskripsi Proyek
Kumpulan solusi dan implementasi program Ujian Akhir Semester (UAS) yang mencakup algoritma Huffman coding, manipulasi array, sorting, dan fractal menggunakan C++.

## Referensi Jawaban Soal

Jawaban lengkap untuk soal nomor 1 (a, b, dan sebagian dari c) serta nomor 2 (a dan b) telah didokumentasikan dalam file PDF berikut:

**[UAS_Algoritma II_Ranggi Febrian_231011402451.pdf](./UAS_Algoritma%20II_Ranggi%20Febrian_231011402451.pdf)**

1. **Kompresi String (Huffman Coding):** Implementasi algoritma Huffman untuk encoding dan decoding string.
2. **Penggabungan Array:** Menemukan pasangan bilangan dari dua array yang jumlahnya sesuai nilai tertentu dengan efisiensi optimal.
3. **Quick Sort (Fungsional):** Implementasi quick sort menggunakan gaya pemrograman fungsional tanpa loop.
4. **Sorting (Radix, Quick, Merge):** Membandingkan algoritma sorting, termasuk Radix Sort, Quick Sort, dan Merge Sort.
5. **Fractal (Sierpinski Triangle):** Menggambar fractal sederhana menggunakan rekursi.

---

## Struktur Repository

```
|-- src/
|    |-- no1_huffman.cpp       # Jawaban soal nomor 1
|    |-- no2_array_pairs.cpp   # Jawaban soal nomor 2
|    |-- no3_quick_sort.cpp    # Jawaban soal nomor 3
|    |-- no4_sorting.cpp       # Jawaban soal nomor 4
|    |-- no5_fractal.cpp       # Jawaban soal nomor 5
|-- README.md                  # Dokumentasi proyek
```

---

## Cara Menjalankan Program

1. Clone repository:
   ```bash
   git clone https://github.com/Hakoji/Ujian-Akhir-Semester.git
   ```
2. Navigasikan ke direktori sumber kode:
   ```bash
   cd Ujian-Akhir-Semester/src
   ```
3. Kompilasi program sesuai nomor soal:
   ```bash
   g++ -o no1 no1_huffman.cpp
   g++ -o no2 no2_array_pairs.cpp
   g++ -o no3 no3_quick_sort.cpp
   g++ -o no4 no4_sorting.cpp
   g++ -o no5 no5_fractal.cpp
   ```
4. Jalankan program:
   ```bash
   ./no1
   ./no2
   ./no3
   ./no4
   ./no5
   ```

---

## Contoh Input dan Output

### **Nomor 1: Huffman Coding**
**Input:**
```
Masukkan string: hello world
```
**Output:**
```
Encoded: 110011010101...
Decoded: hello world
```

### **Nomor 2: Pasangan Array**
**Input:**
```
Array1: {1, 2, 3, 4}
Array2: {5, 6, 7, 8}
Target: 9
```
**Output:**
```
Pasangan ditemukan: (1, 8), (2, 7), (3, 6), (4, 5)
```

### **Nomor 3: Quick Sort Fungsional**
**Input:**
```
Array: {34, 7, 23, 32, 5, 62}
```
**Output:**
```
Array setelah diurutkan: 5 7 23 32 34 62
```

### **Nomor 4: Perbandingan Sorting**
**Input:**
```
Array: {170, 45, 75, 90, 802, 24, 2, 66}
```
**Output:**
```
Radix Sort: 2 24 45 66 75 90 170 802
Quick Sort: 2 24 45 66 75 90 170 802
Merge Sort: 2 24 45 66 75 90 170 802
```

### **Nomor 5: Fractal**
**Output:**
Fractal berupa segitiga Sierpinski ditampilkan di jendela grafik.

---

## Kontak
Jika ada pertanyaan atau masalah terkait repository ini, silakan hubungi:  
- Email: ranggifbr@gmail.com  
- GitHub: [Hakoji](https://github.com/Hakoji)
