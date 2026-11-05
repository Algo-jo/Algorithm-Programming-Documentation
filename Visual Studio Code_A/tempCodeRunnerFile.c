#include <stdio.h>

int main() {
    int testcase, tinggi, lebar;
    scanf("%d", &testcase);  // Membaca jumlah kasus

    for (int i = 1; i <= testcase; i++) {
        scanf("%d %d", &tinggi, &lebar);  // Membaca tinggi dan lebar setiap bingkai
        printf("Case #%d:\n", i);  // Cetak nomor kasus

        // Membuat bingkai sesuai tinggi dan lebar
        for (int j = 1; j <= tinggi; j++) {
            for (int k = 1; k <= lebar; k++) {
                if (j == 1 || j == tinggi || k == 1 || k == lebar) {
                    printf("#");  // Cetak '#' di batas bingkai
                } else {
                    printf(" ");  // Cetak spasi di bagian dalam bingkai
                }
            }
            printf("\n");  // Pindah ke baris baru setelah tiap baris bingkai selesai
        }

        // Tambahkan baris kosong antara dua kasus, kecuali setelah kasus terakhir
        if (i != testcase) {
            printf("\n");
        }
    }

    return 0;
}
