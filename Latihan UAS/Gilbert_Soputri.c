#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);

    for (int t = 0; t < testcase; t++) {
        int ganjil;
        scanf("%d", &ganjil);

        if (ganjil == 1) {
            printf("*\n"); // Langsung cetak satu bintang untuk N = 1
        } else {
            // Border atas
            for (int i = 0; i < ganjil; i++) {
                printf("*");
            }
            printf("\n");

            // Pola tengah dengan border samping
            for (int i = 1; i < ganjil - 1; i++) {
                printf("*");
                for (int j = 1; j < ganjil - 1; j++) {
                    if (j == i || j == ganjil - 1 - i) {
                        printf("*");
                    } else {
                        printf(" ");
                    }
                }
                printf("*\n");
            }

            // Border bawah
            for (int i = 0; i < ganjil; i++) {
                printf("*");
            }
            printf("\n");
        }

        // Baris kosong antar test case kecuali di akhir
        if (t < testcase - 1) {
            printf("\n");
        }
    }
    return 0;
}