#include <stdio.h>

int main() {
    int test, banyak, jumlah, j;

    // Input jumlah test case
    scanf("%d", &test);

    for (int i = 1; i <= test; i++) {
        int total = 0;

        // Input jumlah angka yang akan diinput pada test case ini
        scanf("%d", &banyak);
        getchar(); // Hanya membaca dan membuang satu karakter newline setelah banyak

        // Hanya membaca sebanyak 'banyak' angka
        for (j = 0; j < banyak; j++) {
            scanf("%d", &jumlah);
            total += jumlah;
        }

        // Tampilkan hasil
        printf("Case #%d: %d\n", i, total);
    }

    return 0;
}
