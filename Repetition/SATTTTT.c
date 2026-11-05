#include <stdio.h>

int main() {
    int T, X;

    // Masukkan jumlah kasus uji
    printf("Masukkan jumlah kasus uji: ");
    scanf("%d", &T);

    // Proses setiap kasus uji
    for (int t = 0; t < T; t++) {
        // Masukkan panjang kaki segitiga
        printf("Masukkan panjang kaki segitiga: ");
        scanf("%d", &X);

        // Gambar segitiga sama kaki untuk panjang kaki X
        for (int i = 1; i <= X; i++) {
            // Cetak spasi untuk meratakan segitiga di tengah
            for (int j = i; j < X; j++) {
                printf(" ");
            }
            // Cetak simbol '#' untuk membentuk segitiga
            for (int k = 1; k <= (2 * i - 1); k++) {
                printf("#");
            }
            // Pindah ke baris berikutnya
            printf("\n");
        }
    }

    return 0;
}
