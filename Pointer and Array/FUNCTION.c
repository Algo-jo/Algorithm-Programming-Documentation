#include <stdio.h>

    /*
    Program di divide ke beberapa modules
    module di implementasikan menggunakan function
    function terdiri dari beberapa statement (program)

    [return type] <function name> ( <function parameter> ){ --> funct prototype
        int                      menjembatani func -> func
        // block statements --> funct body
    }
    
    */
int angka = 0; // global

//function prototype
int penjumlahan(int , int);
int pengurangan(int a, int b);
int perkalian(int a, int b);
double pembagian(double a, double b);

int penjumlahan(int a, int b){ // function yang memuat int a dan b
    int c = a + b;
    angka = 5;
    return c;
}
int pengurangan(int a, int b){ // function yang memuat int a dan b
    return a - b;
}
int perkalian(int a, int b){ // function yang memuat int a dan b
    return a * b;
}
double pembagian(double a, double b){ // function yang memuat int a dan b
    return a / b;
}

int ubah(int * c){ // --> function perubahan apalah gitu
    *c = 100; // bintang buat apa ye
}


int coba(int arr[]){
    printf("%d", sizeof(arr));
        for(int i = 0; i < 5; i++){
            printf("%d ", arr[i]);
        } // function tunjuk ke arr dan memanipulasi data
}



int main(){
    int arr[] = {1, 3, 5, 7, 11};
    int a, b, hasil;
    int c = 10, d = 15;
    scanf("%d %d", &a, &b);

    coba(arr); // memanggil function coba


    // printf("%d\n", angka); // inisialisasi awal
    // hasil = penjumlahan(a, b); // memanggil function di atas

    // printf("%d\n", hasil);
    // printf("%d\n", penjumlahan(a, b));
    // printf("%d\n", angka); // sudah memanggil function

    // printf("\n\n");
    // printf("%d\n", penjumlahan(a, b));
    // printf("%d\n", pengurangan(a, b));
    // printf("%d\n", perkalian(a, b));
    // printf("%lf\n\n", pembagian(a, b));
    // printf("%d\n", c);

    // ubah(&c); // --> memanggil function di atas
    // printf("%d\n", c);

    return 0;
}
