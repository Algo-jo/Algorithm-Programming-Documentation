#include <stdio.h>

int main() {
    int tinggi, i, j, k;

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);

    for (i = 1; i <= tinggi; i++) {
        // Cetak spasi untuk rata tengah
        for (j = tinggi; j > i; j--) {
            printf(" ");
        }
        // Cetak bintang untuk segitiga
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
