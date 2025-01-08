#include <iostream>
#include <graphics.h>  // library untuk menggambar

void drawSierpinski(int x1, int y1, int x2, int y2, int x3, int y3, int depth) {
    if (depth == 0) {
        // Gambar segitiga jika kedalaman rekursi mencapai 0
        line(x1, y1, x2, y2);
        line(x2, y2, x3, y3);
        line(x3, y3, x1, y1);
    } else {
        // Hitung titik tengah dari setiap sisi segitiga
        int mx1 = (x1 + x2) / 2;
        int my1 = (y1 + y2) / 2;
        int mx2 = (x2 + x3) / 2;
        int my2 = (y2 + y3) / 2;
        int mx3 = (x3 + x1) / 2;
        int my3 = (y3 + y1) / 2;

        // Panggil rekursif untuk setiap segitiga kecil
        drawSierpinski(x1, y1, mx1, my1, mx3, my3, depth - 1);
        drawSierpinski(mx1, my1, x2, y2, mx2, my2, depth - 1);
        drawSierpinski(mx3, my3, mx2, my2, x3, y3, depth - 1);
    }
}

int main() {
    // Inisialisasi grafik mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Titik-titik awal segitiga besar
    int x1 = 300, y1 = 100;
    int x2 = 500, y2 = 100;
    int x3 = 400, y3 = 400;

    // Kedalaman rekursi (semakin besar, semakin banyak segitiga)
    int depth = 5;

    // Menggambar segitiga Sierpinski
    drawSierpinski(x1, y1, x2, y2, x3, y3, depth);

    // Tunggu input sebelum menutup jendela grafik
    getch();
    closegraph();

    return 0;
}
