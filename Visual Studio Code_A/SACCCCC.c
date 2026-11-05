#include <stdio.h>

int main() {

    int testcase, banyak_permen, uang, hpermen, j, i;
    long long int bankpermen;
    int kasus = 0;

    // Membaca jumlah testcase
    scanf("%d", &testcase);

    for (i = 1; i <= testcase; i++) {
        kasus++;  // Mengupdate nomor kasus
        
        // Membaca banyak_permen dan uang
        scanf("%d %d", &banyak_permen, &uang);
        bankpermen = 0;  // Inisialisasi ulang bankpermen setiap test case baru
        
        int printed_zero = 0;  // Flag untuk memastikan kita tidak print lebih dari sekali jika uang tidak cukup

        // Loop untuk setiap harga permen
        for (j = 0; j < banyak_permen; j++) {
            scanf("%d", &hpermen);  // Input harga permen ke-j
            
            // Jika harga permen pertama lebih dari uang, langsung print 0 dan hentikan perhitungan
            if (j == 0 && hpermen > uang) {
                printf("Case #%d: 0\n", kasus);
                printed_zero = 1;  // Tandai bahwa kita sudah print 0
                break;  // Keluar dari loop untuk test case ini
            }
            
            // Menambahkan harga permen ke total bankpermen
            bankpermen += hpermen;
        }

        // Jika belum print 0, cek apakah uang cukup atau tidak
        if (!printed_zero) {
            if (uang < bankpermen) {
                // Jika uang lebih sedikit dari total harga permen
                printf("Case #%d: %d\n", kasus, uang);
            } else {
                // Jika uang cukup untuk membeli semua permen
                printf("Case #%d: %lld\n", kasus, bankpermen);
            }
        }
    }

    return 0;
}
