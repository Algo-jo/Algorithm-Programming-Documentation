#include <stdio.h>

double pi = (double) 22/7;

float perhitungan(float a){
    float hasil = 0;
    hasil = pi * a * a;
    return hasil;
}
int main(){
    float jari;
    scanf("%f", &jari);
    float hasil = perhitungan(jari);
    printf("Hasil Luasnya adalah %.2f\n", hasil);
    printf("Hasil pi adalah %.2lf\n", pi);

}
