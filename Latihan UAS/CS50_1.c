#include <stdio.h>

double diskon(double hargaAwal){
    return hargaAwal * 0.5;
}

int main(void){
    double harga;
    scanf("%lf", &harga);
    double akhir = diskon(harga);
        
    printf("%.0lf\n", akhir);
    
    return 0;
}