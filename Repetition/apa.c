#include <stdio.h>

int main() {
    char operator;
    double num, result = 0;
    int firstInput = 1; // Penanda input pertama

    printf("Kalkulator sederhana. Masukkan angka dan operator secara terus-menerus.\n");
    printf("Ketik '=' untuk menghitung hasil.\n");

    while (1) {
        if (firstInput) {
            // Input pertama, ambil angka
            printf("Masukkan angka: ");
            scanf("%lf", &result); // Input pertama langsung disimpan sebagai result
            firstInput = 0; // Setelah input pertama, set flag menjadi 0
        } else {
            // Setelah input pertama, ambil operator
            printf("Masukkan operator (+, -, *, /) atau '=' untuk keluar: ");
            scanf(" %c", &operator);

            if (operator == '=') {
                // Jika operator adalah '=', keluar dari loop
                break;
            }

            // Masukkan angka berikutnya
            printf("Masukkan angka: ");
            scanf("%lf", &num);

            // Lakukan operasi sesuai operator
            switch (operator) {
                case '+':
                    result += num;
                    break;
                case '-':
                    result -= num;
                    break;
                case '*':
                    result *= num;
                    break;
                case '/':
                    if (num != 0) {
                        result /= num;
                    } else {
                        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
                    }
                    break;
                default:
                    printf("Operator tidak valid.\n");
                    break;
            }
        }
    }

    // Tampilkan hasil akhir
    printf("Hasil: %.2lf\n", result);

    return 0;
}
