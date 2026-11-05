#include <stdio.h>

int main() {
    int T;  // Jumlah kasus uji
    printf("Masukkan jumlah kasus uji: ");
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, K;
        printf("Masukkan panjang lorong (N) dan waktu tahan napas (K): ");
        scanf("%d %d", &N, &K);

        char lorong[101];  // Buffer untuk string lorong, maksimal 100 karakter
        printf("Masukkan petak lorong (0 untuk tidak ada tangga, 1 untuk ada tangga): ");
        scanf("%s", lorong);  // Menggunakan scanf untuk membaca string lorong

        int remaining_breath = K;
        int is_alive = 1;  // Anggap Jojo hidup hingga terbukti sebaliknya

        for (int i = 0; i < N; i++) {
            // Ubah karakter menjadi integer
            int step = lorong[i] - '0';

            if (step == 1) {
                remaining_breath = K;  // Isi ulang napas saat ada tangga
            } else {
                remaining_breath--;    // Setiap langkah napas berkurang
            }

            if (remaining_breath < 0) {
                is_alive = 0; // Jika napas habis sebelum mencapai ujung
                break;
            }
        }

        // Output hasil
        printf("Case #%d: %s\n", t, is_alive ? "Alive" : "Dead");
    }

    return 0;
}
