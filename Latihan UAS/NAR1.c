#include <stdio.h>

int main(){
    int n;
    printf("============================\n");
    printf("|| Cek Angka Ganjil Genap ||\n");
    printf("============================\n");
    printf("Masukkan angka: ");
    scanf("%d", &n); getchar();

    if(n % 2 == 1) printf("\nAngka %d merupakan bilangan ganjil\n", n);
    else printf("\nAngka %d merupakan bilangan genap\n", n);
    printf("Tekan enter untuk mengakhiri...");
    getchar();
    return 0;
}