#include <stdio.h>

int main(){
    //DEKLARASI Variabel proceed, operand, dan operator
    int proceed; // --> untuk melanjutkan program atau keluar dari program
    double first_input, second_input, output; // --> untuk menyimpan angka operand
    char operator; // --> untuk menyimpan operator
    double testing; // --> untuk mengecek hasil pengoperasian adalah bilangan bulat atau berkoma
    int error = 1; // --> untuk memastikan operator yang diinput valid

    // TAMPILAN saat masuk ke dalam program
    // serta penginputan untuk lanjut atau keluar program
    printf("Selamat datang di Kronos!\n");
    printf("Sahabat paling gercep dan setiamu untuk melakukan pengoperasian!\n");
    printf("Ingin melakukan pengoperasian sekarang?\n");
    printf("Ketik \"1\" untuk lanjut atau \"0\" untuk keluar\n");
    scanf("%d", &proceed);

    // MASUK atau KELUAR program
    if(proceed == 1){ // --> jika inputan 1, maka masuk ke dalam program
            puts("");
            //PENGOPERASIAN
            printf("Pastikan operator yang kalian input hanya berupa + - x atau / \n");
            printf("Masukkan angka: ");
            scanf("%lf", &first_input); getchar(); // --> angka input pertama
            
            printf("Masukkan operator: ");
            scanf("%c", &operator); getchar(); // --> operator yang diinput

            printf("Masukkan angka: ");
            scanf("%lf", &second_input); getchar(); // --> angka inputan kedua

            // PROSES pengecekan operator yang diinput
            switch (operator) {
                    case '+' : //   PENJUMLAHAN jika menginput '+'
                        output = first_input + second_input;
                        break;
                    
                    case '-' : // PENGURANGAN jika menginput '-'
                        output = first_input - second_input;
                        break;

                    case 'x' : // PERKALIAN jika menginput 'x'
                        output = first_input * second_input;
                        break;

                    case '/' : // PEMBAGIAN jika menginput '/'
                        output = first_input / second_input;
                        break;

                    default : // PEMBERITAHUAN jika operator tidak sesuai
                        printf("Operator yang anda input tidak valid :<\n");
                        error = 0;
                        break;
            }
            // PROSES PENGECEKAN apakah hasil output bilangan bulat atau berkoma
                testing = output;
                testing = testing - (long long int)testing;

            if(error == 1){ // --> Output tidak ditampilkan jika operator salah
                if(testing == 0){ // --> print long long integer jika hasil berupa bilangan bulat
                    printf("Hasil pengoperasian adalah: %d\n", (long long int)output);
                }
                else if(testing > 0){ // --> print double jika hasil berupa bilangan berkoma
                    printf("Hasil pengoperasian adalah: %lf\n", output);
                }
            }
    }
    // Jika inputan 0 atau lainnya, maka akan keluar dari program
    else if (proceed == 0) printf("Sampai jumpa di lain waktu! Datang lagi ya :>\n");
    else printf("Angka yang anda input tidak valid :<\n");

    return 0;
}