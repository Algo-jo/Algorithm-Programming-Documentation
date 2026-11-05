#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_LENGTH 50

int main() {
    char names[MAX_NAMES][MAX_LENGTH];
    int count = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Masukkan nama\n");
        printf("2. Lihat semua nama\n");
        printf("3. Keluar\n");
        printf("Pilih opsi: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count >= MAX_NAMES) {
                printf("Kapasitas daftar nama sudah penuh.\n");
            } else {
                printf("Masukkan nama: ");
                scanf(" %[^\n]s", names[count]);
                count++;
                printf("Nama berhasil ditambahkan!\n");
            }
        } else if (choice == 2) {
            if (count == 0) {
                printf("Tidak ada nama yang tersimpan.\n");
            } else {
                printf("Daftar nama:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. %s\n", i + 1, names[i]);
                }
            }
        } else if (choice == 3) {
            printf("Keluar dari program.\n");
        } else {
            printf("Pilihan tidak valid. Coba lagi.\n");
        }
    } while (choice != 3);

    return 0;
}
