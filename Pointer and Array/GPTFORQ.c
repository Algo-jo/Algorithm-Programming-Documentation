
#include <stdio.h>
#include <string.h>


int main() {
    int T;  // Jumlah kasus uji
    printf("Masukkan jumlah kasus uji: ");
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, M, Q;
        printf("Masukkan N (jumlah teman), M (jumlah ruangan), dan Q (jumlah teman yang berkunjung): ");
        scanf("%d %d %d", &N, &M, &Q);

        int patterns[N][M];      // Pola kunjungan teman
        int lamp_states[M];      // Status lampu di setiap ruangan

        // Inisialisasi lampu dalam keadaan mati secara manual
        for (int j = 0; j < M; j++) {
            lamp_states[j] = 0;
        }

        // Input pola kunjungan untuk setiap teman
        printf("Masukkan pola kunjungan teman:\n");
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &patterns[i][j]);
            }
        }

        // Input daftar teman yang berkunjung ke lorong
        printf("Masukkan daftar teman yang berkunjung:\n");
        for (int i = 0; i < Q; i++) {
            int friend_index;
            scanf("%d", &friend_index);  // Indeks teman yang akan berkunjung (1-based)
            friend_index--;  // Ubah ke indeks 0-based

            // Proses kunjungan teman ke ruangan-ruangan
            for (int j = 0; j < M; j++) {
                if (patterns[friend_index][j] == 1) {
                    lamp_states[j] = 1 - lamp_states[j];  // Toggle lampu (0 jadi 1, 1 jadi 0)
                }
            }
        }

        // Output hasil untuk setiap ruangan
        printf("Case #%d:\n", t);
        for (int j = 0; j < M; j++) {
            if (lamp_states[j] == 1) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }

    return 0;
}
